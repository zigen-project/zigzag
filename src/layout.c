#include <stdlib.h>
#include <wayland-server-core.h>
#include <zigzag.h>

#include "common.h"
#include "log.h"

ZIGZAG_EXPORT
struct zigzag_layout *
zigzag_layout_create(int output_width, int output_height, void *state,
    zigzag_layout_on_damage_t on_damage)
{
  struct zigzag_layout *self;
  self = zalloc(sizeof *self);
  if (self == NULL) {
    LOG_ERROR("Failed to allocate memory");
    goto err;
  }
  self->output_width = output_width;
  self->output_height = output_height;

  self->state = state;

  self->on_damage = on_damage;

  wl_list_init(&self->nodes);

err:
  return NULL;
}

ZIGZAG_EXPORT
void
zigzag_layout_destroy(struct zigzag_layout *self)
{
  wl_list_remove(&self->nodes);
  free(self);
}

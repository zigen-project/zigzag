_source = [
    'cairo_util.c',
    'log.c',
    'node.c',
    'layout.c',
]

_zigzag_deps = [
    cairo_dep,
    wayland_server_dep,
    wlroots_dep,
]

_zigzag_lib = library(
    'zigzag',
    _source,
    install: true,
    dependencies: _zigzag_deps,
    include_directories: public_inc,
)

pkgconfig.generate(
    _zigzag_lib,
    name: 'zigzag',
    description: 'UI library for ZIGEN windowing system',
    version: meson.project_version(),
)
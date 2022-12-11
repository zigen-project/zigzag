project(
  'zigzag', 'c', 'cpp',
  version: '0.0.1',
  license: 'MIT',
  meson_version: '>= 0.58.0',
  default_options: [ 'warning_level=3', 'werror=true', 'optimization=2', 'c_std=gnu11', 'cpp_std=gnu++17' ],
)

cc = meson.get_compiler('c')
cxx = meson.get_compiler('cpp')

global_args = []
global_args_maybe = [
  '-D_GNU_SOURCE',
  '-DWLR_USE_UNSTABLE',
  '-DWL_HIDE_DEPRECATED',
  '-fvisibility=hidden',
  '-Wstrict-prototypes',
  '-Wno-gnu-zero-variadic-macro-arguments',
]

foreach arg : global_args_maybe
  if cc.has_argument(arg)
    global_args += arg
  endif
endforeach
add_project_arguments(global_args, language: 'c')

global_args = []
foreach arg : global_args_maybe
  if cxx.has_argument(arg)
    global_args += arg
  endif
endforeach
add_project_arguments(global_args, language: 'cpp')

wayland_server_req = '>= 1.18.0'
wlroots_req = ['>= 0.15', '< 0.16']

cairo_dep = dependency('cairo')
wayland_server_dep = dependency('wayland-server', version: wayland_server_req)
wlroots_dep = dependency('wlroots', version: wlroots_req)

public_inc = include_directories('include')

pkgconfig = import('pkgconfig')

install_headers('include/zigzag.h')

subdir('src')
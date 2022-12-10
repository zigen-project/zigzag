_source = [
    'zigzag.c'
]

_zigzag_lib = library(
    'zigzag',
    _source,
    install: true,
    include_directories: public_inc,
)

pkgconfig.generate(
    _zigzag_lib,
    name: 'zigzag',
    description: 'UI library for ZIGEN windowing system',
    version: meson.project_version(),
)
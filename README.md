# QFluent UI

A UI Framework for Qt applications, inspired by Fluent Design.

> [Ref fluent2](https://fluent2.microsoft.design/)

## TODO

TODO

## Build

TODO

## Contributing

1. pre-commit

We use [pre-commit](https://pre-commit.com/) to manage our git hooks.

Current use clang-format to format the code.

```shell
pip install pre-commit
pre-commit install

# or (recommended)
uv tool install pre-commit
pre-commit install
```

2. vcpkg

We use [vcpkg](https://vcpkg.io) to manage our dependencies.

Please define the `VCPKG_ROOT` environment variable to point to your vcpkg installation.

ADD `CMakeUserPresets.json` to define the vcpkg root path.

```json
{
  "version": 3,
  "configurePresets": [
    {
      "name": "default",
      "inherits": "vcpkg",
      "environment": {
        "VCPKG_ROOT": "~/Library/vcpkg"
      }
    }
  ]
}
```

You can build:

```shell
cmake --preset default
cmake --build build
```

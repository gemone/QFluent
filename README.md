# QFluent UI

A UI Framework for Qt applications, inspired by Fluent Design.

> [Ref fluent2](https://fluent2.microsoft.design/)

## TODO

TODO

## Build

TODO

## Contributing

### pre-commit

We use [pre-commit](https://pre-commit.com/) to manage our git hooks.

Current use clang-format to format the code.

```shell
pip install pre-commit
pre-commit install

# or (recommended)
uv tool install pre-commit
pre-commit install
```

### Qt Package

You can define the Qt path by setting the `QT_ROOT` and `QT6_ROOT`. Example:

```json
{
  "version": 7,
  "cmakeMinimumRequired": {
    "major": 3,
    "minor": 27,
    "patch": 0
  },
  "configurePresets": [
    {
      "name": "sys-dev",
      "displayName": "Default Dev Config",
      "inherits": "debug",
      "environment": {
        "QT_DIR": "/usr/lib/qt6",
        "QT6_DIR": "/usr/lib/qt6"
      }
    },
    {
      "name": "custom-dev",
      "displayName": "Custom Dev Config",
      "inherits": "debug",
      "environment": {
        "QT_DIR": "~/Library/QT/6.9.1/gcc_64/",
        "QT6_DIR": "~/Library/QT/6.9.1/gcc_64/"
      }
    }
  ]
}
```

You can build:

```shell
cmake --preset sys-dev
cmake --build build
```

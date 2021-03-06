# clang-format-schema

Provide a schema to assist in maintaining a .clang-format file.

To display hints in the .clang-format file simply press ctrl-space.

This is primarily developed for `vscode` and depends upon a couple of extensions. 

* ms-vscode.cpptools
* redhat.vscode-yaml
* zainchen.json

## C/C++ clang-format ##

Install the [C/C++ tools](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) from Microsoft.

Make sure that you install `clang-format` and identify where to find the executable.

Add the following to your configuration (settings).

```jsonc
{
  "C_Cpp.clang_format_path": "C:/Program Files/LLVM/bin/clang-format.exe",
  "C_Cpp.clang_format_style": "file",
  "C_Cpp.formatting": "Default",
  //...
}
```

## JSON Extension ##

Install the [JSON for Visual Studio Code](https://marketplace.visualstudio.com/items?itemName=zainchen.json)

Also add the following.

```jsonc
{
  "json.schemas": [
    {
      "fileMatch": [
        ".clang-format",
        "_clang-format"
      ],
      "url": "./clang-format-schema.json"
    }
  ],
  //...
}
```


## YAML tools ##

Install the [YAML tools](https://marketplace.visualstudio.com/items?itemName=redhat.vscode-yaml)

Add the following to your configuration (settngs).  Do NOT add the `yaml.format.enable` option as it seems to break JSON formatting.

```jsonc
{
  "yaml.validate": true,
  "yaml.hover": true,
  "yaml.completion": true,
  "yaml.schemas": {
    "./clang-format-schema.json": [
      ".clang-format",
      "_clang-format"
    ]
  },
  //...
}
```

## Formatting While Editing ##

If desired turn on the format options for editing:

```jsonc
{
  "editor.formatOnSave": true,
  "editor.formatOnType": true,
  "editor.formatOnPaste": true,
}
```

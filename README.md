# Release
Release folder of all projects.

**Read the [LICENSE](https://github.com/vczh-libraries/Release/blob/master/LICENSE.md) first.**

**Read [GacUI website](http://vczh-libraries.github.io/) or [the mirror website](http://gaclib.net) for more information.**

Executables in `Tools` are no longer committed to this repo. **Read [Tools/README.md](Tools/README.md) for building tools.**

Download code from [public releases](https://github.com/vczh-libraries/Release/releases) to get the latest stable release. Code from this repo is also usable but I don't make any promise. I will only make a new release when I think the code is ready to update.

## Release from other platforms

- Release from the **GacUI** repo keeps using version number: `X.Y.Z.0`.
- Both **iGac** and **gGac** repos imports source code from **Release** repo for development.
  - Only commits for a published release could be used as dependency.
- When **iGac** or **gGac** repos need to make a new release:
  - Run **CodePack** and upload generated files to `platform_release` branch.
  - Create release in the repo from `platform_release` branch.
  - If it depends on a **Release** commit referenced by `X.Y.Z.0`, then the version number should be `X.Y.Z.W`.
- When **iGac** and **gGac** releases depend on the same **Release** version, it will be updated below.

## Synchronized latest releases from multiple platforms:

- **GacUI**: Not specified yet
- **iGac**: Not specified yet
- **gGac**: Not specified yet

## Visual Studio Extension

Copy [Vlpp.natvis](https://github.com/vczh-libraries/Release/blob/master/Import/vlpp.natvis) to Visual Studio's visualizers folder.

For example, VS2022's default visualizers folder will be **C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Packages\Debugger\Visualizers**.

## Content of This Project

- **Import** Gaclib source code
  - **Skins** Predefined control templates. You will need to call `vl::presentation::theme::RegisterTheme` to set a default skin before creating any controls. Read [WinMain.cpp](https://github.com/vczh-libraries/Release/blob/master/Tutorial/Lib/GacUILite/WinMain.cpp) for details.
- **Tools**
  - **GacGen32.exe** / **GacGen64.exe** GacUI resource compiler and C++ code generator for x86 and x64
  - **CppMerge.exe** Merge GacUI generated code for x86 and x64 to architecture-independent code
  - **ParserGen.exe** General LR parser to C++ code generator
  - **GacBuild.ps1** Do everything for you if you don't want to understand build steps. This one builds multiple resource xml files at the same time. Read the comment for more information.
  - **GacClear.ps1** Force `GacBuild.ps1` rebuilding all resource xml files for the next time.
- **Tutorial** Sample code
  - **Lib** Static library projects for all tutorials
  - **GacUI_HelloWorlds** Different ways to create a GacUI hello world project
  - **GacUI_Layout** Demo how to use GacUI layout
  - **GacUI_Controls** Demo how to use GacUI controls
  - **GacUI_ControlTemplate** Demo how to create control templates (skin) for GacUI controls
  - **GacUI_Xml** Demo how to author GacUI XML resource file
  - **GacUI_Windows** Demo how to interact with native Windows OS features.

Image files are not owned by this repo or organization except for GacUI logos.

## Creating a GacUI app using CMake

**WARNING: it is not maintained by members in **vczh-libraries** organization, please check the version number before using.**

Third party project for GacUI 1.0: https://github.com/mangosroom/GacUI-CMake-support

## Building using vcpkg

**WARNING: it is not maintained by members in **vczh-libraries** organization, please check the version number before using.**

You can build and install vlpp using [vcpkg](https://github.com/Microsoft/vcpkg/) dependency manager:

  - git clone https://github.com/Microsoft/vcpkg.git
  - cd vcpkg
  - ./bootstrap-vcpkg.sh  # ./bootstrap-vcpkg.bat for Windows
  - ./vcpkg integrate install
  - ./vcpkg install vlpp

Source files in the "Import" folder are grouped by different features defined in [CMakeLists.txt](./Import/CMakeLists.txt).

The vlpp port in vcpkg is kept up to date by Microsoft team members and community contributors. If the version is out of date, please [create an issue or pull request](https://github.com/Microsoft/vcpkg) on the vcpkg repository.

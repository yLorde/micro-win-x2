## Setup

Build an image for our build-environment:
 - `docker build buildenv -t micro-win-x2-buildenv`

## Build

Enter build environment:
 - Linux or MacOS: `docker run --rm -it -v "$(pwd)":/root/env micro-win-x2-buildenv`
 - Windows (CMD): `docker run --rm -it -v "%cd%":/root/env micro-win-x2-buildenv`
 - Windows (PowerShell): `docker run --rm -it -v "${pwd}:/root/env" micro-win-x2-buildenv`
 - Please use the linux command if you are using `WSL`, `msys2` or `git bash`
 - NOTE: If you are having trouble with an unshared drive, ensure your docker daemon has access to the drive you're development environment is in. For Docker Desktop, this is in "Settings > Shared Drives" or "Settings > Resources > File Sharing".

Build for x86 (other architectures may come in the future):
 - `make build-x86_64`

## Emulate
 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`
 - Note: Close the emulator when finished, so as to not block writing to `kernel.iso` for future builds.

## Cleanup

Remove the build-evironment image:
 - `docker rmi micro-win-x2-buildenv -f`
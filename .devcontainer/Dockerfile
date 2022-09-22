# See here for image contents: https://github.com/microsoft/vscode-dev-containers/tree/v0.195.0/containers/cpp/.devcontainer/base.Dockerfile
# [Choice] Debian / Ubuntu version (use Debian 11/9, Ubuntu 18.04/21.04 on local arm64/Apple Silicon): debian-11, debian-10, debian-9, ubuntu-21.04, ubuntu-20.04, ubuntu-18.04
ARG VARIANT=ubuntu-22.04
FROM mcr.microsoft.com/devcontainers/cpp:0-${VARIANT}

# [Optional] Uncomment this section to install additional packages.
RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
    && apt-get -y install --no-install-recommends cmake cmake-curses build-essential less file \
       tmux cppcheck lld lldb libc++-dev libc++abi-dev openssh-client gpg openssl

# # Setup ENV vars for vcpkg
# ENV VCPKG_ROOT=/usr/local/vcpkg \
#     VCPKG_DOWNLOADS=/usr/local/vcpkg-downloads
# ENV PATH="${PATH}:${VCPKG_ROOT}"
# 
# ARG USERNAME=vscode
# 
# # Install vcpkg itself: https://github.com/microsoft/vcpkg/blob/master/README.md#quick-start-unix
# COPY base-scripts/install-vcpkg.sh /tmp/
# RUN /tmp/install-vcpkg.sh ${USERNAME} \
#     && rm -f /tmp/install-vcpkg.sh
# 

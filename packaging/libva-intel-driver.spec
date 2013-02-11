Name:       libva-intel-driver
Version:    1.0.19
Release:    0
Summary:    Intel Driver for Video Acceleration (VA) API for Linux
Group:      System/Libraries
License:    MIT
URL:        http://freedesktop.org/wiki/Software/vaapi
Source0:    http://cgit.freedesktop.org/vaapi/intel-driver/snapshot/intel-driver-%{version}.tar.bz2
BuildRequires:  pkgconfig(xext)
BuildRequires:  pkgconfig(xfixes)
BuildRequires:  mesa-devel
BuildRequires:  pkgconfig(libdrm)
BuildRequires:  pkgconfig(libva)
BuildRequires:  pkgconfig(libva-wayland)
BuildRequires:  pkgconfig(wayland-egl)
BuildRequires:  pkgconfig(wayland-client)

%description
Intel Driver for Libva is a library providing the VA API video acceleration API.

%prep
%setup -q -n intel-driver-%{version}

%build
%autogen
%configure --enable-x11 --enable-drm --enable-wayland
make %{?_smp_mflags}

%install
%make_install

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%defattr(-,root,root,-)
%{_libdir}/dri/i965_drv_video.so


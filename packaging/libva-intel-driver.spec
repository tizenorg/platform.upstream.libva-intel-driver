%bcond_with wayland
%bcond_with x

Name:       libva-intel-driver
Version:    1.2.0pre
Release:    0
Summary:    Intel Driver for Video Acceleration (VA) API for Linux
Group:      System/Libraries
License:    MIT
URL:        http://freedesktop.org/wiki/Software/vaapi
Source0:    %{name}-%{version}.tar.bz2
%if %{with x}
BuildRequires:  pkgconfig(xext)
BuildRequires:  pkgconfig(xfixes)
%endif
BuildRequires:  mesa-devel
BuildRequires:  pkgconfig(libdrm)
BuildRequires:  pkgconfig(libva)
%if %{with wayland}
BuildRequires:  pkgconfig(libva-wayland)
BuildRequires:  pkgconfig(wayland-egl)
BuildRequires:  pkgconfig(wayland-client)
%endif

%description
Intel Driver for Libva is a library providing the VA API video acceleration API.

%prep
%setup -q

%build
%autogen
%configure \
%if %{with x}
--enable-x11 \
%endif
%if %{with wayland}
    --enable-wayland \
%endif
    --enable-drm
make %{?_smp_mflags}

%install
%make_install

%post -p /sbin/ldconfig

%postun -p /sbin/ldconfig

%files
%license COPYING
%defattr(-,root,root,-)
%{_libdir}/dri/i965_drv_video.so


Name: dynamicfastbuffers
Version: VERSION
Release: 1%{?dist}
Summary: C++ library for doing dynamic serialization using CDR format
Group: Development/Libraries
License: LGPLv3	
URL: http://eprosima.com
Source0: %{name}_%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-%{release}-root-%(%{__id_u} -n)
BuildRequires: autoconf automake libtool fastcdr
%ifarch i686
Requires: fastcdr.so.36
%endif
%ifarch x86_64
Requires: fastcdr.so.36(64bit)
%endif
%description
eProsima DynamicFastBuffers library provides a dynamic API for doing data serialization. It uses a fast implementation of Common Data Representation (CDR) format, included in eProsima FastCDR library.

%prep
%setup -q -n %{name}

%build
%configure
make %{?_smp_mflags}

%install
rm -rf %{buildroot}
make install DESTDIR=%{buildroot}

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
%doc
%{_includedir}/*
%{_libdir}/libdfb*
%{_datadir}/*

%changelog

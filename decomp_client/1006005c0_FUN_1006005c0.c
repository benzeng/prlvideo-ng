
char * FUN_1006005c0(int param_1)

{
  if (param_1 < 0xff) {
    switch(param_1) {
    case 7:
      return "macOS";
    case 8:
      return "Windows";
    case 9:
      return "Linux";
    case 10:
      return "FreeBSD";
    case 0xb:
      return "OS/2";
    case 0xc:
      return "MS-DOS";
    case 0xd:
      return "NetWare";
    case 0xe:
      return "Solaris";
    case 0xf:
      return "Chromium OS";
    case 0x10:
      return "Android";
    }
  }
  else if (param_1 < 0xff01) {
    if (param_1 < 0x701) {
      if (param_1 == 0xff) {
        return "Other";
      }
    }
    else if (param_1 < 0x8ff) {
      if (param_1 < 0x801) {
        if (param_1 == 0x701) {
          return "OS X";
        }
        if ((param_1 == 0x702) || (param_1 == 0x703)) {
          return "OS X";
        }
      }
      else {
        switch(param_1) {
        case 0x801:
          return "Windows 3.11";
        case 0x802:
          return "Windows 95";
        case 0x803:
          return "Windows 98";
        case 0x804:
          return "Windows ME";
        case 0x805:
          return "Windows NT";
        case 0x806:
          return "Windows 2000";
        case 0x807:
          return "Windows XP";
        case 0x808:
          return "Windows Server 2003";
        case 0x809:
          return "Windows Vista";
        case 0x80a:
          return "Windows Server 2008";
        case 0x80b:
          return "Windows 7";
        case 0x80c:
          return "Windows 8";
        case 0x80d:
          return "Windows Server 2012";
        case 0x80e:
          return "Windows 8.1";
        case 0x80f:
          return "Windows 10";
        case 0x810:
          return "Windows Server 2016";
        }
      }
    }
    else if (param_1 < 0x9ff) {
      switch(param_1) {
      case 0x8ff:
        return "Other Windows";
      case 0x901:
      case 0x913:
        return "Red Hat Enterprise Linux";
      case 0x902:
        return "SUSE Linux Enterprise";
      case 0x903:
        return "Mandriva Linux";
      case 0x904:
        return "Other Linux kernel 2.4";
      case 0x905:
        return "Other Linux kernel 2.6";
      case 0x906:
        return "Debian GNU/Linux";
      case 0x907:
        return "Fedora Linux";
      case 0x908:
        return "Fedora Core 5 Linux";
      case 0x909:
        return "Xandros Linux";
      case 0x90a:
        return "Ubuntu Linux";
      case 0x90b:
        return "SUSE Linux Enterprise Server 9";
      case 0x90c:
        return "Red Hat Enterprise Server 3";
      case 0x90d:
      case 0x914:
        return "CentOS Linux";
      case 0x90e:
        return "Red Hat Linux";
      case 0x90f:
        return "OpenSUSE Linux";
      case 0x910:
        return "Virtuozzo";
      case 0x911:
        return "Mageia Linux";
      case 0x912:
        return "Mint Linux";
      case 0x915:
        return "boot2docker";
      }
    }
    else if (param_1 < 0xaff) {
      switch(param_1) {
      case 0x9ff:
        return "Other Linux";
      case 0xa01:
        return "FreeBSD 4.x";
      case 0xa02:
        return "FreeBSD 5.x";
      case 0xa03:
        return "FreeBSD 6.x";
      case 0xa04:
        return "FreeBSD 7.x";
      case 0xa05:
        return "FreeBSD 8.x";
      case 0xa06:
        return "FreeBSD";
      case 0xa07:
        return "NetBSD";
      case 0xa08:
        return "OpenBSD";
      case 0xa09:
        return "TrustedBSD";
      }
    }
    else if (param_1 < 0xbff) {
      switch(param_1) {
      case 0xaff:
        return "Other BSD";
      case 0xb01:
        return "OS/2 Warp 3";
      case 0xb02:
        return "OS/2 Warp 4";
      case 0xb03:
        return "OS/2 Warp 4.5";
      case 0xb04:
        return "eComStation 1.1";
      case 0xb05:
        return "eComStation 1.2";
      }
    }
    else if (param_1 < 0xdff) {
      if (param_1 < 0xcff) {
        if (param_1 == 0xbff) {
          return "Other OS/2";
        }
        if (param_1 == 0xc01) {
          return "MS-DOS 6.22";
        }
      }
      else {
        switch(param_1) {
        case 0xcff:
          return "Other DOS";
        case 0xd01:
          return "NetWare 4.x";
        case 0xd02:
          return "NetWare 5.x";
        case 0xd03:
          return "NetWare 6.x";
        }
      }
    }
    else if (param_1 < 0xeff) {
      switch(param_1) {
      case 0xdff:
        return "Other NetWare";
      case 0xe01:
        return "Solaris 9";
      case 0xe02:
        return "Solaris 10";
      case 0xe03:
        return "Solaris 11";
      }
    }
    else {
      if (param_1 == 0xeff) {
        return "Other Solaris";
      }
      if (param_1 == 0xf01) {
        return "Chromium OS";
      }
      if (param_1 == 0xfff) {
        return "Other Chromium OS";
      }
    }
  }
  else {
    if (param_1 == 0xff01) {
      return "QNX";
    }
    if (param_1 == 0xff02) {
      return "OpenStep";
    }
    if (param_1 == 0xffff) {
      return "Other";
    }
  }
  return "unknown";
}


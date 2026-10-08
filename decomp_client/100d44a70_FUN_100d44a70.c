
undefined8 * FUN_100d44a70(undefined8 *param_1,int param_2)

{
  size_t sVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  if (param_2 < 0xff) {
    pcVar3 = "macOS";
    switch(param_2) {
    case 7:
      break;
    case 8:
      pcVar3 = "Windows";
      break;
    case 9:
      pcVar3 = "Linux";
      break;
    case 10:
      pcVar3 = "FreeBSD";
      break;
    case 0xb:
      pcVar3 = "OS/2";
      break;
    case 0xc:
      pcVar3 = "MS-DOS";
      break;
    case 0xd:
      pcVar3 = "NetWare";
      break;
    case 0xe:
      pcVar3 = "Solaris";
      break;
    case 0xf:
      pcVar3 = "Chromium OS";
      break;
    case 0x10:
      pcVar3 = "Android";
      break;
    default:
      goto switchD_100d44aa3_default;
    }
    goto switchD_100d44aa3_caseD_7;
  }
  if (param_2 < 0xff01) {
    if (param_2 < 0x701) {
      if (param_2 == 0xff) {
        pcVar3 = "Other";
        goto switchD_100d44aa3_caseD_7;
      }
    }
    else if (param_2 < 0x8ff) {
      if (0x800 < param_2) {
        switch(param_2) {
        case 0x801:
          pcVar3 = "Windows 3.11";
          break;
        case 0x802:
          pcVar3 = "Windows 95";
          break;
        case 0x803:
          pcVar3 = "Windows 98";
          break;
        case 0x804:
          pcVar3 = "Windows ME";
          break;
        case 0x805:
          pcVar3 = "Windows NT";
          break;
        case 0x806:
          pcVar3 = "Windows 2000";
          break;
        case 0x807:
          pcVar3 = "Windows XP";
          break;
        case 0x808:
          pcVar3 = "Windows Server 2003";
          break;
        case 0x809:
          pcVar3 = "Windows Vista";
          break;
        case 0x80a:
          pcVar3 = "Windows Server 2008";
          break;
        case 0x80b:
          pcVar3 = "Windows 7";
          break;
        case 0x80c:
          pcVar3 = "Windows 8";
          break;
        case 0x80d:
          pcVar3 = "Windows Server 2012";
          break;
        case 0x80e:
          pcVar3 = "Windows 8.1";
          break;
        case 0x80f:
          pcVar3 = "Windows 10";
          break;
        case 0x810:
          pcVar3 = "Windows Server 2016";
          break;
        default:
          goto switchD_100d44aa3_default;
        }
        goto switchD_100d44aa3_caseD_7;
      }
      if (param_2 == 0x701) {
        pcVar3 = "OS X";
        goto switchD_100d44aa3_caseD_7;
      }
      if ((param_2 == 0x702) || (param_2 == 0x703)) {
        pcVar3 = "OS X";
        goto switchD_100d44aa3_caseD_7;
      }
    }
    else {
      if (param_2 < 0x9ff) {
        switch(param_2) {
        case 0x8ff:
          pcVar3 = "Other Windows";
          break;
        default:
          goto switchD_100d44aa3_default;
        case 0x901:
        case 0x913:
          pcVar3 = "Red Hat Enterprise Linux";
          break;
        case 0x902:
          pcVar3 = "SUSE Linux Enterprise";
          break;
        case 0x903:
          pcVar3 = "Mandriva Linux";
          break;
        case 0x904:
          pcVar3 = "Other Linux kernel 2.4";
          break;
        case 0x905:
          pcVar3 = "Other Linux kernel 2.6";
          break;
        case 0x906:
          pcVar3 = "Debian GNU/Linux";
          break;
        case 0x907:
          pcVar3 = "Fedora Linux";
          break;
        case 0x908:
          pcVar3 = "Fedora Core 5 Linux";
          break;
        case 0x909:
          pcVar3 = "Xandros Linux";
          break;
        case 0x90a:
          pcVar3 = "Ubuntu Linux";
          break;
        case 0x90b:
          pcVar3 = "SUSE Linux Enterprise Server 9";
          break;
        case 0x90c:
          pcVar3 = "Red Hat Enterprise Server 3";
          break;
        case 0x90d:
        case 0x914:
          pcVar3 = "CentOS Linux";
          break;
        case 0x90e:
          pcVar3 = "Red Hat Linux";
          break;
        case 0x90f:
          pcVar3 = "OpenSUSE Linux";
          break;
        case 0x910:
          pcVar3 = "Virtuozzo";
          break;
        case 0x911:
          pcVar3 = "Mageia Linux";
          break;
        case 0x912:
          pcVar3 = "Mint Linux";
          break;
        case 0x915:
          pcVar3 = "boot2docker";
        }
        goto switchD_100d44aa3_caseD_7;
      }
      if (param_2 < 0xaff) {
        switch(param_2) {
        case 0x9ff:
          pcVar3 = "Other Linux";
          break;
        default:
          goto switchD_100d44aa3_default;
        case 0xa01:
          pcVar3 = "FreeBSD 4.x";
          break;
        case 0xa02:
          pcVar3 = "FreeBSD 5.x";
          break;
        case 0xa03:
          pcVar3 = "FreeBSD 6.x";
          break;
        case 0xa04:
          pcVar3 = "FreeBSD 7.x";
          break;
        case 0xa05:
          pcVar3 = "FreeBSD 8.x";
          break;
        case 0xa06:
          pcVar3 = "FreeBSD";
          break;
        case 0xa07:
          pcVar3 = "NetBSD";
          break;
        case 0xa08:
          pcVar3 = "OpenBSD";
          break;
        case 0xa09:
          pcVar3 = "TrustedBSD";
        }
        goto switchD_100d44aa3_caseD_7;
      }
      if (param_2 < 0xbff) {
        switch(param_2) {
        case 0xaff:
          pcVar3 = "Other BSD";
          break;
        default:
          goto switchD_100d44aa3_default;
        case 0xb01:
          pcVar3 = "OS/2 Warp 3";
          break;
        case 0xb02:
          pcVar3 = "OS/2 Warp 4";
          break;
        case 0xb03:
          pcVar3 = "OS/2 Warp 4.5";
          break;
        case 0xb04:
          pcVar3 = "eComStation 1.1";
          break;
        case 0xb05:
          pcVar3 = "eComStation 1.2";
        }
        goto switchD_100d44aa3_caseD_7;
      }
      if (param_2 < 0xdff) {
        if (0xcfe < param_2) {
          switch(param_2) {
          case 0xcff:
            pcVar3 = "Other DOS";
            break;
          default:
            goto switchD_100d44aa3_default;
          case 0xd01:
            pcVar3 = "NetWare 4.x";
            break;
          case 0xd02:
            pcVar3 = "NetWare 5.x";
            break;
          case 0xd03:
            pcVar3 = "NetWare 6.x";
          }
          goto switchD_100d44aa3_caseD_7;
        }
        if (param_2 == 0xbff) {
          pcVar3 = "Other OS/2";
          goto switchD_100d44aa3_caseD_7;
        }
        if (param_2 == 0xc01) {
          pcVar3 = "MS-DOS 6.22";
          goto switchD_100d44aa3_caseD_7;
        }
      }
      else {
        if (param_2 < 0xeff) {
          switch(param_2) {
          case 0xdff:
            pcVar3 = "Other NetWare";
            break;
          default:
            goto switchD_100d44aa3_default;
          case 0xe01:
            pcVar3 = "Solaris 9";
            break;
          case 0xe02:
            pcVar3 = "Solaris 10";
            break;
          case 0xe03:
            pcVar3 = "Solaris 11";
          }
          goto switchD_100d44aa3_caseD_7;
        }
        if (param_2 == 0xeff) {
          pcVar3 = "Other Solaris";
          goto switchD_100d44aa3_caseD_7;
        }
        if (param_2 == 0xf01) {
          pcVar3 = "Chromium OS";
          goto switchD_100d44aa3_caseD_7;
        }
        if (param_2 == 0xfff) {
          pcVar3 = "Other Chromium OS";
          goto switchD_100d44aa3_caseD_7;
        }
      }
    }
  }
  else {
    if (param_2 == 0xff01) {
      pcVar3 = "QNX";
      goto switchD_100d44aa3_caseD_7;
    }
    if (param_2 == 0xff02) {
      pcVar3 = "OpenStep";
      goto switchD_100d44aa3_caseD_7;
    }
    if (param_2 == 0xffff) {
      pcVar3 = "Other";
      goto switchD_100d44aa3_caseD_7;
    }
  }
switchD_100d44aa3_default:
  pcVar3 = "unknown";
switchD_100d44aa3_caseD_7:
  sVar1 = _strlen(pcVar3);
  uVar2 = QString::fromAscii_helper(pcVar3,(int)sVar1);
  *param_1 = uVar2;
  return param_1;
}


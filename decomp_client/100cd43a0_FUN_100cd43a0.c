
undefined1 FUN_100cd43a0(long *param_1,ulong param_2,byte param_3,int param_4)

{
  char cVar1;
  char *pcVar2;
  undefined1 uVar3;
  char *pcVar4;
  
  QMutex::lock();
  if (DAT_102311910 != (long *)0x0) {
    uVar3 = 0;
    if (DAT_102311910 != param_1) {
      FUN_100df99c0("","hid",0,"[CHIDHostHook] Bad instance for keyboard grab (this: %p, owner: %p)"
                    ,param_1);
      uVar3 = 0;
    }
    goto LAB_100cd4990;
  }
  if (1 < DAT_10230ffd0) {
    pcVar4 = "no";
    if (param_3 != 0) {
      pcVar4 = "yes";
    }
    if (param_4 < 0xff) {
      pcVar2 = "macOS";
      switch(param_4) {
      case 7:
        break;
      case 8:
        pcVar2 = "Windows";
        break;
      case 9:
        pcVar2 = "Linux";
        break;
      case 10:
        pcVar2 = "FreeBSD";
        break;
      case 0xb:
        pcVar2 = "OS/2";
        break;
      case 0xc:
        pcVar2 = "MS-DOS";
        break;
      case 0xd:
        pcVar2 = "NetWare";
        break;
      case 0xe:
        pcVar2 = "Solaris";
        break;
      case 0xf:
        pcVar2 = "Chromium OS";
        break;
      case 0x10:
        pcVar2 = "Android";
        break;
      default:
        goto switchD_100cd4459_default;
      }
    }
    else if (param_4 < 0xff01) {
      if (param_4 < 0x701) {
        if (param_4 != 0xff) goto switchD_100cd4459_default;
        pcVar2 = "Other";
      }
      else if (param_4 < 0x8ff) {
        if (param_4 < 0x801) {
          if (param_4 == 0x701) {
            pcVar2 = "OS X";
          }
          else {
            if ((param_4 != 0x702) && (param_4 != 0x703)) goto switchD_100cd4459_default;
            pcVar2 = "OS X";
          }
        }
        else {
          switch(param_4) {
          case 0x801:
            pcVar2 = "Windows 3.11";
            break;
          case 0x802:
            pcVar2 = "Windows 95";
            break;
          case 0x803:
            pcVar2 = "Windows 98";
            break;
          case 0x804:
            pcVar2 = "Windows ME";
            break;
          case 0x805:
            pcVar2 = "Windows NT";
            break;
          case 0x806:
            pcVar2 = "Windows 2000";
            break;
          case 0x807:
            pcVar2 = "Windows XP";
            break;
          case 0x808:
            pcVar2 = "Windows Server 2003";
            break;
          case 0x809:
            pcVar2 = "Windows Vista";
            break;
          case 0x80a:
            pcVar2 = "Windows Server 2008";
            break;
          case 0x80b:
            pcVar2 = "Windows 7";
            break;
          case 0x80c:
            pcVar2 = "Windows 8";
            break;
          case 0x80d:
            pcVar2 = "Windows Server 2012";
            break;
          case 0x80e:
            pcVar2 = "Windows 8.1";
            break;
          case 0x80f:
            pcVar2 = "Windows 10";
            break;
          case 0x810:
            pcVar2 = "Windows Server 2016";
            break;
          default:
switchD_100cd4459_default:
            pcVar2 = "unknown";
          }
        }
      }
      else if (param_4 < 0x9ff) {
        switch(param_4) {
        case 0x8ff:
          pcVar2 = "Other Windows";
          break;
        default:
          goto switchD_100cd4459_default;
        case 0x901:
        case 0x913:
          pcVar2 = "Red Hat Enterprise Linux";
          break;
        case 0x902:
          pcVar2 = "SUSE Linux Enterprise";
          break;
        case 0x903:
          pcVar2 = "Mandriva Linux";
          break;
        case 0x904:
          pcVar2 = "Other Linux kernel 2.4";
          break;
        case 0x905:
          pcVar2 = "Other Linux kernel 2.6";
          break;
        case 0x906:
          pcVar2 = "Debian GNU/Linux";
          break;
        case 0x907:
          pcVar2 = "Fedora Linux";
          break;
        case 0x908:
          pcVar2 = "Fedora Core 5 Linux";
          break;
        case 0x909:
          pcVar2 = "Xandros Linux";
          break;
        case 0x90a:
          pcVar2 = "Ubuntu Linux";
          break;
        case 0x90b:
          pcVar2 = "SUSE Linux Enterprise Server 9";
          break;
        case 0x90c:
          pcVar2 = "Red Hat Enterprise Server 3";
          break;
        case 0x90d:
        case 0x914:
          pcVar2 = "CentOS Linux";
          break;
        case 0x90e:
          pcVar2 = "Red Hat Linux";
          break;
        case 0x90f:
          pcVar2 = "OpenSUSE Linux";
          break;
        case 0x910:
          pcVar2 = "Virtuozzo";
          break;
        case 0x911:
          pcVar2 = "Mageia Linux";
          break;
        case 0x912:
          pcVar2 = "Mint Linux";
          break;
        case 0x915:
          pcVar2 = "boot2docker";
        }
      }
      else if (param_4 < 0xaff) {
        switch(param_4) {
        case 0x9ff:
          pcVar2 = "Other Linux";
          break;
        default:
          goto switchD_100cd4459_default;
        case 0xa01:
          pcVar2 = "FreeBSD 4.x";
          break;
        case 0xa02:
          pcVar2 = "FreeBSD 5.x";
          break;
        case 0xa03:
          pcVar2 = "FreeBSD 6.x";
          break;
        case 0xa04:
          pcVar2 = "FreeBSD 7.x";
          break;
        case 0xa05:
          pcVar2 = "FreeBSD 8.x";
          break;
        case 0xa06:
          pcVar2 = "FreeBSD";
          break;
        case 0xa07:
          pcVar2 = "NetBSD";
          break;
        case 0xa08:
          pcVar2 = "OpenBSD";
          break;
        case 0xa09:
          pcVar2 = "TrustedBSD";
        }
      }
      else if (param_4 < 0xbff) {
        switch(param_4) {
        case 0xaff:
          pcVar2 = "Other BSD";
          break;
        default:
          goto switchD_100cd4459_default;
        case 0xb01:
          pcVar2 = "OS/2 Warp 3";
          break;
        case 0xb02:
          pcVar2 = "OS/2 Warp 4";
          break;
        case 0xb03:
          pcVar2 = "OS/2 Warp 4.5";
          break;
        case 0xb04:
          pcVar2 = "eComStation 1.1";
          break;
        case 0xb05:
          pcVar2 = "eComStation 1.2";
        }
      }
      else if (param_4 < 0xdff) {
        if (param_4 < 0xcff) {
          if (param_4 == 0xbff) {
            pcVar2 = "Other OS/2";
          }
          else {
            if (param_4 != 0xc01) goto switchD_100cd4459_default;
            pcVar2 = "MS-DOS 6.22";
          }
        }
        else {
          switch(param_4) {
          case 0xcff:
            pcVar2 = "Other DOS";
            break;
          default:
            goto switchD_100cd4459_default;
          case 0xd01:
            pcVar2 = "NetWare 4.x";
            break;
          case 0xd02:
            pcVar2 = "NetWare 5.x";
            break;
          case 0xd03:
            pcVar2 = "NetWare 6.x";
          }
        }
      }
      else if (param_4 < 0xeff) {
        switch(param_4) {
        case 0xdff:
          pcVar2 = "Other NetWare";
          break;
        default:
          goto switchD_100cd4459_default;
        case 0xe01:
          pcVar2 = "Solaris 9";
          break;
        case 0xe02:
          pcVar2 = "Solaris 10";
          break;
        case 0xe03:
          pcVar2 = "Solaris 11";
        }
      }
      else if (param_4 == 0xeff) {
        pcVar2 = "Other Solaris";
      }
      else if (param_4 == 0xf01) {
        pcVar2 = "Chromium OS";
      }
      else {
        if (param_4 != 0xfff) goto switchD_100cd4459_default;
        pcVar2 = "Other Chromium OS";
      }
    }
    else if (param_4 == 0xff01) {
      pcVar2 = "QNX";
    }
    else if (param_4 == 0xff02) {
      pcVar2 = "OpenStep";
    }
    else {
      if (param_4 != 0xffff) goto switchD_100cd4459_default;
      pcVar2 = "Other";
    }
    FUN_100df99c0("","hid",2,
                  "[CHIDHostHook] Grab keyboard (win: %x, with hotkeys: %s, guest id: %s)",
                  param_2 & 0xffffffff,pcVar4,pcVar2);
  }
  *(byte *)(param_1 + 6) = param_3;
  *(int *)(param_1 + 0x76) = param_4;
  cVar1 = (**(code **)(*param_1 + 0x148))(param_1,param_2);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    *(ulong *)(param_1[0x6d] + 0xf0) = (ulong)param_3 + 1;
    uVar3 = 1;
    DAT_102311910 = param_1;
  }
LAB_100cd4990:
  QMutex::unlock();
  return uVar3;
}


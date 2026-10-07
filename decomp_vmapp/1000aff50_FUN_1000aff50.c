
void FUN_1000aff50(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  QDir local_78 [8];
  undefined1 local_70 [8];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x110) == 0) {
    return;
  }
  if (DAT_1011b68d8 != 0) {
    return;
  }
  DAT_1011b68d8 = 1;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getHomePath();
  QDir::QDir(local_78,&local_80);
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_29 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000affdd;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000affdd:
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmCommonOptions();
  iVar1 = CVmCommonOptions::getOsVersion();
  if (iVar1 < 0xff) {
    pcVar5 = "macOS";
    switch(iVar1) {
    case 7:
      break;
    case 8:
      pcVar5 = "Windows";
      break;
    case 9:
      pcVar5 = "Linux";
      break;
    case 10:
      pcVar5 = "FreeBSD";
      break;
    case 0xb:
      pcVar5 = "OS/2";
      break;
    case 0xc:
      pcVar5 = "MS-DOS";
      break;
    case 0xd:
      pcVar5 = "NetWare";
      break;
    case 0xe:
      pcVar5 = "Solaris";
      break;
    case 0xf:
      pcVar5 = "Chromium OS";
      break;
    case 0x10:
      pcVar5 = "Android";
      break;
    default:
      goto switchD_1000b0021_default;
    }
  }
  else if (iVar1 < 0xff01) {
    if (iVar1 < 0x701) {
      if (iVar1 != 0xff) goto switchD_1000b0021_default;
      pcVar5 = "Other";
    }
    else if (iVar1 < 0x8ff) {
      if (iVar1 < 0x801) {
        if (iVar1 == 0x701) {
          pcVar5 = "OS X";
        }
        else {
          if ((iVar1 != 0x702) && (iVar1 != 0x703)) goto switchD_1000b0021_default;
          pcVar5 = "OS X";
        }
      }
      else {
        switch(iVar1) {
        case 0x801:
          pcVar5 = "Windows 3.11";
          break;
        case 0x802:
          pcVar5 = "Windows 95";
          break;
        case 0x803:
          pcVar5 = "Windows 98";
          break;
        case 0x804:
          pcVar5 = "Windows ME";
          break;
        case 0x805:
          pcVar5 = "Windows NT";
          break;
        case 0x806:
          pcVar5 = "Windows 2000";
          break;
        case 0x807:
          pcVar5 = "Windows XP";
          break;
        case 0x808:
          pcVar5 = "Windows Server 2003";
          break;
        case 0x809:
          pcVar5 = "Windows Vista";
          break;
        case 0x80a:
          pcVar5 = "Windows Server 2008";
          break;
        case 0x80b:
          pcVar5 = "Windows 7";
          break;
        case 0x80c:
          pcVar5 = "Windows 8";
          break;
        case 0x80d:
          pcVar5 = "Windows Server 2012";
          break;
        case 0x80e:
          pcVar5 = "Windows 8.1";
          break;
        case 0x80f:
          pcVar5 = "Windows 10";
          break;
        case 0x810:
          pcVar5 = "Windows Server 2016";
          break;
        default:
switchD_1000b0021_default:
          pcVar5 = "unknown";
        }
      }
    }
    else if (iVar1 < 0x9ff) {
      switch(iVar1) {
      case 0x8ff:
        pcVar5 = "Other Windows";
        break;
      default:
        goto switchD_1000b0021_default;
      case 0x901:
      case 0x913:
        pcVar5 = "Red Hat Enterprise Linux";
        break;
      case 0x902:
        pcVar5 = "SUSE Linux Enterprise";
        break;
      case 0x903:
        pcVar5 = "Mandriva Linux";
        break;
      case 0x904:
        pcVar5 = "Other Linux kernel 2.4";
        break;
      case 0x905:
        pcVar5 = "Other Linux kernel 2.6";
        break;
      case 0x906:
        pcVar5 = "Debian GNU/Linux";
        break;
      case 0x907:
        pcVar5 = "Fedora Linux";
        break;
      case 0x908:
        pcVar5 = "Fedora Core 5 Linux";
        break;
      case 0x909:
        pcVar5 = "Xandros Linux";
        break;
      case 0x90a:
        pcVar5 = "Ubuntu Linux";
        break;
      case 0x90b:
        pcVar5 = "SUSE Linux Enterprise Server 9";
        break;
      case 0x90c:
        pcVar5 = "Red Hat Enterprise Server 3";
        break;
      case 0x90d:
      case 0x914:
        pcVar5 = "CentOS Linux";
        break;
      case 0x90e:
        pcVar5 = "Red Hat Linux";
        break;
      case 0x90f:
        pcVar5 = "OpenSUSE Linux";
        break;
      case 0x910:
        pcVar5 = "Virtuozzo";
        break;
      case 0x911:
        pcVar5 = "Mageia Linux";
        break;
      case 0x912:
        pcVar5 = "Mint Linux";
        break;
      case 0x915:
        pcVar5 = "boot2docker";
      }
    }
    else if (iVar1 < 0xaff) {
      switch(iVar1) {
      case 0x9ff:
        pcVar5 = "Other Linux";
        break;
      default:
        goto switchD_1000b0021_default;
      case 0xa01:
        pcVar5 = "FreeBSD 4.x";
        break;
      case 0xa02:
        pcVar5 = "FreeBSD 5.x";
        break;
      case 0xa03:
        pcVar5 = "FreeBSD 6.x";
        break;
      case 0xa04:
        pcVar5 = "FreeBSD 7.x";
        break;
      case 0xa05:
        pcVar5 = "FreeBSD 8.x";
        break;
      case 0xa06:
        pcVar5 = "FreeBSD";
        break;
      case 0xa07:
        pcVar5 = "NetBSD";
        break;
      case 0xa08:
        pcVar5 = "OpenBSD";
        break;
      case 0xa09:
        pcVar5 = "TrustedBSD";
      }
    }
    else if (iVar1 < 0xbff) {
      switch(iVar1) {
      case 0xaff:
        pcVar5 = "Other BSD";
        break;
      default:
        goto switchD_1000b0021_default;
      case 0xb01:
        pcVar5 = "OS/2 Warp 3";
        break;
      case 0xb02:
        pcVar5 = "OS/2 Warp 4";
        break;
      case 0xb03:
        pcVar5 = "OS/2 Warp 4.5";
        break;
      case 0xb04:
        pcVar5 = "eComStation 1.1";
        break;
      case 0xb05:
        pcVar5 = "eComStation 1.2";
      }
    }
    else if (iVar1 < 0xdff) {
      if (iVar1 < 0xcff) {
        if (iVar1 == 0xbff) {
          pcVar5 = "Other OS/2";
        }
        else {
          if (iVar1 != 0xc01) goto switchD_1000b0021_default;
          pcVar5 = "MS-DOS 6.22";
        }
      }
      else {
        switch(iVar1) {
        case 0xcff:
          pcVar5 = "Other DOS";
          break;
        default:
          goto switchD_1000b0021_default;
        case 0xd01:
          pcVar5 = "NetWare 4.x";
          break;
        case 0xd02:
          pcVar5 = "NetWare 5.x";
          break;
        case 0xd03:
          pcVar5 = "NetWare 6.x";
        }
      }
    }
    else if (iVar1 < 0xeff) {
      switch(iVar1) {
      case 0xdff:
        pcVar5 = "Other NetWare";
        break;
      default:
        goto switchD_1000b0021_default;
      case 0xe01:
        pcVar5 = "Solaris 9";
        break;
      case 0xe02:
        pcVar5 = "Solaris 10";
        break;
      case 0xe03:
        pcVar5 = "Solaris 11";
      }
    }
    else if (iVar1 == 0xeff) {
      pcVar5 = "Other Solaris";
    }
    else if (iVar1 == 0xf01) {
      pcVar5 = "Chromium OS";
    }
    else {
      if (iVar1 != 0xfff) goto switchD_1000b0021_default;
      pcVar5 = "Other Chromium OS";
    }
  }
  else if (iVar1 == 0xff01) {
    pcVar5 = "QNX";
  }
  else if (iVar1 == 0xff02) {
    pcVar5 = "OpenStep";
  }
  else {
    if (iVar1 != 0xffff) goto switchD_1000b0021_default;
    pcVar5 = "Other";
  }
  CVmConfiguration::getVmHardwareList();
  FUN_1008e3970("","vm",0,"=============================================================");
  uVar6 = 1;
  FUN_1008e3970("","vm",0," %s %s, %s","Parallels Desktop","12.2.1 (41615)",
                "Mon, 26 Jun 2017 17:54:09");
  QDir::absolutePath();
  QString::toUtf8();
  FUN_1008e3970("","vm",0," VM path: %s",local_88 + *(long *)(local_88 + 0x10));
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b058e;
    }
    QArrayData::deallocate(local_88,1,8);
  }
LAB_1000b058e:
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1000b05c4;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1000b05c4:
  CVmHardware::getCpu();
  uVar2 = CVmCpu::getNumber();
  CVmHardware::getMemory();
  uVar3 = CVmMemory::getRamSize();
  CVmHardware::getVideo();
  uVar4 = CVmVideo::getMemorySize();
  FUN_1008e3970("","vm",0," VM conf: %d CPU, %dMB RAM, %dMB VRAM, %s",uVar2,uVar3,
                CONCAT44(uVar6,uVar4),pcVar5);
  FUN_1008e3970("","vm",0," VM app mode: x64");
  FUN_1008e3970("","vm",0,"-------------------------------------------------------------");
  iVar1 = FUN_100779e40(local_70);
  if ((iVar1 == 0) && (1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vm",2,
                  "Host mem usage (MB): free %lld, inactive %lld, active %lld, wired %lld, swapped %lld"
                  ,local_68 >> 0x14,local_60 >> 0x14,local_58 >> 0x14,local_50 >> 0x14,
                  local_48 >> 0x14);
  }
  QDir::~QDir(local_78);
  return;
}


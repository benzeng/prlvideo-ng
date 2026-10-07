
int FUN_100065fd0(undefined8 param_1,QString param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  QTypedArrayData<unsigned_short> *pQVar4;
  CVmEventParameter *pCVar5;
  char *pcVar6;
  QString QVar7;
  QArrayData *local_1e0;
  QArrayData *local_1d8;
  QArrayData *local_1d0;
  QArrayData *local_1c8;
  QArrayData *local_1c0;
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QArrayData *local_1a8;
  QArrayData *local_1a0;
  QArrayData *local_198;
  QArrayData *local_190;
  QArrayData *local_188;
  QArrayData *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  CVmEvent local_168 [8];
  CBaseNode local_160 [216];
  QEvent local_88 [32];
  QArrayData *local_68;
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(long *)(DAT_1011c3698 + 0x110) == 0) {
    FUN_1008e3970("","vm",0);
  }
  else {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmName();
    QString::operator=(&local_48,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100066061;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_100066061:
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmCommonOptions();
    iVar1 = CVmCommonOptions::getOsVersion();
    if (iVar1 < 0xff) {
      pcVar6 = "macOS";
      switch(iVar1) {
      case 7:
        break;
      case 8:
        pcVar6 = "Windows";
        break;
      case 9:
        pcVar6 = "Linux";
        break;
      case 10:
        pcVar6 = "FreeBSD";
        break;
      case 0xb:
        pcVar6 = "OS/2";
        break;
      case 0xc:
        pcVar6 = "MS-DOS";
        break;
      case 0xd:
        pcVar6 = "NetWare";
        break;
      case 0xe:
        pcVar6 = "Solaris";
        break;
      case 0xf:
        pcVar6 = "Chromium OS";
        break;
      case 0x10:
        pcVar6 = "Android";
        break;
      default:
        goto switchD_1000660a1_default;
      }
    }
    else if (iVar1 < 0xff01) {
      if (iVar1 < 0x701) {
        if (iVar1 != 0xff) goto switchD_1000660a1_default;
        pcVar6 = "Other";
      }
      else if (iVar1 < 0x8ff) {
        if (iVar1 < 0x801) {
          if (iVar1 == 0x701) {
            pcVar6 = "OS X";
          }
          else {
            if ((iVar1 != 0x702) && (iVar1 != 0x703)) goto switchD_1000660a1_default;
            pcVar6 = "OS X";
          }
        }
        else {
          switch(iVar1) {
          case 0x801:
            pcVar6 = "Windows 3.11";
            break;
          case 0x802:
            pcVar6 = "Windows 95";
            break;
          case 0x803:
            pcVar6 = "Windows 98";
            break;
          case 0x804:
            pcVar6 = "Windows ME";
            break;
          case 0x805:
            pcVar6 = "Windows NT";
            break;
          case 0x806:
            pcVar6 = "Windows 2000";
            break;
          case 0x807:
            pcVar6 = "Windows XP";
            break;
          case 0x808:
            pcVar6 = "Windows Server 2003";
            break;
          case 0x809:
            pcVar6 = "Windows Vista";
            break;
          case 0x80a:
            pcVar6 = "Windows Server 2008";
            break;
          case 0x80b:
            pcVar6 = "Windows 7";
            break;
          case 0x80c:
            pcVar6 = "Windows 8";
            break;
          case 0x80d:
            pcVar6 = "Windows Server 2012";
            break;
          case 0x80e:
            pcVar6 = "Windows 8.1";
            break;
          case 0x80f:
            pcVar6 = "Windows 10";
            break;
          case 0x810:
            pcVar6 = "Windows Server 2016";
            break;
          default:
switchD_1000660a1_default:
            pcVar6 = "unknown";
          }
        }
      }
      else if (iVar1 < 0x9ff) {
        switch(iVar1) {
        case 0x8ff:
          pcVar6 = "Other Windows";
          break;
        default:
          goto switchD_1000660a1_default;
        case 0x901:
        case 0x913:
          pcVar6 = "Red Hat Enterprise Linux";
          break;
        case 0x902:
          pcVar6 = "SUSE Linux Enterprise";
          break;
        case 0x903:
          pcVar6 = "Mandriva Linux";
          break;
        case 0x904:
          pcVar6 = "Other Linux kernel 2.4";
          break;
        case 0x905:
          pcVar6 = "Other Linux kernel 2.6";
          break;
        case 0x906:
          pcVar6 = "Debian GNU/Linux";
          break;
        case 0x907:
          pcVar6 = "Fedora Linux";
          break;
        case 0x908:
          pcVar6 = "Fedora Core 5 Linux";
          break;
        case 0x909:
          pcVar6 = "Xandros Linux";
          break;
        case 0x90a:
          pcVar6 = "Ubuntu Linux";
          break;
        case 0x90b:
          pcVar6 = "SUSE Linux Enterprise Server 9";
          break;
        case 0x90c:
          pcVar6 = "Red Hat Enterprise Server 3";
          break;
        case 0x90d:
        case 0x914:
          pcVar6 = "CentOS Linux";
          break;
        case 0x90e:
          pcVar6 = "Red Hat Linux";
          break;
        case 0x90f:
          pcVar6 = "OpenSUSE Linux";
          break;
        case 0x910:
          pcVar6 = "Virtuozzo";
          break;
        case 0x911:
          pcVar6 = "Mageia Linux";
          break;
        case 0x912:
          pcVar6 = "Mint Linux";
          break;
        case 0x915:
          pcVar6 = "boot2docker";
        }
      }
      else if (iVar1 < 0xaff) {
        switch(iVar1) {
        case 0x9ff:
          pcVar6 = "Other Linux";
          break;
        default:
          goto switchD_1000660a1_default;
        case 0xa01:
          pcVar6 = "FreeBSD 4.x";
          break;
        case 0xa02:
          pcVar6 = "FreeBSD 5.x";
          break;
        case 0xa03:
          pcVar6 = "FreeBSD 6.x";
          break;
        case 0xa04:
          pcVar6 = "FreeBSD 7.x";
          break;
        case 0xa05:
          pcVar6 = "FreeBSD 8.x";
          break;
        case 0xa06:
          pcVar6 = "FreeBSD";
          break;
        case 0xa07:
          pcVar6 = "NetBSD";
          break;
        case 0xa08:
          pcVar6 = "OpenBSD";
          break;
        case 0xa09:
          pcVar6 = "TrustedBSD";
        }
      }
      else if (iVar1 < 0xbff) {
        switch(iVar1) {
        case 0xaff:
          pcVar6 = "Other BSD";
          break;
        default:
          goto switchD_1000660a1_default;
        case 0xb01:
          pcVar6 = "OS/2 Warp 3";
          break;
        case 0xb02:
          pcVar6 = "OS/2 Warp 4";
          break;
        case 0xb03:
          pcVar6 = "OS/2 Warp 4.5";
          break;
        case 0xb04:
          pcVar6 = "eComStation 1.1";
          break;
        case 0xb05:
          pcVar6 = "eComStation 1.2";
        }
      }
      else if (iVar1 < 0xdff) {
        if (iVar1 < 0xcff) {
          if (iVar1 == 0xbff) {
            pcVar6 = "Other OS/2";
          }
          else {
            if (iVar1 != 0xc01) goto switchD_1000660a1_default;
            pcVar6 = "MS-DOS 6.22";
          }
        }
        else {
          switch(iVar1) {
          case 0xcff:
            pcVar6 = "Other DOS";
            break;
          default:
            goto switchD_1000660a1_default;
          case 0xd01:
            pcVar6 = "NetWare 4.x";
            break;
          case 0xd02:
            pcVar6 = "NetWare 5.x";
            break;
          case 0xd03:
            pcVar6 = "NetWare 6.x";
          }
        }
      }
      else if (iVar1 < 0xeff) {
        switch(iVar1) {
        case 0xdff:
          pcVar6 = "Other NetWare";
          break;
        default:
          goto switchD_1000660a1_default;
        case 0xe01:
          pcVar6 = "Solaris 9";
          break;
        case 0xe02:
          pcVar6 = "Solaris 10";
          break;
        case 0xe03:
          pcVar6 = "Solaris 11";
        }
      }
      else if (iVar1 == 0xeff) {
        pcVar6 = "Other Solaris";
      }
      else if (iVar1 == 0xf01) {
        pcVar6 = "Chromium OS";
      }
      else {
        if (iVar1 != 0xfff) goto switchD_1000660a1_default;
        pcVar6 = "Other Chromium OS";
      }
    }
    else if (iVar1 == 0xff01) {
      pcVar6 = "QNX";
    }
    else if (iVar1 == 0xff02) {
      pcVar6 = "OpenStep";
    }
    else {
      if (iVar1 != 0xffff) goto switchD_1000660a1_default;
      pcVar6 = "Other";
    }
    _strlen(pcVar6);
    QString::fromUtf8_helper((char *)&local_40,(int)pcVar6);
    QString::operator=(&local_50,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000665a7;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
LAB_1000665a7:
  iVar1 = CVmEventBase::getEventCode();
  local_60 = (QArrayData *)QString::fromAscii_helper("op_rc",5);
  lVar3 = CVmEvent::getEventParameter(param_2);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100066606;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_100066606:
  if (lVar3 != 0) {
    CVmEventParameter::getParamValue();
    iVar1 = QString::toUInt((bool *)&local_68,0);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10006665a;
      }
      QArrayData::deallocate(local_68,2,8);
    }
  }
LAB_10006665a:
  CVmEvent::CVmEvent(local_168);
  local_170 = (QArrayData *)QString::fromAscii_helper("ws_response_cmd_error",0x15);
  pQVar4 = (QTypedArrayData<unsigned_short> *)CVmEvent::getEventParameter(param_2);
  if (*(int *)local_170 != -1) {
    if (*(int *)local_170 != 0) {
      LOCK();
      *(int *)local_170 = *(int *)local_170 + -1;
      local_31 = *(int *)local_170 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000666c6;
    }
    QArrayData::deallocate(local_170,2,8);
  }
LAB_1000666c6:
  QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
  if (pQVar4 != (QTypedArrayData<unsigned_short> *)0x0) {
    CVmEventParameter::getParamValue();
    iVar2 = CBaseNode::fromString
                      (local_160,(QTypedArrayData<unsigned_short> *)&local_178,false,(QString *)0x0,
                       (int *)0x0,(int *)0x0);
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100066733;
      }
      QArrayData::deallocate(local_178,2,8);
    }
LAB_100066733:
    QVar7.field0_0x0 = pQVar4;
    if (iVar2 < 0) {
      QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)0x0;
    }
  }
  if (iVar1 < -0x7ffe0000) {
    if (iVar1 < -0x7ffffcca) {
      if ((iVar1 != -0x7fffffaf) && (iVar1 != -0x7ffffe6a)) goto LAB_100066b90;
      goto LAB_1000669bb;
    }
    if (-0x7ffffbd9 < iVar1) {
      if ((iVar1 != -0x7ffffbd8) && (iVar1 != -0x7ffffae9)) goto LAB_100066b90;
      goto LAB_1000669bb;
    }
    if ((iVar1 + 0x7ffffcbfU < 2) || (iVar1 == -0x7ffffcca)) goto LAB_1000669bb;
    if (iVar1 != -0x7ffffc90) goto LAB_100066b90;
    if (QVar7.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      pCVar5 = operator_new(0xd0);
      local_1a0 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_1a8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_1a0,&local_1a8);
      CVmEvent::addEventParameter((CVmEventParameter *)param_2.field0_0x0);
      if (*(int *)local_1a8 != -1) {
        if (*(int *)local_1a8 != 0) {
          LOCK();
          *(int *)local_1a8 = *(int *)local_1a8 + -1;
          local_31 = *(int *)local_1a8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066d20;
        }
        QArrayData::deallocate(local_1a8,2,8);
      }
LAB_100066d20:
      if (*(int *)local_1a0 != -1) {
        if (*(int *)local_1a0 != 0) {
          LOCK();
          *(int *)local_1a0 = *(int *)local_1a0 + -1;
          local_31 = *(int *)local_1a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066d56;
        }
        QArrayData::deallocate(local_1a0,2,8);
      }
LAB_100066d56:
      pCVar5 = operator_new(0xd0);
      local_1b0 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_1b8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_1b0,&local_1b8);
      CVmEvent::addEventParameter((CVmEventParameter *)param_2.field0_0x0);
      if (*(int *)local_1b8 != -1) {
        if (*(int *)local_1b8 != 0) {
          LOCK();
          *(int *)local_1b8 = *(int *)local_1b8 + -1;
          local_31 = *(int *)local_1b8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066dfb;
        }
        QArrayData::deallocate(local_1b8,2,8);
      }
LAB_100066dfb:
      if (*(int *)local_1b0 != -1) {
        if (*(int *)local_1b0 != 0) {
          LOCK();
          *(int *)local_1b0 = *(int *)local_1b0 + -1;
          local_31 = *(int *)local_1b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066b90;
        }
        QArrayData::deallocate(local_1b0,2,8);
      }
    }
    else {
      pCVar5 = operator_new(0xd0);
      local_1c0 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_1c8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_1c0,&local_1c8);
      CVmEvent::addEventParameter((CVmEventParameter *)local_168);
      if (*(int *)local_1c8 != -1) {
        if (*(int *)local_1c8 != 0) {
          LOCK();
          *(int *)local_1c8 = *(int *)local_1c8 + -1;
          local_31 = *(int *)local_1c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006687e;
        }
        QArrayData::deallocate(local_1c8,2,8);
      }
LAB_10006687e:
      if (*(int *)local_1c0 != -1) {
        if (*(int *)local_1c0 != 0) {
          LOCK();
          *(int *)local_1c0 = *(int *)local_1c0 + -1;
          local_31 = *(int *)local_1c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000668b4;
        }
        QArrayData::deallocate(local_1c0,2,8);
      }
LAB_1000668b4:
      pCVar5 = operator_new(0xd0);
      local_1d0 = (QArrayData *)local_50.field0_0x0;
      if (1 < *(int *)local_50.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
      }
      local_1d8 = (QArrayData *)QString::fromAscii_helper("vm_message_param_1",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_1d0,&local_1d8);
      CVmEvent::addEventParameter((CVmEventParameter *)local_168);
      if (*(int *)local_1d8 != -1) {
        if (*(int *)local_1d8 != 0) {
          LOCK();
          *(int *)local_1d8 = *(int *)local_1d8 + -1;
          local_31 = *(int *)local_1d8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10006695d;
        }
        QArrayData::deallocate(local_1d8,2,8);
      }
LAB_10006695d:
      if (*(int *)local_1d0 != -1) {
        if (*(int *)local_1d0 != 0) {
          LOCK();
          *(int *)local_1d0 = *(int *)local_1d0 + -1;
          local_31 = *(int *)local_1d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066b90;
        }
        QArrayData::deallocate(local_1d0,2,8);
      }
    }
  }
  else {
    if ((0x19 < iVar1 + 0x7ffe0000U) || ((0x3f9017fU >> (iVar1 + 0x7ffe0000U & 0x1f) & 1) == 0))
    goto LAB_100066b90;
LAB_1000669bb:
    if (QVar7.field0_0x0 == (QTypedArrayData<unsigned_short> *)0x0) {
      pCVar5 = operator_new(0xd0);
      local_180 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_188 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_180,&local_188);
      CVmEvent::addEventParameter((CVmEventParameter *)param_2.field0_0x0);
      if (*(int *)local_188 != -1) {
        if (*(int *)local_188 != 0) {
          LOCK();
          *(int *)local_188 = *(int *)local_188 + -1;
          local_31 = *(int *)local_188 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066b5a;
        }
        QArrayData::deallocate(local_188,2,8);
      }
LAB_100066b5a:
      if (*(int *)local_180 != -1) {
        if (*(int *)local_180 != 0) {
          LOCK();
          *(int *)local_180 = *(int *)local_180 + -1;
          local_31 = *(int *)local_180 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066b90;
        }
        QArrayData::deallocate(local_180,2,8);
      }
    }
    else {
      pCVar5 = operator_new(0xd0);
      local_190 = (QArrayData *)local_48.field0_0x0;
      if (1 < *(int *)local_48.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
      }
      local_198 = (QArrayData *)QString::fromAscii_helper("vm_message_param_0",0x12);
      CVmEventParameter::CVmEventParameter(pCVar5,1,&local_190,&local_198);
      CVmEvent::addEventParameter((CVmEventParameter *)local_168);
      if (*(int *)local_198 != -1) {
        if (*(int *)local_198 != 0) {
          LOCK();
          *(int *)local_198 = *(int *)local_198 + -1;
          local_31 = *(int *)local_198 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066a6d;
        }
        QArrayData::deallocate(local_198,2,8);
      }
LAB_100066a6d:
      if (*(int *)local_190 != -1) {
        if (*(int *)local_190 != 0) {
          LOCK();
          *(int *)local_190 = *(int *)local_190 + -1;
          local_31 = *(int *)local_190 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100066b90;
        }
        QArrayData::deallocate(local_190,2,8);
      }
    }
  }
LAB_100066b90:
  if (QVar7.field0_0x0 != (QTypedArrayData<unsigned_short> *)0x0) {
    CBaseNode::toString(SUB81(&local_1e0,0),SUB81(local_160,0));
    CVmEventParameter::setParamValue(QVar7);
    if (*(int *)local_1e0 != -1) {
      if (*(int *)local_1e0 != 0) {
        LOCK();
        *(int *)local_1e0 = *(int *)local_1e0 + -1;
        local_31 = *(int *)local_1e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100066bf1;
      }
      QArrayData::deallocate(local_1e0,2,8);
    }
  }
LAB_100066bf1:
  QEvent::~QEvent(local_88);
  CVmEventBase::~CVmEventBase((CVmEventBase *)local_168);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100066c36;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100066c36:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return iVar1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return iVar1;
}


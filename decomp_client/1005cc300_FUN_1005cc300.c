
QString * FUN_1005cc300(QString *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 extraout_AH;
  size_t sVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  char *pcVar6;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  puVar1 = PTR_s_Chrome_102275018;
  iVar2 = -1;
  if (PTR_s_Chrome_102275018 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Chrome_102275018);
    iVar2 = (int)sVar4;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(param_2,&local_38,0,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cc388;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1005cc388:
  puVar1 = PTR_s_Fedora_102275020;
  if (iVar2 != -1) {
    pcVar6 = "qrc:/pixmaps/OsIcons/os-chrome_512x512.png";
    iVar2 = 0x2a;
    goto LAB_1005cc727;
  }
  iVar2 = -1;
  if (PTR_s_Fedora_102275020 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Fedora_102275020);
    iVar2 = (int)sVar4;
  }
  local_40 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(param_2,&local_40,0,1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cc40e;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1005cc40e:
  puVar1 = PTR_s_Ubuntu_102275028;
  if (iVar2 != -1) {
    pcVar6 = "qrc:/pixmaps/OsIcons/os-fedora_512x512.png";
    iVar2 = 0x2a;
    goto LAB_1005cc727;
  }
  iVar2 = -1;
  if (PTR_s_Ubuntu_102275028 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Ubuntu_102275028);
    iVar2 = (int)sVar4;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(param_2,&local_48,0,1);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cc494;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1005cc494:
  puVar1 = PTR_s_Android_102275030;
  if (iVar2 != -1) {
    pcVar6 = "qrc:/pixmaps/OsIcons/os-ubuntu_512x512.png";
    iVar2 = 0x2a;
    goto LAB_1005cc727;
  }
  iVar2 = -1;
  if (PTR_s_Android_102275030 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Android_102275030);
    iVar2 = (int)sVar4;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(param_2,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cc51a;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1005cc51a:
  puVar1 = PTR_s_Windows_10_development_102275048;
  if (iVar2 != -1) {
    pcVar6 = "qrc:/pixmaps/OsIcons/os-android_512x512.png";
    iVar2 = 0x2b;
    goto LAB_1005cc727;
  }
  iVar2 = -1;
  if (PTR_s_Windows_10_development_102275048 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_Windows_10_development_102275048);
    iVar2 = (int)sVar4;
  }
  local_58 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(param_2,&local_58,0,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1005cc5a0;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1005cc5a0:
  if (iVar2 != -1) {
    pcVar6 = "qrc:/pixmaps/OsIcons/os-windows-10_512x512.png";
    iVar2 = 0x2e;
    goto LAB_1005cc727;
  }
  if (param_3 != 0) {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_60 + *(long *)(local_60 + 0x10),*(undefined4 *)(local_60 + 4),
                       PTR_s_ModernIE_102275038,0xffffffff,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cc625;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1005cc625:
    if (iVar2 == 0) {
      pcVar6 = "qrc:/Modern_ie.png";
      iVar2 = 0x12;
      goto LAB_1005cc727;
    }
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_68 + *(long *)(local_68 + 0x10),*(undefined4 *)(local_68 + 4),
                       PTR_s_GetTrialWindows_102275040,0xffffffff,1);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_29 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cc693;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1005cc693:
    if (iVar2 == 0) {
      pcVar6 = "qrc:/GetTrialWindows.png";
      iVar2 = 0x18;
      goto LAB_1005cc727;
    }
    CAppliance::getApplianceVersion();
    iVar2 = QString::compare_helper
                      (local_70 + *(long *)(local_70 + 0x10),*(undefined4 *)(local_70 + 4),"1.5",
                       0xffffffff,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_29 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005cc6fe;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1005cc6fe:
    if (iVar2 == 0) {
      CAppliance::getApplianceOsVer();
      uVar3 = CAppliance::getApplianceOsVer();
      ResourceUtils::getOsIconPath(&local_78,extraout_AH,uVar3,10);
      QString::fromUtf8_helper((char *)param_1,0x1def9df);
      QString::append(param_1);
      if (*(int *)local_78 == -1) {
        return param_1;
      }
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        UNLOCK();
        if (*(int *)local_78 != 0) {
          return param_1;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_78,2,8);
      return param_1;
    }
  }
  pcVar6 = "";
  iVar2 = 0;
LAB_1005cc727:
  pQVar5 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar6,iVar2);
  param_1->field0_0x0 = pQVar5;
  return param_1;
}


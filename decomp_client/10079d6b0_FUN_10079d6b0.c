
undefined8 FUN_10079d6b0(void)

{
  undefined *puVar1;
  int iVar2;
  size_t sVar3;
  undefined8 uVar4;
  bool bVar5;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  CAppliance::getApplianceName();
  puVar1 = PTR_s_Chrome_102275018;
  iVar2 = -1;
  if (PTR_s_Chrome_102275018 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Chrome_102275018);
    iVar2 = (int)sVar3;
  }
  local_30 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(&local_28,&local_30,0,1);
  bVar5 = true;
  if (iVar2 == -1) {
    CAppliance::getApplianceName();
    EnumUtils::OsTypeToString((uint)&local_40);
    iVar2 = QString::indexOf(&local_38,&local_40,0,1);
    bVar5 = iVar2 != -1;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_19 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10079d77c;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_10079d77c:
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_19 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10079d7ac;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_10079d7ac:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_19 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d7dc;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10079d7dc:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d80c;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10079d80c:
  if (bVar5) {
    return 0xf01;
  }
  CAppliance::getApplianceName();
  puVar1 = PTR_s_Fedora_102275020;
  iVar2 = -1;
  if (PTR_s_Fedora_102275020 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Fedora_102275020);
    iVar2 = (int)sVar3;
  }
  local_50 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(&local_48,&local_50,0,1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_19 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d893;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10079d893:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_19 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d8c3;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10079d8c3:
  if (iVar2 != -1) {
    return 0x907;
  }
  CAppliance::getApplianceName();
  puVar1 = PTR_s_Ubuntu_102275028;
  iVar2 = -1;
  if (PTR_s_Ubuntu_102275028 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Ubuntu_102275028);
    iVar2 = (int)sVar3;
  }
  local_60 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(&local_58,&local_60,0,1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d94b;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_10079d94b:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_19 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079d97b;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10079d97b:
  if (iVar2 != -1) {
    return 0x90a;
  }
  CAppliance::getApplianceName();
  puVar1 = PTR_s_Android_102275030;
  iVar2 = -1;
  if (PTR_s_Android_102275030 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_Android_102275030);
    iVar2 = (int)sVar3;
  }
  local_70 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar2);
  iVar2 = QString::indexOf(&local_68,&local_70,0,1);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_19 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079da03;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10079da03:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_19 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079da33;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10079da33:
  if (iVar2 != -1) {
    return 0x1002;
  }
  CAppliance::getType();
  iVar2 = QString::compare_helper
                    (local_78 + *(long *)(local_78 + 0x10),*(undefined4 *)(local_78 + 4),
                     PTR_s_ModernIE_102275038,0xffffffff,1);
  bVar5 = true;
  if (iVar2 != 0) {
    CAppliance::getType();
    iVar2 = QString::compare_helper
                      (local_80 + *(long *)(local_80 + 0x10),*(undefined4 *)(local_80 + 4),
                       PTR_s_GetTrialWindows_102275040,0xffffffff,1);
    bVar5 = true;
    if (iVar2 != 0) {
      CAppliance::getType();
      iVar2 = QString::compare_helper
                        (local_88 + *(long *)(local_88 + 0x10),*(undefined4 *)(local_88 + 4),
                         PTR_s_Windows_10_development_102275048,0xffffffff,1);
      bVar5 = true;
      if (iVar2 != 0) {
        CAppliance::getType();
        iVar2 = QString::compare_helper
                          (local_90 + *(long *)(local_90 + 0x10),*(undefined4 *)(local_90 + 4),
                           PTR_s_DynamicAppliance_102275050,0xffffffff,1);
        bVar5 = iVar2 == 0;
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_19 = *(int *)local_90 != 0;
            UNLOCK();
            if ((bool)local_19) goto LAB_10079db60;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
LAB_10079db60:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_19 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_19) goto LAB_10079db90;
        }
        QArrayData::deallocate(local_88,2,8);
      }
    }
LAB_10079db90:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_19 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_10079dbc0;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10079dbc0:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_19 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10079dbf0;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_10079dbf0:
  uVar4 = 0xff02;
  if (bVar5) {
    uVar4 = CAppliance::getApplianceOsVer();
  }
  return uVar4;
}


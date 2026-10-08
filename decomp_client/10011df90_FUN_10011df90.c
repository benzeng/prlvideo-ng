
undefined1 FUN_10011df90(void)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  Data *pDVar5;
  QArrayData *pQVar6;
  undefined1 uVar7;
  QArrayData *local_60;
  QArrayData *local_58;
  Data *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10018c2b0();
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  iVar2 = CVmRunTimeOptions::getOptimizePowerConsumptionMode();
  if (iVar2 != 1) {
    return 0;
  }
  lVar4 = FUN_10098ae20();
  if (*(int *)(lVar4 + 0x14) != 1) {
    return 0;
  }
  FUN_1009e5bf0(&local_40);
  if (*(int *)(local_40 + 4) == 0) {
    uVar7 = 0;
    goto LAB_10011e229;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("MacBookPro",10);
  iVar2 = QString::indexOf(&local_40,&local_48,0,0);
  if (iVar2 == -1) {
LAB_10011e1f6:
    uVar7 = 0;
  }
  else {
    QString::right((int)&local_58);
    local_60 = (QArrayData *)QString::fromAscii_helper(",",1);
    QString::split(&local_50,&local_58,&local_60,0,1);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011e095;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10011e095:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011e0c5;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10011e0c5:
    bVar1 = true;
    if (*(int *)(local_50 + 0xc) - *(int *)(local_50 + 8) == 2) {
      iVar2 = QString::toUInt((bool *)(local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10),0);
      uVar3 = QString::toUInt((bool *)(local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x18),0);
      uVar7 = 1;
      if (((iVar2 != 6) || (1 < uVar3 - 1)) && ((iVar2 != 8 || ((uVar3 & 0xfffffffe) != 2)))) {
        bVar1 = iVar2 - 9U < 2 && uVar3 == 1;
      }
    }
    else {
      uVar7 = 0;
    }
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10011e1f1;
      }
      iVar2 = *(int *)(local_50 + 0xc);
      if (iVar2 != *(int *)(local_50 + 8)) {
        lVar4 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar2 * -8;
        pDVar5 = local_50 + (long)iVar2 * 8 + 8;
        do {
          pQVar6 = *(QArrayData **)pDVar5;
          if (*(int *)pQVar6 == 0) {
LAB_10011e1d0:
            QArrayData::deallocate(pQVar6,2,8);
          }
          else if (*(int *)pQVar6 != -1) {
            LOCK();
            *(int *)pQVar6 = *(int *)pQVar6 + -1;
            local_31 = *(int *)pQVar6 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar6 = *(QArrayData **)pDVar5;
              goto LAB_10011e1d0;
            }
          }
          pDVar5 = pDVar5 + -8;
          lVar4 = lVar4 + 8;
        } while (lVar4 != 0);
      }
      QListData::dispose(local_50);
    }
LAB_10011e1f1:
    if (!bVar1) goto LAB_10011e1f6;
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10011e229;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_10011e229:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return uVar7;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return uVar7;
}


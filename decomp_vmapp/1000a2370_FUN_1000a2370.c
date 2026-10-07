
undefined8 FUN_1000a2370(long *param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  QString QVar5;
  CVmEventParameter *pCVar6;
  size_t sVar7;
  long *plVar8;
  QArrayData *pQVar9;
  QString QVar10;
  QString local_90;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  long *local_68;
  QArrayData *local_60;
  QArrayData *local_58;
  CVmEventParameter *local_50;
  undefined8 *local_48;
  undefined8 *puStack_40;
  undefined8 *local_38;
  undefined1 local_21;
  
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x10);
  local_48 = (undefined8 *)0x0;
  puStack_40 = (undefined8 *)0x0;
  local_38 = (undefined8 *)0x0;
  if (*(int *)(lVar3 + 8 + lVar2) != 0) goto LAB_1000a278a;
  pCVar6 = operator_new(0xd0);
  pcVar1 = (char *)(lVar3 + 0x10 + lVar2);
  sVar7 = _strlen(pcVar1);
  local_58 = (QArrayData *)QString::fromAscii_helper(pcVar1,(int)sVar7);
  local_60 = (QArrayData *)QString::fromAscii_helper("vmcfg_system_flags",0x12);
  CVmEventParameter::CVmEventParameter(pCVar6,1,&local_58);
  local_50 = pCVar6;
  if (puStack_40 == local_38) {
    FUN_10002da50(&local_48,&local_50);
  }
  else {
    *puStack_40 = pCVar6;
    puStack_40 = puStack_40 + 1;
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_21 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a2451;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1000a2451:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_21 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a2481;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000a2481:
  uVar4 = DAT_1011c3650;
  plVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  local_68 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    *(undefined4 *)(plVar8 + 1) = 1;
    plVar8[2] = 0;
    *plVar8 = (long)&PTR_FUN_100bef0d0;
    local_68 = plVar8;
  }
  FUN_100063770(uVar4,0x186bc,0,&local_48,0xbbb,&local_68);
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar8 = local_68 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*local_68 + 0x10))();
    }
  }
  sVar7 = _strlen(pcVar1);
  local_70.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper(pcVar1,(int)sVar7);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmRuntimeOptions();
  CVmRunTimeOptions::getSystemFlags();
  local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)(local_78 + 4) == 0) {
    QString::operator=(&local_80,&local_70);
  }
  else {
    pQVar9 = (QArrayData *)QString::fromAscii_helper(";",1);
    local_90.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_78;
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
    }
    QString::append(&local_90);
    local_88.field0_0x0 = local_90.field0_0x0;
    if (1 < *(int *)local_90.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + 1;
      local_21 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
    }
    QString::append(&local_88);
    QString::operator=(&local_80,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_21 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000a2607;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_1000a2607:
    if (*(int *)local_90.field0_0x0 != -1) {
      if (*(int *)local_90.field0_0x0 != 0) {
        LOCK();
        *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
        local_21 = *(int *)local_90.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000a263d;
      }
      QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
    }
LAB_1000a263d:
    if (*(int *)pQVar9 != -1) {
      if (*(int *)pQVar9 != 0) {
        LOCK();
        *(int *)pQVar9 = *(int *)pQVar9 + -1;
        local_21 = *(int *)pQVar9 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1000a2682;
      }
      QArrayData::deallocate(pQVar9,2,8);
    }
  }
LAB_1000a2682:
  CVmConfiguration::getVmSettings();
  QVar10.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmSettings::getVmRuntimeOptions();
  QVar5.field0_0x0 = local_80.field0_0x0;
  if (1 < *(int *)local_80.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
    local_21 = *(int *)local_80.field0_0x0 != 0;
    UNLOCK();
  }
  CVmRunTimeOptions::setSystemFlags(QVar10);
  if (*(int *)QVar5.field0_0x0 != -1) {
    if (*(int *)QVar5.field0_0x0 != 0) {
      LOCK();
      *(int *)QVar5.field0_0x0 = *(int *)QVar5.field0_0x0 + -1;
      local_21 = *(int *)QVar5.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a26fa;
    }
    QArrayData::deallocate((QArrayData *)QVar5.field0_0x0,2,8);
  }
LAB_1000a26fa:
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_21 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a272a;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1000a272a:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_21 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a275a;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1000a275a:
  if (*(int *)local_70.field0_0x0 != -1) {
    if (*(int *)local_70.field0_0x0 != 0) {
      LOCK();
      *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
      local_21 = *(int *)local_70.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000a278a;
    }
    QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
  }
LAB_1000a278a:
  if (local_48 != (undefined8 *)0x0) {
    if (puStack_40 != local_48) {
      puStack_40 = (undefined8 *)
                   ((~((long)puStack_40 + (-8 - (long)local_48)) & 0xfffffffffffffff8U) +
                   (long)puStack_40);
    }
    operator_delete(local_48);
  }
  return 0;
}



undefined8 FUN_1002695c0(long param_1)

{
  char cVar1;
  int iVar2;
  QStringList *pQVar3;
  void *pvVar4;
  void *pvVar5;
  undefined8 uVar6;
  Data *pDVar7;
  QArrayData *pQVar8;
  long lVar9;
  undefined1 local_b0 [24];
  QVariant local_98;
  QArrayData *local_88;
  int *local_80 [4];
  QVariant local_60 [2];
  QArrayData *local_48;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100188480(&local_38,uVar6);
  pQVar3 = (QStringList *)FUN_100269170(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100269633;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100269633:
  pvVar4 = operator_new(0x38);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_1007b3640(pvVar4,pQVar3,uVar6,param_1,1);
  pvVar5 = operator_new(0x20);
  FUN_100d3d190(pvVar5);
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100190650(&local_40,uVar6);
  FUN_1007b5520(&local_48,pvVar4);
  FUN_100d3e290(pvVar5,&local_40,&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002696ec;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1002696ec:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_29 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10026971c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10026971c:
  cVar1 = FUN_100d3e730(pvVar5);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018c2b0(uVar6);
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmAutoCompress();
  cVar1 = CVmAutoCompress::isEnabled();
  if (cVar1 == '\0') {
    return 0;
  }
  local_88 = (QArrayData *)
             QString::fromAscii_helper
                       ("1onEnabledAutoCompressMessageAnswered(PRL_RESULT, Messaging::ButtonID)",
                        0x46);
  local_98.field0_0x0.field1_0x8.bitField0_30 = 0x80000000;
  local_98.field0_0x0.field0_0x0.field7 = 0;
  FUN_100a1c600(local_80,param_1,&local_88,&local_98);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_29 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002697e5;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002697e5:
  iVar2 = CMessageManager::instance();
  local_b0._0_8_ = PTR_shared_null_1021e15e8;
  local_b0._16_8_ = PTR_shared_null_1021e15e8;
  uVar6 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar6 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_10018d830(local_b0 + 8,uVar6);
  FUN_1000341d0(local_b0 + 0x10,local_b0 + 8);
  CMessageManager::showMessageBox
            (iVar2,(QWidget *)0x3bd6,pQVar3,(QStringList *)(local_b0 + 0x10),(CSlotInfo *)local_b0,
             SUB81(local_80,0));
  uVar6 = local_b0._0_8_;
  if (*(int *)local_b0._0_8_ != -1) {
    if (*(int *)local_b0._0_8_ != 0) {
      LOCK();
      *(int *)local_b0._0_8_ = *(int *)local_b0._0_8_ + -1;
      local_29 = *(int *)local_b0._0_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002698f1;
    }
    iVar2 = *(int *)(local_b0._0_8_ + 0xc);
    if (iVar2 != *(int *)(local_b0._0_8_ + 8)) {
      lVar9 = (long)*(int *)(local_b0._0_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = (Data *)(local_b0._0_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1002698d0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1002698d0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_1002698f1:
  if (*(int *)local_b0._8_8_ != -1) {
    if (*(int *)local_b0._8_8_ != 0) {
      LOCK();
      *(int *)local_b0._8_8_ = *(int *)local_b0._8_8_ + -1;
      local_29 = *(int *)local_b0._8_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100269927;
    }
    QArrayData::deallocate((QArrayData *)local_b0._8_8_,2,8);
  }
LAB_100269927:
  uVar6 = local_b0._16_8_;
  if (*(int *)local_b0._16_8_ != -1) {
    if (*(int *)local_b0._16_8_ != 0) {
      LOCK();
      *(int *)local_b0._16_8_ = *(int *)local_b0._16_8_ + -1;
      local_29 = *(int *)local_b0._16_8_ != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1002699c1;
    }
    iVar2 = *(int *)(local_b0._16_8_ + 0xc);
    if (iVar2 != *(int *)(local_b0._16_8_ + 8)) {
      lVar9 = (long)*(int *)(local_b0._16_8_ + 8) * 8 + (long)iVar2 * -8;
      pDVar7 = (Data *)(local_b0._16_8_ + (long)iVar2 * 8 + 8);
      do {
        pQVar8 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar8 == 0) {
LAB_1002699a0:
          QArrayData::deallocate(pQVar8,2,8);
        }
        else if (*(int *)pQVar8 != -1) {
          LOCK();
          *(int *)pQVar8 = *(int *)pQVar8 + -1;
          local_29 = *(int *)pQVar8 != 0;
          UNLOCK();
          if (!(bool)local_29) {
            pQVar8 = *(QArrayData **)pDVar7;
            goto LAB_1002699a0;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose((Data *)uVar6);
  }
LAB_1002699c1:
  CAbstractTask::setWaitForSubTaskCompletion();
  QVariant::~QVariant(local_60);
  if (local_80[0] != (int *)0x0) {
    LOCK();
    *local_80[0] = *local_80[0] + -1;
    local_29 = *local_80[0] != 0;
    UNLOCK();
    if ((!(bool)local_29) && (local_80[0] != (int *)0x0)) {
      operator_delete(local_80[0]);
    }
  }
  return 0;
}


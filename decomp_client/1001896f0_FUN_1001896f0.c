
void FUN_1001896f0(CSdkCommunicator *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  uint uVar4;
  undefined8 uVar5;
  QObject *pQVar6;
  CVmConfiguration *this;
  QString QVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  Data *pDVar11;
  long lVar12;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  undefined4 local_5c;
  Data *local_58;
  undefined1 local_49;
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  CSdkCommunicator::CSdkCommunicator(param_1,param_4,2);
  *(undefined ***)param_1 = &PTR_FUN_1021fd460;
  piVar9 = (int *)*param_3;
  *(int **)(param_1 + 0x28) = piVar9;
  if (1 < *piVar9 + 1U) {
    LOCK();
    *piVar9 = *piVar9 + 1;
    local_49 = *piVar9 != 0;
    UNLOCK();
  }
  uVar5 = FUN_100152280();
  pQVar6 = (QObject *)FUN_100152a20(uVar5,param_1 + 0x28);
  uVar5 = 0;
  if (pQVar6 != (QObject *)0x0) {
    uVar5 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar5;
  *(QObject **)(param_1 + 0x38) = pQVar6;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x30000001;
  local_58 = (Data *)PTR_shared_null_1021e15e8;
  local_5c = 0x30000001;
  FUN_100191200(&local_58,&local_5c);
  FUN_10017f5e0(param_1 + 0x50,&local_58);
  pDVar3 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_49 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100189860;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar12 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar11 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar11 != (void *)0x0) {
          operator_delete(*(void **)pDVar11);
        }
        pDVar11 = pDVar11 + -8;
        lVar12 = lVar12 + 8;
      } while (lVar12 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100189860:
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x30000001;
  *(undefined4 *)(param_1 + 100) = 3;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  puVar2 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x88) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined **)(param_1 + 0xe8) = puVar2;
  *(undefined **)(param_1 + 0xf8) = PTR_shared_null_1021e15d0;
  FUN_100188380(param_1);
  this = operator_new(0xf8);
  CVmConfiguration::CVmConfiguration(this);
  *(CVmConfiguration **)(param_1 + 0x80) = this;
  if (((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to initialize VM object.");
  }
  else {
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    local_68 = *(QArrayData **)(param_2 + 8);
    if (1 < *(int *)local_68 + 1U) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_49 = *(int *)local_68 != 0;
      UNLOCK();
    }
    CVmIdentification::setHomePath(QVar7);
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_1001899b5;
      }
      QArrayData::deallocate(local_68,2,8);
    }
LAB_1001899b5:
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    FUN_100dda3c0(local_48);
    FUN_100dda3a0(&local_70,local_48);
    CVmIdentification::setVmUuid(QVar7);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100189a16;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100189a16:
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    local_78 = *(QArrayData **)(param_2 + 0x10);
    if (1 < *(int *)local_78 + 1U) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + 1;
      local_49 = *(int *)local_78 != 0;
      UNLOCK();
    }
    CVmIdentification::setVmName(QVar7);
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100189a78;
      }
      QArrayData::deallocate(local_78,2,8);
    }
LAB_100189a78:
    CVmConfiguration::getVmSettings();
    uVar4 = CVmSettings::getVmCommonOptions();
    local_80 = *(QArrayData **)(param_2 + 8);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_49 = *(int *)local_80 != 0;
      UNLOCK();
    }
    FUN_10074a970(&local_80);
    CVmCommonOptions::setOsVersion(uVar4);
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100189b0c;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_100189b0c:
  pQVar6 = operator_new(0x180);
  FUN_100317650(pQVar6,param_1);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
  piVar9 = *(int **)(param_1 + 200);
  if (piVar9 != piVar8) {
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + 1;
      local_49 = *piVar8 != 0;
      UNLOCK();
      piVar9 = *(int **)(param_1 + 200);
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_49 = *piVar9 != 0;
      UNLOCK();
      if ((!(bool)local_49) && (*(void **)(param_1 + 200) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 200));
      }
    }
    *(int **)(param_1 + 200) = piVar8;
    *(QObject **)(param_1 + 0xd0) = pQVar6;
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    *piVar8 = *piVar8 + -1;
    local_49 = *piVar8 != 0;
    UNLOCK();
    if (!(bool)local_49) {
      operator_delete(piVar8);
    }
  }
  uVar5 = 0;
  if ((*(long *)(param_1 + 200) != 0) && (uVar5 = 0, *(int *)(*(long *)(param_1 + 200) + 4) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0xd0);
  }
  FUN_100317c80(uVar5);
  pvVar10 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_1007b64c0(pvVar10,&local_88);
  lVar12 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(void **)(param_1 + 0xe0) = pvVar10;
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_49 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_100189c30;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_100189c30:
  if (lVar12 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


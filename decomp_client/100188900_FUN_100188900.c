
void FUN_100188900(CSdkCommunicator *param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  Data *pDVar3;
  undefined8 uVar4;
  QObject *pQVar5;
  CVmConfiguration *this;
  undefined8 uVar6;
  QString QVar7;
  int *piVar8;
  int *piVar9;
  void *pvVar10;
  QArrayData *pQVar11;
  Data *pDVar12;
  long lVar13;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  undefined1 local_88 [8];
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
  uVar4 = FUN_100152280();
  pQVar5 = (QObject *)FUN_100152a20(uVar4,param_1 + 0x28);
  uVar4 = 0;
  if (pQVar5 != (QObject *)0x0) {
    uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  *(QObject **)(param_1 + 0x38) = pQVar5;
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
      if ((bool)local_49) goto LAB_100188a70;
    }
    iVar1 = *(int *)(local_58 + 0xc);
    if (iVar1 != *(int *)(local_58 + 8)) {
      lVar13 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar1 * -8;
      pDVar12 = local_58 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar12 != (void *)0x0) {
          operator_delete(*(void **)pDVar12);
        }
        pDVar12 = pDVar12 + -8;
        lVar13 = lVar13 + 8;
      } while (lVar13 != 0);
    }
    QListData::dispose(pDVar3);
  }
LAB_100188a70:
  *(undefined4 *)(param_1 + 0x58) = 1;
  *(undefined4 *)(param_1 + 0x60) = 0x30000001;
  *(undefined4 *)(param_1 + 100) = 2;
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
  if (2 < DAT_10230ffd0) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    QString::toLocal8Bit();
    pQVar11 = local_68 + *(long *)(local_68 + 0x10);
    local_80 = *(QArrayData **)(param_1 + 0x28);
    if (1 < *(int *)local_80 + 1U) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + 1;
      local_49 = *(int *)local_80 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","prl_client_app",3,"this=%p VmUuid %s, ServerUuid %s",param_1,pQVar11,
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188c07;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_100188c07:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_49 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188c37;
      }
      QArrayData::deallocate(local_80,2,8);
    }
LAB_100188c37:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_49 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188c67;
      }
      QArrayData::deallocate(local_68,1,8);
    }
LAB_100188c67:
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_49 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188c97;
      }
      QArrayData::deallocate(local_70,2,8);
    }
  }
LAB_100188c97:
  if (((*(long *)(param_1 + 0x30) == 0) || (*(int *)(*(long *)(param_1 + 0x30) + 4) == 0)) ||
     (*(long *)(param_1 + 0x38) == 0)) {
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t get server instance to initialize VM object.");
  }
  else {
    FUN_100cbf630(local_88);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    local_90 = *(QArrayData **)(param_2 + 0x10);
    if (1 < *(int *)local_90 + 1U) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_49 = *(int *)local_90 != 0;
      UNLOCK();
    }
    uVar6 = 0;
    if ((*(long *)(param_1 + 0x30) != 0) &&
       (uVar6 = 0, *(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) {
      uVar6 = *(undefined8 *)(param_1 + 0x38);
    }
    uVar6 = FUN_10015a340(uVar6);
    FUN_100ccc8e0(local_88,uVar4,&local_90,uVar6);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_49 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188d4e;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_100188d4e:
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    local_98 = *(QArrayData **)(param_2 + 0x10);
    if (1 < *(int *)local_98 + 1U) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + 1;
      local_49 = *(int *)local_98 != 0;
      UNLOCK();
    }
    CVmIdentification::setHomePath(QVar7);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_49 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188dbc;
      }
      QArrayData::deallocate(local_98,2,8);
    }
LAB_100188dbc:
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    FUN_100dda3c0(local_48);
    FUN_100dda3a0(&local_a0,local_48);
    CVmIdentification::setVmUuid(QVar7);
    if (*(int *)local_a0 != -1) {
      if (*(int *)local_a0 != 0) {
        LOCK();
        *(int *)local_a0 = *(int *)local_a0 + -1;
        local_49 = *(int *)local_a0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188e29;
      }
      QArrayData::deallocate(local_a0,2,8);
    }
LAB_100188e29:
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getVmUuid();
    if (*(int *)(local_a8 + 4) != 0) {
      QString::remove((int)&local_a8,0);
      QString::chop((int)&local_a8);
    }
    QVar7.field0_0x0 = (QTypedArrayData<unsigned_short> *)CVmConfiguration::getVmIdentification();
    local_b0 = local_a8;
    if (1 < *(int *)local_a8 + 1U) {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + 1;
      local_49 = *(int *)local_a8 != 0;
      UNLOCK();
    }
    CVmIdentification::setVmUuid(QVar7);
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        local_49 = *(int *)local_b0 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188ee5;
      }
      QArrayData::deallocate(local_b0,2,8);
    }
LAB_100188ee5:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_49 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100188f3b;
      }
      QArrayData::deallocate(local_a8,2,8);
    }
  }
LAB_100188f3b:
  pQVar5 = operator_new(0x180);
  FUN_100317650(pQVar5,param_1);
  piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar5);
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
    *(QObject **)(param_1 + 0xd0) = pQVar5;
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
  uVar4 = 0;
  if ((*(long *)(param_1 + 200) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 200) + 4) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0xd0);
  }
  FUN_100317c80(uVar4);
  pvVar10 = operator_new(0x18);
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  FUN_1007b64c0(pvVar10,&local_b8);
  lVar13 = *(long *)PTR____stack_chk_guard_1021e1840;
  *(void **)(param_1 + 0xe0) = pvVar10;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_49 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_49) goto LAB_10018906b;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10018906b:
  if (lVar13 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


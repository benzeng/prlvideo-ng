
void FUN_100187bf0(CSdkCommunicator *param_1,long *param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  int iVar1;
  int *piVar2;
  QArrayData *pQVar3;
  undefined *puVar4;
  Data *pDVar5;
  undefined8 uVar6;
  QObject *pQVar7;
  void *pvVar8;
  long lVar9;
  Data *pDVar10;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  Data *local_40;
  undefined4 local_38;
  undefined1 local_31;
  
  local_38 = param_5;
  CSdkCommunicator::CSdkCommunicator(param_1,param_8,2);
  *(undefined ***)param_1 = &PTR_FUN_1021fd460;
  piVar2 = (int *)*param_4;
  *(int **)(param_1 + 0x28) = piVar2;
  if (1 < *piVar2 + 1U) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    local_31 = *piVar2 != 0;
    UNLOCK();
  }
  uVar6 = FUN_100152280();
  pQVar7 = (QObject *)FUN_100152a20(uVar6,param_1 + 0x28);
  uVar6 = 0;
  if (pQVar7 != (QObject *)0x0) {
    uVar6 = QtSharedPointer::ExternalRefCountData::getAndRef(pQVar7);
  }
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  *(QObject **)(param_1 + 0x38) = pQVar7;
  lVar9 = *param_2;
  *(long *)(param_1 + 0x40) = lVar9;
  if (lVar9 != 0) {
    _PrlHandle_AddRef();
  }
  *(undefined4 *)(param_1 + 0x48) = param_5;
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  FUN_100191200(&local_40,&local_38);
  FUN_10017f5e0(param_1 + 0x50,&local_40);
  pDVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100187d2f;
    }
    iVar1 = *(int *)(local_40 + 0xc);
    if (iVar1 != *(int *)(local_40 + 8)) {
      lVar9 = (long)*(int *)(local_40 + 8) * 8 + (long)iVar1 * -8;
      pDVar10 = local_40 + (long)iVar1 * 8 + 8;
      do {
        if (*(void **)pDVar10 != (void *)0x0) {
          operator_delete(*(void **)pDVar10);
        }
        pDVar10 = pDVar10 + -8;
        lVar9 = lVar9 + 8;
      } while (lVar9 != 0);
    }
    QListData::dispose(pDVar5);
  }
LAB_100187d2f:
  *(undefined4 *)(param_1 + 0x58) = param_6;
  *(undefined4 *)(param_1 + 0x5c) = param_6;
  *(undefined4 *)(param_1 + 0x60) = param_5;
  *(undefined4 *)(param_1 + 100) = param_7;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined **)(param_1 + 0x78) = PTR_shared_null_1021e12f0;
  *(undefined8 *)(param_1 + 0x80) = param_3;
  puVar4 = PTR_shared_null_1021e1288;
  *(undefined **)(param_1 + 0x88) = PTR_shared_null_1021e1288;
  pvVar8 = operator_new(8);
  FUN_1007c63c0(pvVar8);
  *(void **)(param_1 + 0x90) = pvVar8;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined **)(param_1 + 0xe8) = puVar4;
  *(undefined **)(param_1 + 0xf8) = PTR_shared_null_1021e15d0;
  FUN_100188380(param_1);
  if (DAT_10230ffd0 < 3) goto LAB_100187f61;
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  QString::toLocal8Bit();
  lVar9 = *(long *)(local_48 + 0x10);
  pQVar3 = *(QArrayData **)(param_1 + 0x28);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    local_31 = *(int *)pQVar3 != 0;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_100df99c0("","prl_client_app",3,"this=%p VmUuid %s, ServerUuid %s",param_1,local_48 + lVar9,
                local_58 + *(long *)(local_58 + 0x10));
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100187ed1;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100187ed1:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100187f01;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100187f01:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100187f31;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100187f31:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100187f61;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100187f61:
  FUN_1001884e0(param_1);
  return;
}


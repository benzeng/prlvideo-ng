
void FUN_100200e60(CAbstractTask *param_1,QObject *param_2,undefined8 *param_3,undefined8 *param_4)

{
  CTaskGenericId *pCVar1;
  undefined8 uVar2;
  QObject *pQVar3;
  int *piVar4;
  int *piVar5;
  QArrayData *local_40;
  undefined1 local_31;
  
  pCVar1 = operator_new(0x18);
  FUN_100188480(&local_40,param_2);
  FUN_100203000(pCVar1,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar1);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100200ee2;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_100200ee2:
  *(undefined ***)param_1 = &PTR_FUN_1022005d0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  uVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(QObject **)(param_1 + 0x30) = param_2;
  piVar4 = (int *)*param_3;
  *(int **)(param_1 + 0x38) = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  piVar4 = (int *)*param_4;
  *(int **)(param_1 + 0x40) = piVar4;
  if (1 < *piVar4 + 1U) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    local_31 = *piVar4 != 0;
    UNLOCK();
  }
  *(undefined **)(param_1 + 0x48) = PTR_shared_null_1021e1288;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  uVar2 = FUN_100152280();
  pQVar3 = (QObject *)FUN_1001554a0(uVar2);
  piVar4 = (int *)0x0;
  if (pQVar3 != (QObject *)0x0) {
    piVar4 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
  }
  piVar5 = *(int **)(param_1 + 0x60);
  if (piVar5 != piVar4) {
    if (piVar4 != (int *)0x0) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
      piVar5 = *(int **)(param_1 + 0x60);
    }
    if (piVar5 != (int *)0x0) {
      LOCK();
      *piVar5 = *piVar5 + -1;
      local_31 = *piVar5 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x60) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x60));
      }
    }
    *(int **)(param_1 + 0x60) = piVar4;
    *(QObject **)(param_1 + 0x68) = pQVar3;
  }
  if (piVar4 != (int *)0x0) {
    LOCK();
    *piVar4 = *piVar4 + -1;
    local_31 = *piVar4 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar4);
    }
  }
  return;
}


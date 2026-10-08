
void FUN_10022c070(CAbstractTask *param_1,QObject *param_2,long *param_3,undefined8 *param_4,
                  QObject *param_5)

{
  long lVar1;
  CTaskGenericId *pCVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 local_48 [8];
  Data *local_40;
  undefined1 local_31;
  
  local_40 = (Data *)PTR_shared_null_1021e15e8;
  pCVar2 = operator_new(0x18);
  FUN_10022cef0(local_48,param_3);
  FUN_10022cb60(pCVar2,local_48);
  CAbstractTask::CAbstractTask(param_1,(QList *)&local_40,pCVar2);
  FUN_10022ca00(local_48);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10022c113;
    }
    QListData::dispose(local_40);
  }
LAB_10022c113:
  *(undefined ***)param_1 = &PTR_FUN_102202280;
  uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(QObject **)(param_1 + 0x20) = param_2;
  FUN_10022cef0(param_1 + 0x28,param_3);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(param_1 + 0x30) = *param_4;
  iVar4 = 0;
  uVar3 = 0;
  if (param_5 != (QObject *)0x0) {
    uVar3 = QtSharedPointer::ExternalRefCountData::getAndRef(param_5);
  }
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  *(QObject **)(param_1 + 0x48) = param_5;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(*param_3 + 0xc) - *(int *)(*param_3 + 8);
  *(undefined4 *)(param_1 + 100) = 0;
  param_1[0x30] = (CAbstractTask)0x0;
  if (*(int *)(*(long *)(param_1 + 0x28) + 8) < *(int *)(*(long *)(param_1 + 0x28) + 0xc)) {
    do {
      CAbstractTask::appendSubTask((int)param_1);
      iVar4 = iVar4 + 1;
      lVar1 = *(long *)(param_1 + 0x28);
    } while (iVar4 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8));
  }
  return;
}


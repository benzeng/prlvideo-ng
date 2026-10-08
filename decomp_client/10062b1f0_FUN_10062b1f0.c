
void FUN_10062b1f0(CAbstractTask *param_1,QObject *param_2,CDownloadedKeyList *param_3,
                  undefined8 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  CTaskGenericId *pCVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  QArrayData *local_40;
  undefined1 local_36;
  undefined1 local_35;
  
  pCVar3 = operator_new(0x18);
  FUN_10015aab0(&local_40,param_2);
  FUN_10062c870(pCVar3,&local_40);
  CAbstractTask::CAbstractTask(param_1,pCVar3);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_36 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_36) goto LAB_10062b274;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10062b274:
  *(undefined ***)param_1 = &PTR_FUN_102221b70;
  uVar4 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  *(QObject **)(param_1 + 0x20) = param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  CDownloadedKeyList::CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0x38),param_3);
  piVar1 = (int *)*param_4;
  *(int **)(param_1 + 0xd8) = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    local_35 = *piVar1 != 0;
    UNLOCK();
  }
  CDownloadedKeyList::CDownloadedKeyList((CDownloadedKeyList *)(param_1 + 0xe0));
  puVar2 = PTR_shared_null_1021e15e8;
  auVar5._8_4_ = (int)PTR_shared_null_1021e15e8;
  auVar5._0_8_ = PTR_shared_null_1021e15e8;
  auVar5._12_4_ = (int)((ulong)PTR_shared_null_1021e15e8 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x180) = auVar5;
  *(undefined **)(param_1 + 400) = puVar2;
  return;
}


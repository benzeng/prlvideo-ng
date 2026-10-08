
void FUN_10027cdc0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  Data *pDVar4;
  int iVar5;
  Data *local_30;
  Data *local_28;
  
  if (param_3 != 1) {
                    /* WARNING: Could not recover jumptable at 0x00010027ce0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0x80000275);
    return;
  }
  CAbstractTask::getRemainSubTasks();
  iVar5 = *(int *)(local_28 + 8);
  if (iVar5 == *(int *)(local_28 + 0xc)) {
    bVar2 = false;
  }
  else {
    pDVar4 = local_28 + (long)iVar5 * 8 + 0x10;
    lVar3 = (long)*(int *)(local_28 + 0xc) * 8 + (long)iVar5 * -8;
    do {
      bVar2 = true;
      if (*(int *)pDVar4 == 6) goto LAB_10027ce33;
      pDVar4 = pDVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    bVar2 = false;
  }
LAB_10027ce33:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) goto LAB_10027ce55;
    }
    QListData::dispose(local_28);
  }
LAB_10027ce55:
  iVar5 = (int)param_1;
  if (!bVar2) {
    CAbstractTask::prependSubTask(iVar5);
  }
  CAbstractTask::getRemainSubTasks();
  iVar1 = *(int *)(local_30 + 8);
  if (iVar1 == *(int *)(local_30 + 0xc)) {
    bVar2 = false;
  }
  else {
    pDVar4 = local_30 + (long)iVar1 * 8 + 0x10;
    lVar3 = (long)*(int *)(local_30 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      bVar2 = true;
      if (*(int *)pDVar4 == 5) goto LAB_10027ceb3;
      pDVar4 = pDVar4 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
    bVar2 = false;
  }
LAB_10027ceb3:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_10027ced5;
    }
    QListData::dispose(local_30);
  }
LAB_10027ced5:
  if (!bVar2) {
    CAbstractTask::prependSubTask(iVar5);
  }
  CAbstractTask::prependSubTask(iVar5);
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}


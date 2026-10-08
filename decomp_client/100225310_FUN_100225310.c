
void FUN_100225310(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QString local_30;
  undefined1 local_21;
  
  if ((((*(long *)(param_1 + 0x18) != 0) && (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) &&
      (*(long *)(param_1 + 0x20) != 0)) && (lVar2 = FUN_100319390(), lVar2 != 0)) {
    if (param_2 < 0) {
      uVar3 = 0;
      if ((*(long *)(param_1 + 0x18) != 0) &&
         (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
        uVar3 = *(undefined8 *)(param_1 + 0x20);
      }
      iVar1 = FUN_100319ae0(uVar3);
      if (iVar1 == 0) goto LAB_1002253dd;
    }
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x18) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar3 = FUN_100319390(uVar3);
    FUN_10018d860(&local_30,uVar3);
    MacUtils::noteAsRecentDocument(&local_30);
    if (*(int *)local_30.field0_0x0 != -1) {
      if (*(int *)local_30.field0_0x0 != 0) {
        LOCK();
        *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
        local_21 = *(int *)local_30.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002253dd;
      }
      QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
    }
  }
LAB_1002253dd:
  if ((((param_2 < 0) && (*(long *)(param_1 + 0x18) != 0)) &&
      (*(int *)(*(long *)(param_1 + 0x18) + 4) != 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_10031c890();
  }
  CAbstractTask::finish((int)param_1);
  return;
}


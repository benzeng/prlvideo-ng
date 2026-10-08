
undefined8 FUN_10023f210(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  QArrayData *local_30;
  undefined1 local_22;
  
  uVar2 = FUN_100370280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_30,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar4);
  lVar3 = FUN_1003704b0(uVar2,&local_30,uVar1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10023f2a5;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10023f2a5:
  if (lVar3 != 0) {
    QWidget::show();
  }
  FUN_10023aef0(param_1);
  return 0;
}


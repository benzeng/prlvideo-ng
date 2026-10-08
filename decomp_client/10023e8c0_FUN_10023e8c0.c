
undefined8 FUN_10023e8c0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  QWidget *pQVar3;
  undefined8 uVar4;
  int *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar2 = FUN_100370280();
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_100323d90(&local_28,uVar4);
  uVar4 = 0;
  if ((*(long *)(param_1 + 0x18) != 0) && (uVar4 = 0, *(int *)(*(long *)(param_1 + 0x18) + 4) != 0))
  {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
  }
  uVar1 = FUN_100323e20(uVar4);
  pQVar3 = (QWidget *)FUN_1003704b0(uVar2,&local_28,uVar1);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10023e953;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10023e953:
  if (pQVar3 != (QWidget *)0x0) {
    QWidget::hide();
  }
  MacUtils::detachAllSheets((QWidget *)&local_30,pQVar3);
  if (*local_30 != -1) {
    if (*local_30 != 0) {
      LOCK();
      *local_30 = *local_30 + -1;
      UNLOCK();
      if (*local_30 != 0) {
        return 0;
      }
      local_19 = 0;
    }
    FUN_10006b5d0(&local_30,local_30);
  }
  return 0;
}


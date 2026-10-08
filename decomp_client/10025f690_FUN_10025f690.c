
void FUN_10025f690(long param_1)

{
  undefined8 uVar1;
  QPoint *pQVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_21;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x28) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x38) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x38) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar1 = FUN_100370280();
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x28) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x28) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
  }
  FUN_100188480(&local_30,uVar3);
  pQVar2 = (QPoint *)FUN_1003704b0(uVar1,&local_30,DAT_100e152b8);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10025f756;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10025f756:
  if (pQVar2 != (QPoint *)0x0) {
    QWidget::pos();
    QWidget::move(pQVar2);
  }
  return;
}


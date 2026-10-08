
undefined8 FUN_100325fe0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_28;
  undefined1 local_1a;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    return 0;
  }
  uVar1 = FUN_100370280();
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    local_28 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  else {
    FUN_1003193e0(&local_28);
  }
  lVar2 = FUN_1003704b0(uVar1,&local_28,*(undefined4 *)(param_1 + 0x30));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100326070;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_100326070:
  if ((lVar2 == 0) || (*(int *)(param_1 + 0x34) == 2)) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(param_1 + 0x20) + 4) == 0) {
      return 0;
    }
    if (*(long *)(param_1 + 0x28) == 0) {
      return 0;
    }
    QWidget::show();
    lVar2 = 0;
    if ((*(long *)(param_1 + 0x20) != 0) &&
       (lVar2 = 0, *(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) {
      lVar2 = *(long *)(param_1 + 0x28);
    }
  }
  else if (*(int *)(param_1 + 0x34) != 3) {
    QWidget::show();
  }
  FUN_100118790(lVar2,0);
  return 1;
}


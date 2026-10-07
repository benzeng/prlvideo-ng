
undefined8 FUN_1004a7ac0(long param_1,int *param_2,int param_3)

{
  long *plVar1;
  char cVar2;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  local_30 = (QArrayData *)PTR_shared_null_100ba20d0;
  QString::fromRawData((QChar *)&local_38,param_3);
  if (*param_2 == 0x17) {
    FUN_1004a79d0(*(undefined8 *)(param_1 + 0x10),&local_38,&local_30);
  }
  else if (((*param_2 - 0x15U < 2) &&
           (plVar1 = *(long **)(*(long *)(param_1 + 0x10) + 0x90), plVar1 != (long *)0x0)) &&
          (cVar2 = (**(code **)(*plVar1 + 0x60))(plVar1,&local_38,&local_30), cVar2 == '\0')) {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_38,&local_30);
  }
  **(int **)(param_1 + 0x20) =
       **(int **)(param_1 + 0x20) + (*(int *)(local_30 + 4) * 2 - param_2[1]);
  if (*(int *)(local_30 + 4) == 0) {
    **(int **)(param_1 + 0x20) = **(int **)(param_1 + 0x20) + -8;
  }
  else {
    FUN_10000c490(*(undefined8 *)(param_1 + 0x18),&local_30);
  }
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1004a7bea;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004a7bea:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 1;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 1;
}


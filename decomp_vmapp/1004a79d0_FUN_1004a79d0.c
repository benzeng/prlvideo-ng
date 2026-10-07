
undefined8 FUN_1004a79d0(long param_1,undefined8 param_2,QString *param_3)

{
  QString local_28;
  undefined1 local_19;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return 0;
  }
  FUN_1004d2110(&local_28,*(long *)(param_1 + 0x18) + 0x48,param_2);
  QString::operator=(param_3,&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) goto LAB_1004a7a38;
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1004a7a38:
  if (*(int *)(param_3->field0_0x0 + 4) == 0) {
    return 0;
  }
  return 1;
}



undefined1 FUN_100d22bb0(undefined8 param_1,QString *param_2)

{
  undefined *puVar1;
  long *plVar2;
  QString local_38;
  undefined *local_30;
  undefined1 local_21;
  
  puVar1 = PTR_shared_null_1021e1288;
  local_30 = PTR_shared_null_1021e1288;
  plVar2 = (long *)FUN_100d21b40(param_1,&local_30);
  if (*(int *)puVar1 != -1) {
    if (*(int *)puVar1 != 0) {
      LOCK();
      *(int *)puVar1 = *(int *)puVar1 + -1;
      local_21 = *(int *)puVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d22c06;
    }
    QArrayData::deallocate((QArrayData *)PTR_shared_null_1021e1288,2,8);
  }
LAB_100d22c06:
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  (**(code **)(*plVar2 + 0x10))(&local_38,plVar2);
  QString::operator=(param_2,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100d22c57;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100d22c57:
  (**(code **)(*plVar2 + 8))(plVar2);
  return 1;
}


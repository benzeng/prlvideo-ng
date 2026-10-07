
undefined8 FUN_1000ad200(long param_1,undefined8 param_2,undefined4 param_3)

{
  void *pvVar1;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (*(char *)(param_1 + 0x1160) != '\0') {
    FUN_1008e3970("","vm",0,"Monitor data processing is already active");
    return 0;
  }
  *(undefined1 *)(param_1 + 0x1160) = 1;
  FUN_1000aa320();
  FUN_100258820();
  pvVar1 = operator_new(0x48,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (pvVar1 == (void *)0x0) {
    return 0x80000009;
  }
  local_38 = (QArrayData *)QString::fromAscii_helper("",0);
  FUN_1001030b0(pvVar1,param_2,&local_38,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_1000ad2c6;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1000ad2c6:
  FUN_100103370(pvVar1);
  return 0;
}


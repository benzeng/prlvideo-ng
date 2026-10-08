
void FUN_1001d4e30(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  QArrayData *local_38;
  undefined1 local_2b;
  
  uVar1 = FUN_100d7e9e0();
  FUN_100d8e790(&local_38,uVar1);
  FUN_100ae89c0(param_1,&local_38,param_2,param_3);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2b = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2b) goto LAB_1001d4e9c;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001d4e9c:
  *param_1 = &PTR_FUN_1021ff5d0;
  pvVar2 = operator_new(0x40);
  FUN_1001d60b0(pvVar2,param_1);
  param_1[5] = pvVar2;
  FUN_1001d61e0(pvVar2);
  return;
}


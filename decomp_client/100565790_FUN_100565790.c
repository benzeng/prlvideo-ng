
void FUN_100565790(long param_1)

{
  code *pcVar1;
  void *pvVar2;
  _func_void_Node_ptr *local_30;
  undefined1 local_22;
  
  if (DAT_102310998 == (void *)0x0) {
    pvVar2 = operator_new(0x18);
    FUN_1006faf60(pvVar2);
    DAT_102274400 = 1;
    DAT_102310998 = pvVar2;
  }
  FUN_1006fb0c0(&local_30,DAT_102310998,1);
  FUN_100564060(param_1,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_22 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10056581c;
    }
    QHashData::free_helper(local_30);
  }
LAB_10056581c:
  FUN_10083d6e0(*(undefined8 *)(param_1 + 0x10));
  return;
}


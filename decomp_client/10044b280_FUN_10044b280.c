
void FUN_10044b280(long *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr *local_30;
  undefined1 local_22;
  
  uVar2 = FUN_1003b0b00(*(undefined8 *)(param_1[6] + 0x28));
  (**(code **)(*param_1 + 0x1a8))(&local_30,param_1);
  FUN_1003adb70(uVar2,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) {
        return;
      }
      local_22 = 0;
    }
    QHashData::free_helper(local_30);
  }
  return;
}


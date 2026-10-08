
void FUN_10071f9f0(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  _func_void_Node_ptr *local_30;
  undefined1 local_22;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = FUN_1006915d0();
  FUN_100691820(&local_30,uVar2,param_1);
  FUN_100721c90(param_2,&local_30);
  if (*(int *)(local_30 + 0x10) != -1) {
    if (*(int *)(local_30 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_30 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_22 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10071fa59;
    }
    QHashData::free_helper(local_30);
  }
LAB_10071fa59:
  FUN_10071f9f0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x10),param_2);
  return;
}



undefined8 FUN_1005c30c0(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  _func_void_Node_ptr *local_20;
  undefined1 local_11;
  
  FUN_1005bac90(&local_20,*(undefined8 *)(param_1 + 0x18));
  iVar2 = *(int *)(local_20 + 0x14);
  if (*(int *)(local_20 + 0x10) != -1) {
    if (*(int *)(local_20 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_20 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      UNLOCK();
      if (*(int *)pcVar1 != 0) goto LAB_1005c3108;
      local_11 = 0;
    }
    QHashData::free_helper(local_20);
  }
LAB_1005c3108:
  uVar3 = 0xc;
  if (iVar2 < 2) {
    uVar3 = 0xb;
  }
  return uVar3;
}


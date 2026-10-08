
undefined8 * FUN_100192270(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_30;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28 [8];
  
  if ((DAT_1023120a8 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_1023120a8), iVar3 != 0)) {
    DAT_1023120a0 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_10019a0c0,&DAT_1023120a0,0x100000000);
    ___cxa_guard_release(&DAT_1023120a8);
  }
  if (*(int *)(DAT_1023120a0 + 0x14) == 0) {
    local_30 = 0x30da8;
    FUN_100131ed0(&DAT_1023120a0,&local_30,local_28);
  }
  p_Var2 = DAT_1023120a0;
  *param_1 = DAT_1023120a0;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var2 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_2a = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar4 = QHashData::detach_helper(p_Var2,FUN_100132040,0x131900,0x10);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_29 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10019236d;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_10019236d:
  *param_1 = uVar4;
  return param_1;
}


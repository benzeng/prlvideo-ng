
undefined8 * FUN_100034d30(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  
  if ((DAT_102311d90 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102311d90), iVar3 != 0)) {
    DAT_102311d88 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_100035f50,&DAT_102311d88,0x100000000);
    ___cxa_guard_release(&DAT_102311d90);
  }
  if (*(int *)(DAT_102311d88 + 0x14) == 0) {
    local_2c = 0x30000004;
    FUN_1000368b0(&DAT_102311d88,&local_2c,local_28);
    local_30 = 0x30000005;
    FUN_1000368b0(&DAT_102311d88,&local_30,local_28);
    local_34 = 0x3000000b;
    FUN_1000368b0(&DAT_102311d88,&local_34,local_28);
    local_38 = 0x3000000c;
    FUN_1000368b0(&DAT_102311d88,&local_38,local_28);
    local_3c = 0x3000000d;
    FUN_1000368b0(&DAT_102311d88,&local_3c,local_28);
  }
  p_Var2 = DAT_102311d88;
  *param_1 = DAT_102311d88;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var2 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_28[0] = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar4 = QHashData::detach_helper(p_Var2,FUN_100036a20,0x36730,0x10);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_28[0] = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_28[0]) goto LAB_100034e90;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_100034e90:
  *param_1 = uVar4;
  return param_1;
}


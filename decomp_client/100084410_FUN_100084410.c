
undefined8 * FUN_100084410(undefined8 *param_1)

{
  code *pcVar1;
  _func_void_Node_ptr_void_ptr *p_Var2;
  int iVar3;
  undefined8 uVar4;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_21;
  
  if ((DAT_102311e40 == '\0') && (iVar3 = ___cxa_guard_acquire(&DAT_102311e40), iVar3 != 0)) {
    DAT_102311e38 = (_func_void_Node_ptr_void_ptr *)PTR_shared_null_1021e15d0;
    ___cxa_atexit(FUN_1000867f0,&DAT_102311e38,0x100000000);
    ___cxa_guard_release(&DAT_102311e40);
  }
  if (*(int *)(DAT_102311e38 + 0x14) == 0) {
    local_28 = 5;
    local_2c = 0x3d;
    FUN_100086b30(&DAT_102311e38,&local_28,&local_2c);
    local_30 = 4;
    local_34 = 0x13;
    FUN_100086b30(&DAT_102311e38,&local_30,&local_34);
    local_38 = 0;
    local_3c = 0x3e;
    FUN_100086b30(&DAT_102311e38,&local_38,&local_3c);
    local_40 = 1;
    local_44 = 0x3c;
    FUN_100086b30(&DAT_102311e38,&local_40,&local_44);
    local_48 = 8;
    local_4c = 0x81;
    FUN_100086b30(&DAT_102311e38,&local_48,&local_4c);
    local_50 = 9;
    local_54 = 0x82;
    FUN_100086b30(&DAT_102311e38,&local_50,&local_54);
    local_58 = 10;
    local_5c = 0x83;
    FUN_100086b30(&DAT_102311e38,&local_58,&local_5c);
    local_60 = 0xb;
    local_64 = 0x84;
    FUN_100086b30(&DAT_102311e38,&local_60,&local_64);
  }
  p_Var2 = DAT_102311e38;
  *param_1 = DAT_102311e38;
  if (1 < *(int *)(p_Var2 + 0x10) + 1U) {
    LOCK();
    pcVar1 = p_Var2 + 0x10;
    *(int *)pcVar1 = *(int *)pcVar1 + 1;
    local_21 = *(int *)pcVar1 != 0;
    UNLOCK();
  }
  if (((byte)p_Var2[0x28] & 1) != 0) {
    return param_1;
  }
  if (*(uint *)(p_Var2 + 0x10) < 2) {
    return param_1;
  }
  uVar4 = QHashData::detach_helper(p_Var2,FUN_100086cd0,0x86cf0,0x18);
  if (*(int *)(p_Var2 + 0x10) != -1) {
    if (*(int *)(p_Var2 + 0x10) != 0) {
      LOCK();
      pcVar1 = p_Var2 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_21 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1000845ed;
    }
    QHashData::free_helper((_func_void_Node_ptr *)p_Var2);
  }
LAB_1000845ed:
  *param_1 = uVar4;
  return param_1;
}


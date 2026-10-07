
void FUN_1006198a0(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined1 local_88 [8];
  undefined1 local_80 [8];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  _func_void_Node_ptr *local_38;
  code *local_30;
  long local_28;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar2;
  FUN_1007d6870(&local_48);
  local_38 = (_func_void_Node_ptr *)PTR_shared_null_100ba2180;
  FUN_1007d6cd0(&local_58,&DAT_100b47c9c);
  local_40 = local_50;
  local_48 = local_58;
  local_30 = FUN_10061a930;
  FUN_1007d6cd0(local_68,&DAT_100b47c7c);
  FUN_100619160(&local_38,local_68,local_88);
  FUN_1007d6cd0(local_78,&DAT_100b47c8c);
  FUN_100619160(&local_38,local_78,local_80);
  FUN_100619cf0(param_1,&local_48);
  if (*(int *)(local_38 + 0x10) != -1) {
    if (*(int *)(local_38 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_38 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_80[0] = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_80[0]) goto LAB_10061997c;
    }
    QHashData::free_helper(local_38);
  }
LAB_10061997c:
  if (lVar2 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


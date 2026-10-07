
void FUN_1006196a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1007ea840(param_2,local_40);
  (**(code **)(*(long *)(param_1 + 0x10) + 8))(*(long *)(param_1 + 0x10),local_40,param_3);
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


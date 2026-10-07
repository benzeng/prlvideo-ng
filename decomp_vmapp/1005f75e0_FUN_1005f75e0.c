
undefined8 FUN_1005f75e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  uVar2 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  FUN_1005ab5b0(uVar2);
  FUN_1005b1ea0(uVar2);
  FUN_1005b1e80(uVar2);
  FUN_1005b2160(uVar2,param_1 + 0x62);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_38);
  FUN_1005b2bb0(uVar2,local_38);
  if (lVar1 == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


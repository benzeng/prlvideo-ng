
undefined8 FUN_1005f6a40(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  uVar3 = (**(code **)(**(long **)(param_1 + 0x58) + 0x350))();
  FUN_1005ab5b0(uVar3);
  FUN_1005b1ea0(uVar3);
  FUN_1005b1e80(uVar3);
  plVar2 = *(long **)(param_1 + 0x58);
  (**(code **)(*plVar2 + 0x2b0))(local_48,plVar2);
  FUN_1005b1b60(plVar2,local_48);
  (**(code **)(**(long **)(param_1 + 0x58) + 0x2b0))(local_58);
  FUN_1005b2bb0(uVar3,local_58);
  if (lVar1 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


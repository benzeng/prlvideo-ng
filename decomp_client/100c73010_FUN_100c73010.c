
undefined4 FUN_100c73010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_ac;
  undefined1 local_a8 [32];
  long *local_88;
  undefined1 local_78 [64];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  lVar2 = *(long *)(**(long **)(param_1 + 0x20) + 0x88);
  local_38 = lVar1;
  FUN_100c65850(local_a8);
  iVar3 = FUN_100c65d60(local_a8,param_1);
  uVar4 = 0xffffffff;
  if (iVar3 != 0) {
    if (lVar2 == 0) {
      iVar3 = FUN_100c65bc0(local_a8,local_78,&local_ac);
      FUN_100c65c50(local_a8);
      uVar4 = 0;
      if (iVar3 != 0) {
        uVar4 = FUN_100c71ff0(*(undefined8 *)(param_1 + 0x20),param_2,param_3,local_78,local_ac);
      }
    }
    else {
      uVar4 = (**(code **)(*local_88 + 0x88))(local_88,param_2,param_3,local_a8);
      FUN_100c65c50(local_a8);
    }
  }
  if (lVar1 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


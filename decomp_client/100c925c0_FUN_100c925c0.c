
undefined4 FUN_100c925c0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_78 [48];
  undefined4 local_48 [6];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  FUN_100c7c6f0(param_1,0);
  FUN_100c65850(local_78);
  FUN_100c6fcb0(local_78,8);
  uVar3 = FUN_100c6c960();
  iVar2 = FUN_100c65920(local_78,uVar3,0);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_100c65b10(local_78,(*(undefined8 **)(param_1 + 0x10))[1],
                          **(undefined8 **)(param_1 + 0x10));
    uVar4 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_100c65bc0(local_78,local_48,0);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = local_48[0];
      }
    }
  }
  FUN_100c65c50(local_78);
  if (lVar1 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


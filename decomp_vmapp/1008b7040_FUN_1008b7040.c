
undefined4 FUN_1008b7040(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_78 [48];
  undefined4 local_48 [6];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  FUN_1008a1170(param_1,0);
  FUN_10088a650(local_78);
  FUN_100894730(local_78,8);
  uVar3 = FUN_100891710();
  iVar2 = FUN_10088a720(local_78,uVar3,0);
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar2 = FUN_10088a910(local_78,(*(undefined8 **)(param_1 + 0x10))[1],
                          **(undefined8 **)(param_1 + 0x10));
    uVar4 = 0;
    if (iVar2 != 0) {
      iVar2 = FUN_10088a9c0(local_78,local_48,0);
      uVar4 = 0;
      if (iVar2 != 0) {
        uVar4 = local_48[0];
      }
    }
  }
  FUN_10088aa50(local_78);
  if (lVar1 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


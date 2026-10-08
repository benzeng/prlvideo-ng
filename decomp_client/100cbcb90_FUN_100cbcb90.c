
undefined8 FUN_100cbcb90(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  iVar1 = FUN_100c26610();
  iVar2 = FUN_100c27100(param_2,param_1);
  uVar4 = 0;
  if (iVar2 < 0) {
    iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    lVar3 = FUN_100bf3540(iVar1,"srp_lib.c",0x5f);
    uVar4 = 0;
    if (lVar3 != 0) {
      FUN_100c26ff0(param_1,lVar3);
      FUN_100c65850(local_88);
      uVar4 = FUN_100c6ca00();
      FUN_100c65920(local_88,uVar4,0);
      FUN_100c65b10(local_88,lVar3,(long)iVar1);
      ___bzero(lVar3,(long)iVar1);
      iVar2 = FUN_100c26ff0(param_2,lVar3);
      FUN_100c65b10(local_88,lVar3 + iVar2,(long)(iVar1 - iVar2));
      FUN_100c65b10(local_88,lVar3,(long)iVar2);
      FUN_100bf3910(lVar3);
      FUN_100c65bc0(local_88,local_58,0);
      FUN_100c65c50(local_88);
      uVar4 = FUN_100c26e20(local_58,0x14,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1021e1840 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


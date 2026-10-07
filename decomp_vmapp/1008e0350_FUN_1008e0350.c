
undefined8 FUN_1008e0350(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  iVar1 = FUN_10084b410();
  iVar2 = FUN_10084bf00(param_2,param_1);
  uVar4 = 0;
  if (iVar2 < 0) {
    iVar1 = (int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3;
    lVar3 = FUN_10081ddd0(iVar1,"srp_lib.c",0x5f);
    uVar4 = 0;
    if (lVar3 != 0) {
      FUN_10084bdf0(param_1,lVar3);
      FUN_10088a650(local_88);
      uVar4 = FUN_100891760();
      FUN_10088a720(local_88,uVar4,0);
      FUN_10088a910(local_88,lVar3,(long)iVar1);
      ___bzero(lVar3,(long)iVar1);
      iVar2 = FUN_10084bdf0(param_2,lVar3);
      FUN_10088a910(local_88,lVar3 + iVar2,(long)(iVar1 - iVar2));
      FUN_10088a910(local_88,lVar3,(long)iVar2);
      FUN_10081e1a0(lVar3);
      FUN_10088a9c0(local_88,local_58,0);
      FUN_10088aa50(local_88);
      uVar4 = FUN_10084bc20(local_58,0x14,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



undefined8 FUN_1008e04a0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  uVar3 = 0;
  local_38 = lVar5;
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (param_3 != (char *)0x0)) {
    iVar1 = FUN_10084b410(param_1);
    lVar2 = FUN_10081ddd0((int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3,"srp_lib.c",
                          0xdc);
    uVar3 = 0;
    if (lVar2 != 0) {
      FUN_10088a650(local_88);
      uVar3 = FUN_100891760();
      FUN_10088a720(local_88,uVar3,0);
      sVar4 = _strlen(param_2);
      FUN_10088a910(local_88,param_2,sVar4);
      FUN_10088a910(local_88,":",1);
      sVar4 = _strlen(param_3);
      FUN_10088a910(local_88,param_3,sVar4);
      FUN_10088a9c0(local_88,local_58,0);
      uVar3 = FUN_100891760();
      FUN_10088a720(local_88,uVar3,0);
      FUN_10084bdf0(param_1,lVar2);
      iVar1 = FUN_10084b410(param_1);
      FUN_10088a910(local_88,lVar2,
                    (long)((int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3));
      FUN_10081e1a0(lVar2);
      FUN_10088a910(local_88,local_58,0x14);
      FUN_10088a9c0(local_88,local_58,0);
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
      FUN_10088aa50(local_88);
      uVar3 = FUN_10084bc20(local_58,0x14,0);
    }
  }
  if (lVar5 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



undefined8 FUN_100cbcce0(long param_1,char *param_2,char *param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  size_t sVar4;
  long lVar5;
  undefined1 local_88 [48];
  undefined1 local_58 [32];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = 0;
  local_38 = lVar5;
  if (((param_1 != 0) && (param_2 != (char *)0x0)) && (param_3 != (char *)0x0)) {
    iVar1 = FUN_100c26610(param_1);
    lVar2 = FUN_100bf3540((int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3,"srp_lib.c",
                          0xdc);
    uVar3 = 0;
    if (lVar2 != 0) {
      FUN_100c65850(local_88);
      uVar3 = FUN_100c6ca00();
      FUN_100c65920(local_88,uVar3,0);
      sVar4 = _strlen(param_2);
      FUN_100c65b10(local_88,param_2,sVar4);
      FUN_100c65b10(local_88,":",1);
      sVar4 = _strlen(param_3);
      FUN_100c65b10(local_88,param_3,sVar4);
      FUN_100c65bc0(local_88,local_58,0);
      uVar3 = FUN_100c6ca00();
      FUN_100c65920(local_88,uVar3,0);
      FUN_100c26ff0(param_1,lVar2);
      iVar1 = FUN_100c26610(param_1);
      FUN_100c65b10(local_88,lVar2,
                    (long)((int)(iVar1 + 7 + ((uint)(iVar1 + 7 >> 0x1f) >> 0x1d)) >> 3));
      FUN_100bf3910(lVar2);
      FUN_100c65b10(local_88,local_58,0x14);
      FUN_100c65bc0(local_88,local_58,0);
      lVar5 = *(long *)PTR____stack_chk_guard_1021e1840;
      FUN_100c65c50(local_88);
      uVar3 = FUN_100c26e20(local_58,0x14,0);
    }
  }
  if (lVar5 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


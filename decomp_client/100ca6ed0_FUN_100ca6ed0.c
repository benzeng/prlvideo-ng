
undefined8 FUN_100ca6ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 local_e0;
  undefined1 local_d8 [80];
  undefined1 local_88 [80];
  long local_38;
  
  lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_e0 = param_3;
  local_38 = lVar4;
  iVar1 = FUN_100c60800(param_2);
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      puVar3 = (undefined8 *)FUN_100c60820(param_2,iVar1);
      FUN_100c74920(local_88,0x50,*puVar3);
      FUN_100c74920(local_d8,0x50,puVar3[1]);
      FUN_100c9ef60(local_88,local_d8,&local_e0);
      iVar1 = iVar1 + 1;
      iVar2 = FUN_100c60800(param_2);
    } while (iVar1 < iVar2);
    lVar4 = *(long *)PTR____stack_chk_guard_1021e1840;
    param_3 = local_e0;
  }
  if (lVar4 == local_38) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


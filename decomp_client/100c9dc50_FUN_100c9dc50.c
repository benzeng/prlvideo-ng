
undefined8 FUN_100c9dc50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 local_90;
  undefined1 local_88 [80];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_90 = param_3;
  local_38 = lVar1;
  iVar2 = FUN_100c60800(param_2);
  if (0 < iVar2) {
    iVar2 = 0;
    do {
      uVar4 = FUN_100c60820(param_2,iVar2);
      FUN_100c74920(local_88,0x50,uVar4);
      FUN_100c9ef60(0,local_88,&local_90);
      iVar2 = iVar2 + 1;
      iVar3 = FUN_100c60800(param_2);
      param_3 = local_90;
    } while (iVar2 < iVar3);
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_3;
}


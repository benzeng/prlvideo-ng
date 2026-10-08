
long FUN_100ca01f0(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_28 = lVar1;
  iVar2 = FUN_100ca0270(local_38,param_1);
  lVar4 = 0;
  if (iVar2 != 0) {
    lVar3 = FUN_100c83900();
    lVar4 = 0;
    if ((lVar3 != 0) && (iVar2 = FUN_100c76bc0(lVar3,local_38,iVar2), lVar4 = lVar3, iVar2 == 0)) {
      FUN_100c83920(lVar3);
      lVar4 = 0;
    }
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar4;
}


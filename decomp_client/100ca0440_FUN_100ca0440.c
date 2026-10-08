
long FUN_100ca0440(char *param_1)

{
  long lVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  undefined1 local_58 [40];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_30 = lVar1;
  pcVar4 = _strchr(param_1,0x2f);
  lVar6 = 0;
  if (pcVar4 != (char *)0x0) {
    lVar5 = FUN_100c58250(param_1);
    lVar6 = 0;
    if (lVar5 != 0) {
      pcVar4[lVar5 - (long)param_1] = '\0';
      iVar2 = FUN_100ca0270(local_58,lVar5);
      if (iVar2 == 0) {
        FUN_100bf3910(lVar5);
      }
      else {
        iVar3 = FUN_100ca0270(local_58 + iVar2,pcVar4 + lVar5 + (1 - (long)param_1));
        FUN_100bf3910(lVar5);
        lVar6 = 0;
        if ((iVar3 == 0) || (lVar6 = 0, iVar2 != iVar3)) goto LAB_100ca0502;
        lVar5 = FUN_100c83900();
        lVar6 = 0;
        if ((lVar5 == 0) ||
           (iVar2 = FUN_100c76bc0(lVar5,local_58,iVar2 * 2), lVar6 = lVar5, iVar2 != 0))
        goto LAB_100ca0502;
        FUN_100c83920(lVar5);
      }
      lVar6 = 0;
    }
  }
LAB_100ca0502:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar6;
}


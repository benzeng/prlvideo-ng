
undefined8 FUN_1007010e0(undefined8 param_1,undefined8 param_2,char *param_3)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  char *local_2840;
  char local_2838 [10248];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_2840 = local_2838;
  local_30 = lVar1;
  ___strlcpy_chk(local_2840,param_2,0x2800,0x2800);
  pcVar3 = _strsep(&local_2840,param_3);
  if (pcVar3 == (char *)0x0) {
    uVar4 = 0;
  }
  else {
    do {
      if (*pcVar3 != '\0') {
        pcVar3 = _strdup(pcVar3);
        iVar2 = FUN_100700f00(param_1,pcVar3);
        uVar4 = 0xffffffff;
        if (iVar2 != 0) goto LAB_100701179;
      }
      pcVar3 = _strsep(&local_2840,param_3);
    } while (pcVar3 != (char *)0x0);
    uVar4 = 0;
  }
LAB_100701179:
  if (lVar1 == local_30) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


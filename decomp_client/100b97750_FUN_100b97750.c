
void FUN_100b97750(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  char *pcVar6;
  char *local_60;
  char local_58 [40];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_60 = (char *)0x0;
  local_30 = lVar1;
  lVar3 = FUN_100b9c260(param_1,"class id");
  if (lVar3 != 0) {
    uVar4 = _strtoul(*(char **)(lVar3 + 0x18),&local_60,10);
    if ((int)uVar4 == -1) {
      piVar5 = ___error();
      if (*piVar5 == 0x22) goto LAB_100b97807;
    }
    iVar2 = FUN_100b94ab0(uVar4 & 0xffffffff);
    if (-1 < iVar2) {
      lVar3 = FUN_100b9c260(param_1,"VE in class");
      if (lVar3 != 0) {
        ___snprintf_chk(local_58,0x20,0,0x20,"%d",iVar2);
        pcVar6 = _strdup(local_58);
        *(char **)(lVar3 + 0x20) = pcVar6;
      }
    }
  }
LAB_100b97807:
  if (lVar1 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



char * FUN_1007c5510(uint param_1,char *param_2,ulong param_3)

{
  int iVar1;
  int *piVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  ulong uVar7;
  char local_58 [32];
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  pcVar4 = (char *)0x0;
  local_38 = lVar5;
  if (9 < param_3) {
    *param_2 = '\0';
    _strerror_r(param_1,param_2,param_3);
    piVar2 = ___error();
    pcVar4 = param_2;
    if ((param_2 != (char *)0x0) && (*piVar2 != 0x16)) {
      sVar3 = _strlen(param_2);
      if (param_3 <= sVar3) {
        sVar3 = param_3;
      }
      param_3 = param_3 - 1;
      iVar1 = _snprintf(local_58,0x18," [errno: %d]",(ulong)param_1);
      uVar7 = (ulong)iVar1;
      if (param_3 < uVar7) {
        param_2[param_3] = '\0';
      }
      else {
        sVar6 = param_3 - uVar7;
        if (sVar3 + uVar7 <= param_3) {
          sVar6 = sVar3;
        }
        _memcpy(param_2 + sVar6,local_58,uVar7);
        param_2[sVar6 + uVar7] = '\0';
      }
      lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
  }
  if (lVar5 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pcVar4;
}


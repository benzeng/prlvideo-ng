
void FUN_1000ef420(uint param_1,char *param_2,int param_3,code *param_4)

{
  size_t sVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  char local_a8 [112];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_1 != 0) {
    param_2[(long)param_3 + -1] = '\0';
    lVar4 = (long)param_3 + -1;
    iVar3 = 0;
    if (*param_2 != '\0') {
      sVar1 = _strlen(param_2);
      _strncat(param_2," | ",lVar4 - sVar1);
    }
    do {
      if ((param_1 & 1) != 0) {
        uVar2 = (*param_4)(iVar3);
        _snprintf(local_a8,99,"%s",uVar2);
        sVar1 = _strlen(param_2);
        _strncat(param_2,local_a8,lVar4 - sVar1);
        if (param_1 < 2) break;
        sVar1 = _strlen(param_2);
        _strncat(param_2,", ",lVar4 - sVar1);
      }
      iVar3 = iVar3 + 1;
      param_1 = param_1 >> 1;
    } while (param_1 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


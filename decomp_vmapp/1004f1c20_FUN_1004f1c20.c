
int FUN_1004f1c20(char *param_1,char *param_2,char *param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  size_t sVar3;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  char local_448 [8];
  char acStack_440 [1032];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  sVar3 = _strlen(param_1);
  _memcpy(local_448,param_1,(long)(int)sVar3);
  builtin_strncpy(local_448 + (int)sVar3,"/$I_",5);
  lVar7 = (long)((sVar3 << 0x20) + 0x100000000) >> 0x20;
  if (param_4 != '\0') {
    local_448[lVar7 + 2] = param_4;
  }
  pcVar5 = "";
  if (param_2 != (char *)0x0) {
    pcVar5 = param_2;
  }
  _strcpy(local_448 + lVar7 + 8,pcVar5);
  iVar6 = 1;
  while( true ) {
    FUN_1004f1b20(local_448 + lVar7 + 3);
    iVar2 = _open(local_448,0xb29,0x1a4);
    if (iVar2 != -1) break;
    piVar4 = ___error();
    iVar2 = -1;
    if ((*piVar4 != 0x11) || (bVar1 = 0x3ff < iVar6, iVar6 = iVar6 + 1, bVar1)) goto LAB_1004f1d38;
  }
  _strcpy(param_3,local_448 + lVar7);
LAB_1004f1d38:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}



undefined8 FUN_1008d9fd0(undefined8 param_1,undefined8 param_2)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = FUN_1008d9ba0(param_2);
  pFVar1 = DAT_1011c2a50;
  if (iVar2 == 1) {
    pcVar5 = (char *)FUN_1008d9bc0(param_2);
    _fputs(pcVar5,DAT_1011c2a50);
    _fflush(DAT_1011c2a50);
    uVar3 = FUN_1008d9bb0(param_2);
    uVar4 = 1;
LAB_1008da134:
    uVar4 = FUN_1008da1c0(param_1,param_2,uVar3 & 1,uVar4);
    return uVar4;
  }
  if (iVar2 == 2) {
    uVar4 = FUN_1008d9bc0(param_2);
    _fprintf(pFVar1,"Verifying - %s",uVar4);
    _fflush(DAT_1011c2a50);
    uVar3 = FUN_1008d9bb0(param_2);
    uVar4 = FUN_1008da1c0(param_1,param_2,uVar3 & 1,1);
    if (0 < (int)uVar4) {
      pcVar5 = (char *)FUN_1008d96a0(param_2);
      pcVar6 = (char *)FUN_1008d9c00(param_2);
      iVar2 = _strcmp(pcVar5,pcVar6);
      uVar4 = 1;
      if (iVar2 != 0) {
        _fwrite("Verify failure\n",0xf,1,DAT_1011c2a50);
        _fflush(DAT_1011c2a50);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 1;
    if (iVar2 == 3) {
      pcVar5 = (char *)FUN_1008d9bc0(param_2);
      _fputs(pcVar5,DAT_1011c2a50);
      pcVar5 = (char *)FUN_1008d9be0(param_2);
      _fputs(pcVar5,DAT_1011c2a50);
      _fflush(DAT_1011c2a50);
      uVar3 = FUN_1008d9bb0(param_2);
      uVar4 = 0;
      goto LAB_1008da134;
    }
  }
  return uVar4;
}


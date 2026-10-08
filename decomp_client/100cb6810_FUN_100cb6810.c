
undefined8 FUN_100cb6810(undefined8 param_1,undefined8 param_2)

{
  FILE *pFVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *pcVar6;
  
  iVar2 = FUN_100cb63e0(param_2);
  pFVar1 = DAT_102318490;
  if (iVar2 == 1) {
    pcVar5 = (char *)FUN_100cb6400(param_2);
    _fputs(pcVar5,DAT_102318490);
    _fflush(DAT_102318490);
    uVar3 = FUN_100cb63f0(param_2);
    uVar4 = 1;
LAB_100cb6974:
    uVar4 = FUN_100cb6a00(param_1,param_2,uVar3 & 1,uVar4);
    return uVar4;
  }
  if (iVar2 == 2) {
    uVar4 = FUN_100cb6400(param_2);
    _fprintf(pFVar1,"Verifying - %s",uVar4);
    _fflush(DAT_102318490);
    uVar3 = FUN_100cb63f0(param_2);
    uVar4 = FUN_100cb6a00(param_1,param_2,uVar3 & 1,1);
    if (0 < (int)uVar4) {
      pcVar5 = (char *)FUN_100cb5ee0(param_2);
      pcVar6 = (char *)FUN_100cb6440(param_2);
      iVar2 = _strcmp(pcVar5,pcVar6);
      uVar4 = 1;
      if (iVar2 != 0) {
        _fwrite("Verify failure\n",0xf,1,DAT_102318490);
        _fflush(DAT_102318490);
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 1;
    if (iVar2 == 3) {
      pcVar5 = (char *)FUN_100cb6400(param_2);
      _fputs(pcVar5,DAT_102318490);
      pcVar5 = (char *)FUN_100cb6420(param_2);
      _fputs(pcVar5,DAT_102318490);
      _fflush(DAT_102318490);
      uVar3 = FUN_100cb63f0(param_2);
      uVar4 = 0;
      goto LAB_100cb6974;
    }
  }
  return uVar4;
}


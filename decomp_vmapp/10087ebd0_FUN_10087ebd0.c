
long FUN_10087ebd0(char *param_1,char *param_2)

{
  FILE *pFVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pFVar1 = _fopen(param_1,param_2);
  if (pFVar1 == (FILE *)0x0) {
    piVar3 = ___error();
    FUN_100887ce0(2,1,*piVar3,"bss_file.c",0xaf);
    FUN_1008890a0(5,"fopen(\'",param_1,"\',\'",param_2,"\')");
    piVar3 = ___error();
    if (*piVar3 == 2) {
      uVar4 = 0x80;
      uVar5 = 0xb2;
    }
    else {
      uVar4 = 2;
      uVar5 = 0xb4;
    }
    FUN_100887ce0(0x20,0x6d,uVar4,"bss_file.c",uVar5);
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_10087d330(&DAT_1011ae4c0);
    if (lVar2 == 0) {
      _fclose(pFVar1);
      lVar2 = 0;
    }
    else {
      FUN_10087d610(lVar2,0);
      FUN_10087db60(lVar2,0x6a,1,pFVar1);
    }
  }
  return lVar2;
}


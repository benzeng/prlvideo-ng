
void FUN_100714600(long *param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  int *piVar6;
  FILE *pFVar7;
  
  if ((param_1 == (long *)0x0) || (pFVar7 = (FILE *)*param_1, pFVar7 == (FILE *)0x0)) {
    return;
  }
  plVar1 = param_1 + 1;
  plVar5 = (long *)param_1[1];
  if ((long *)param_1[1] != plVar1) {
    do {
      plVar2 = (long *)*plVar5;
      FUN_100713fa0(plVar5);
      plVar5 = plVar2;
    } while (plVar2 != plVar1);
    pFVar7 = (FILE *)*param_1;
  }
  param_1[2] = (long)plVar1;
  param_1[1] = (long)plVar1;
  param_1[3] = 0;
  iVar3 = _fileno(pFVar7);
  while( true ) {
    iVar4 = _ftruncate(iVar3,0);
    if (iVar4 != -1) break;
    piVar6 = ___error();
    if (*piVar6 != 4) break;
    piVar6 = ___error();
    *piVar6 = 0;
  }
  iVar3 = _fileno((FILE *)*param_1);
  _fsync(iVar3);
  return;
}


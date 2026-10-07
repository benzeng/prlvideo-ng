
pid_t FUN_10053e030(char **param_1,int param_2)

{
  bool bVar1;
  pid_t pVar2;
  int iVar3;
  pid_t pVar4;
  int *piVar5;
  char *pcVar6;
  int iVar7;
  
  bVar1 = true;
  pVar2 = _vfork();
  if (pVar2 == -1) {
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    FUN_1008e3970("","InvSharingHost",0,"vfork() failed: %s",pcVar6);
    bVar1 = false;
  }
  else if (pVar2 == 0) {
    iVar3 = _getdtablesize();
    if (3 < iVar3) {
      iVar7 = 3;
      do {
        if (param_2 != iVar7) {
          _close(iVar7);
        }
        iVar7 = iVar7 + 1;
      } while (iVar3 != iVar7);
    }
    _execvp(*param_1,param_1);
    piVar5 = ___error();
    pcVar6 = _strerror(*piVar5);
    FUN_1008e3970("","InvSharingHost",0,"execvp() failed: %s",pcVar6);
                    /* WARNING: Subroutine does not return */
    __exit(0);
  }
  pVar4 = 0;
  if (bVar1) {
    pVar4 = pVar2;
  }
  return pVar4;
}


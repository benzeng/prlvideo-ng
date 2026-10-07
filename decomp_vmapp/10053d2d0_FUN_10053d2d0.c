
undefined1 FUN_10053d2d0(pid_t param_1)

{
  int iVar1;
  pid_t pVar2;
  int *piVar3;
  char *pcVar4;
  int local_1c;
  
  iVar1 = _kill(param_1,9);
  if (iVar1 == -1) {
    piVar3 = ___error();
    if (DAT_1011b55f8 < 1) {
      return 0;
    }
    iVar1 = *piVar3;
    pcVar4 = "failed to terminate %u: %d";
  }
  else {
    pVar2 = _waitpid(param_1,&local_1c,0);
    if (pVar2 != -1) {
      return 1;
    }
    piVar3 = ___error();
    if (DAT_1011b55f8 < 1) {
      return 0;
    }
    iVar1 = *piVar3;
    pcVar4 = "failed to wait for %u: %d";
  }
  FUN_1008e3970("","InvSharingHost",1,pcVar4,param_1,iVar1);
  return 0;
}


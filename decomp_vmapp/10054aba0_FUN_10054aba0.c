
void FUN_10054aba0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  iVar1 = _mprotect(param_2,param_3,3);
  if (iVar1 != 0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::retain_region mprotect failed: %s",pcVar3)
    ;
    return;
  }
  return;
}


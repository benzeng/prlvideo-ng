
void FUN_10054ab30(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int *piVar2;
  char *pcVar3;
  
  lVar1 = _mmap(param_2 + param_3,param_4,0,0x1012,0,0);
  if (lVar1 != param_2 + param_3) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::release_region() mmap failed: %s",pcVar3);
    return;
  }
  return;
}


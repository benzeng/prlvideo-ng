
void * FUN_100544e90(uint param_1)

{
  void *pvVar1;
  int *piVar2;
  char *pcVar3;
  
  pvVar1 = _valloc((ulong)param_1);
  if (pvVar1 == (void *)0x0) {
    piVar2 = ___error();
    pcVar3 = _strerror(*piVar2);
    FUN_1008e3970("","TransMem",0,"[MmAlloc] allocation of %d bytes failed with reason: %s",param_1,
                  pcVar3);
  }
  return pvVar1;
}


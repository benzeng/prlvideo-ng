
bool FUN_10054aa70(long param_1)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  char *pcVar4;
  
  lVar2 = _mmap(0,*(undefined8 *)(param_1 + 0x10),3,0x1001,0x20000,0);
  *(long *)(param_1 + 0x20) = lVar2;
  bVar1 = 1 < lVar2 + 1U;
  if (bVar1) {
    *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  else {
    piVar3 = ___error();
    pcVar4 = _strerror(*piVar3);
    FUN_1008e3970("","TransMem",0,
                  "[CGuestMemoryAnonymous::map_large_mem] mmap with large pages failed: %s",pcVar4);
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return bVar1;
}


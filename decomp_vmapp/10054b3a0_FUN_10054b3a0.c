
void FUN_10054b3a0(long param_1,ulong param_2,uint param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  long lVar5;
  
  if (param_2 < *(ulong *)(param_1 + 0x10)) {
    lVar1 = 0;
    if (*(long *)(param_1 + 0x20) != 0) {
      lVar1 = *(long *)(param_1 + 0x20) + param_2;
    }
    if (lVar1 == param_4) {
      if (2 < DAT_1011b55f8) {
        FUN_1008e3970("","TransMem",3,"Release %llX:%llX @%p from main memory; swap %llx",param_2,
                      (param_2 - 1) + (ulong)param_3,param_4,param_2);
      }
      if ((param_3 & 0xfffff000) != 0) {
        piVar2 = (int *)((param_2 >> 10 & 0x3fffffffc) + *(long *)(param_1 + 0x80));
        iVar4 = -(param_3 >> 0xc);
        do {
          if (*piVar2 != 0) {
            return;
          }
          piVar2 = piVar2 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 != 0);
      }
      lVar5 = param_2 + *(long *)(param_1 + 0x20);
      lVar1 = _mmap(lVar5,(ulong)param_3,0,0x1012,0,0);
      if (lVar1 != lVar5) {
        piVar2 = ___error();
        pcVar3 = _strerror(*piVar2);
        FUN_1008e3970("","TransMem",0,"CGuestMemoryAnonymous::release_region() mmap failed: %s",
                      pcVar3);
        return;
      }
    }
  }
  return;
}


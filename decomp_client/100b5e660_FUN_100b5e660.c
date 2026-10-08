
long FUN_100b5e660(long param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  QMutex::lock();
  plVar1 = *(long **)(param_1 + 0x10);
  lVar4 = 0;
  if (*(int *)((long)plVar1 + 0x14) != 0) {
    lVar4 = 0;
    if (*(uint *)(plVar1 + 4) != 0) {
      uVar3 = *(uint *)((long)plVar1 + 0x24) ^ param_2;
      plVar2 = *(long **)(plVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(plVar1 + 4)) * 8);
      lVar4 = 0;
      if (plVar2 != plVar1) {
        lVar4 = 0;
        do {
          if ((*(uint *)(plVar2 + 1) == uVar3) && (*(uint *)((long)plVar2 + 0xc) == param_2)) {
            lVar4 = 0;
            if (plVar2 != plVar1) {
              lVar4 = plVar2[2];
            }
            break;
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != plVar1);
      }
    }
  }
  QMutex::unlock();
  return lVar4;
}


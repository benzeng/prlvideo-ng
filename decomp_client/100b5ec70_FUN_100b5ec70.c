
long FUN_100b5ec70(uint param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  
  plVar1 = DAT_1023118c0;
  plVar2 = DAT_1023118c0;
  if (DAT_1023118c0 == (long *)0x0) {
    plVar1 = operator_new(0x20);
    FUN_100b5e890(plVar1);
    plVar2 = DAT_1023118c0;
    if ((DAT_1023118c0 != plVar1) && (plVar2 = plVar1, DAT_1023118c0 != (long *)0x0)) {
      lVar4 = *DAT_1023118c0;
      DAT_1023118c0 = plVar1;
      (**(code **)(lVar4 + 0x20))();
      plVar1 = DAT_1023118c0;
      plVar2 = DAT_1023118c0;
    }
  }
  DAT_1023118c0 = plVar2;
  QMutex::lock();
  plVar1 = (long *)plVar1[2];
  lVar4 = 0;
  if (*(int *)((long)plVar1 + 0x14) != 0) {
    lVar4 = 0;
    if (*(uint *)(plVar1 + 4) != 0) {
      uVar3 = *(uint *)((long)plVar1 + 0x24) ^ param_1;
      plVar2 = *(long **)(plVar1[1] + ((ulong)uVar3 % (ulong)*(uint *)(plVar1 + 4)) * 8);
      lVar4 = 0;
      if (plVar2 != plVar1) {
        lVar4 = 0;
        do {
          if ((*(uint *)(plVar2 + 1) == uVar3) && (*(uint *)((long)plVar2 + 0xc) == param_1)) {
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


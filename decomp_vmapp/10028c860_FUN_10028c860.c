
undefined ** FUN_10028c860(short param_1)

{
  short *psVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  QMutex::lock();
  ppuVar4 = (undefined **)0x0;
  if (((undefined **)PTR_LOOP_101115e70 != &PTR_LOOP_101115e70) &&
     (ppuVar4 = (undefined **)PTR_LOOP_101115e70, param_1 != -1)) {
    ppuVar3 = (undefined **)PTR_LOOP_101115e70;
    do {
      ppuVar4 = (undefined **)0x0;
      if (ppuVar3 == &PTR_LOOP_101115e70) goto LAB_10028c8cd;
      ppuVar2 = (undefined **)*ppuVar3;
      psVar1 = (short *)((long)ppuVar3 + 0x2c);
      ppuVar3 = ppuVar2;
    } while (*psVar1 != param_1);
    ppuVar4 = (undefined **)0x0;
    if (ppuVar2 != &PTR_LOOP_101115e70) {
      ppuVar4 = ppuVar2;
    }
  }
LAB_10028c8cd:
  QMutex::unlock();
  return ppuVar4;
}


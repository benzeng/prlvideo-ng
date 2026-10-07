
undefined ** FUN_10028c970(short param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  QMutex::lock();
  ppuVar2 = (undefined **)0x0;
  if ((undefined **)PTR_LOOP_101115e70 != &PTR_LOOP_101115e70) {
    ppuVar1 = (undefined **)PTR_LOOP_101115e70;
    do {
      ppuVar2 = ppuVar1;
      if (*(short *)((long)ppuVar1 + 0x2c) == param_1) break;
      ppuVar1 = (undefined **)*ppuVar1;
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar1 != &PTR_LOOP_101115e70);
  }
  QMutex::unlock();
  return ppuVar2;
}


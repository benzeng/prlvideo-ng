
undefined ** FUN_10028c8f0(uint param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar2 = (undefined **)0x0;
  if ((char)(param_1 >> 8) != '\0') {
    QMutex::lock();
    ppuVar2 = (undefined **)0x0;
    if ((undefined **)PTR_LOOP_101115e70 != &PTR_LOOP_101115e70) {
      ppuVar1 = (undefined **)PTR_LOOP_101115e70;
      do {
        ppuVar2 = ppuVar1;
        if (*(uint *)(ppuVar1 + 2) == (param_1 & 0xff)) break;
        ppuVar1 = (undefined **)*ppuVar1;
        ppuVar2 = (undefined **)0x0;
      } while (ppuVar1 != &PTR_LOOP_101115e70);
    }
    QMutex::unlock();
  }
  return ppuVar2;
}


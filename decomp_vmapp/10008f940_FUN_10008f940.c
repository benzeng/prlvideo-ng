
void FUN_10008f940(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  QMutex::lock();
  plVar3 = *(long **)(param_1 + 0xc0);
  while (plVar3 != (long *)(param_1 + 0xc0)) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    *(undefined4 *)(plVar3 + 2) = 0;
    plVar3 = *(long **)(param_1 + 0xc0);
  }
  QMutex::unlock();
  *(undefined8 *)(param_1 + 0x40) = 0;
  return;
}


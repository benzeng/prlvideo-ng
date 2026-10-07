
void FUN_100090690(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  *(undefined1 *)(param_1 + 0x80) = 0;
  QMutex::lock();
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xe0) {
    do {
      plVar3 = *(long **)(param_1 + 0xe8);
      lVar1 = *plVar3;
      plVar2 = (long *)plVar3[1];
      *(long **)(lVar1 + 8) = plVar2;
      *plVar2 = lVar1;
      *plVar3 = 0x112233;
      plVar3[1] = (long)&DAT_00445566;
      lVar1 = *(long *)(param_1 + 0xd0);
      *(long **)(lVar1 + 8) = plVar3;
      *plVar3 = lVar1;
      plVar3[1] = param_1 + 0xd0;
      *(long **)(param_1 + 0xd0) = plVar3;
      *(undefined4 *)(plVar3 + 2) = *(undefined4 *)(param_1 + 0xa4);
    } while (*(long *)(param_1 + 0xe0) != param_1 + 0xe0);
  }
  QMutex::unlock();
  FUN_10008f9b0(param_1);
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


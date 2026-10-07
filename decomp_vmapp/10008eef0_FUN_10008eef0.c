
void FUN_10008eef0(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  QMutex::lock();
  if (*(long *)(param_1 + 0xe0) != param_1 + 0xe0) {
    do {
      plVar1 = *(long **)(param_1 + 0xe8);
      lVar2 = *plVar1;
      plVar3 = (long *)plVar1[1];
      *(long **)(lVar2 + 8) = plVar3;
      *plVar3 = lVar2;
      *plVar1 = 0x112233;
      plVar1[1] = (long)&DAT_00445566;
      lVar2 = *(long *)(param_1 + 0xd0);
      *(long **)(lVar2 + 8) = plVar1;
      *plVar1 = lVar2;
      plVar1[1] = param_1 + 0xd0;
      *(long **)(param_1 + 0xd0) = plVar1;
      *(undefined4 *)(plVar1 + 2) = *(undefined4 *)(param_1 + 0xa4);
    } while (*(long *)(param_1 + 0xe0) != param_1 + 0xe0);
  }
  QMutex::unlock();
  return;
}


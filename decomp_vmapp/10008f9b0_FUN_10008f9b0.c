
void FUN_10008f9b0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  QMutex::lock();
  while (plVar3 = *(long **)(param_1 + 0xd0), plVar3 != (long *)(param_1 + 0xd0)) {
    lVar1 = *plVar3;
    plVar2 = (long *)plVar3[1];
    *(long **)(lVar1 + 8) = plVar2;
    *plVar2 = lVar1;
    *plVar3 = (long)plVar3;
    plVar3[1] = (long)plVar3;
    QMutex::unlock();
    FUN_10008f790(param_1,plVar3,0x80000009,0);
    QMutex::lock();
  }
  QMutex::unlock();
  FUN_10008f790(param_1,*(undefined8 *)(param_1 + 0x50),0x80000009,1);
  *(undefined8 *)(param_1 + 0x50) = 0;
  FUN_10008f790(param_1,*(undefined8 *)(param_1 + 0x48),0x80000009,0);
  *(undefined8 *)(param_1 + 0x48) = 0;
  return;
}



void FUN_100a2b690(long param_1)

{
  QArrayData *pQVar1;
  
  pQVar1 = *(QArrayData **)(param_1 + 0x18);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_100a2b6c9;
      pQVar1 = *(QArrayData **)(param_1 + 0x18);
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_100a2b6c9:
  if (*(long *)(param_1 + 0x20) != 0) {
    _PrlHandle_Free();
  }
  if (*(long *)(param_1 + 8) != 0) {
    FUN_100a2b690();
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_100a2b690();
  }
  return;
}


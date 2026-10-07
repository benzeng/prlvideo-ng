
void FUN_100030190(undefined4 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 0x81) = 1;
  pQVar1 = *(QArrayData **)(param_1 + 0x84);
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
      pQVar1 = *(QArrayData **)(param_1 + 0x84);
    }
    QArrayData::deallocate(pQVar1,1,8);
  }
  return;
}


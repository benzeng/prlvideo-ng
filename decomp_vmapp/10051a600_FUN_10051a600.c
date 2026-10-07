
void FUN_10051a600(undefined8 param_1,undefined8 *param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  
  pQVar1 = (QArrayData *)*param_2;
  iVar2 = *(int *)pQVar1;
  if (1 < iVar2 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
    iVar2 = *(int *)pQVar1;
  }
  if (iVar2 != -1) {
    if (iVar2 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}



undefined8 * FUN_100853670(undefined8 *param_1,long param_2)

{
  long lVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  
  if (((*(long *)(param_2 + 0x68) == 0) || (*(int *)(*(long *)(param_2 + 0x68) + 4) == 0)) ||
     (lVar1 = *(long *)(param_2 + 0x70), lVar1 == 0)) {
    *param_1 = PTR_shared_null_1021e1288;
    return param_1;
  }
  pQVar2 = *(QArrayData **)(lVar1 + 0x20);
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  pQVar3 = *(QArrayData **)(lVar1 + 0x28);
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  *param_1 = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10085370c;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10085370c:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
  return param_1;
}


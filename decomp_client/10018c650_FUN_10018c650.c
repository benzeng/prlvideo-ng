
undefined8 * FUN_10018c650(undefined8 *param_1,long param_2)

{
  QArrayData *pQVar1;
  int iVar2;
  QArrayData *local_28;
  
  CVmConfiguration::getVmIdentification();
  CVmIdentification::getVmUuid();
  pQVar1 = *(QArrayData **)(param_2 + 0x28);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  *param_1 = local_28;
  if (1 < *(int *)local_28 + 1U) {
    LOCK();
    *(int *)local_28 = *(int *)local_28 + 1;
    UNLOCK();
  }
  param_1[1] = pQVar1;
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
      if (*(int *)pQVar1 != 0) goto LAB_10018c6e4;
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10018c6e4:
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      UNLOCK();
      if (*(int *)local_28 != 0) {
        return param_1;
      }
    }
    QArrayData::deallocate(local_28,2,8);
  }
  return param_1;
}


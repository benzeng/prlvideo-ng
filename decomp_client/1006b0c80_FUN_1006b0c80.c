
undefined8 * FUN_1006b0c80(undefined8 *param_1,undefined8 *param_2,int param_3)

{
  uint *puVar1;
  long lVar2;
  QArrayData *pQVar3;
  
  puVar1 = (uint *)*param_2;
  if (1 < *puVar1) {
    FUN_100036c40(param_2,puVar1[1]);
    puVar1 = (uint *)*param_2;
  }
  lVar2 = (long)param_3 + (long)(int)puVar1[2];
  pQVar3 = *(QArrayData **)(puVar1 + lVar2 * 2 + 4);
  *param_1 = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
    pQVar3 = *(QArrayData **)(puVar1 + lVar2 * 2 + 4);
  }
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1006b0d0a;
      pQVar3 = *(QArrayData **)(puVar1 + lVar2 * 2 + 4);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006b0d0a:
  QListData::remove((int)param_2);
  return param_1;
}


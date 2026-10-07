
void FUN_10046b9a0(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  QArrayData *pQVar3;
  
  if (param_2 < 0) {
    return;
  }
  puVar1 = (uint *)*param_1;
  uVar2 = puVar1[2];
  if ((int)(puVar1[3] - uVar2) <= param_2) {
    return;
  }
  if (1 < *puVar1) {
    FUN_100022c80(param_1,puVar1[1]);
    puVar1 = (uint *)*param_1;
    uVar2 = puVar1[2];
  }
  pQVar3 = *(QArrayData **)(puVar1 + ((long)param_2 + (long)(int)uVar2) * 2 + 4);
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_10046ba14;
      pQVar3 = *(QArrayData **)(puVar1 + ((long)param_2 + (long)(int)uVar2) * 2 + 4);
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_10046ba14:
  QListData::remove((int)param_1);
  return;
}


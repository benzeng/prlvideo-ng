
void FUN_1000e4b40(undefined8 *param_1,int param_2)

{
  void *pvVar1;
  uint *puVar2;
  uint uVar3;
  QArrayData *pQVar4;
  
  if (param_2 < 0) {
    return;
  }
  puVar2 = (uint *)*param_1;
  uVar3 = puVar2[2];
  if ((int)(puVar2[3] - uVar3) <= param_2) {
    return;
  }
  if (1 < *puVar2) {
    FUN_1000e7430(param_1,puVar2[1]);
    puVar2 = (uint *)*param_1;
    uVar3 = puVar2[2];
  }
  pvVar1 = *(void **)(puVar2 + ((long)param_2 + (long)(int)uVar3) * 2 + 4);
  if (pvVar1 == (void *)0x0) goto LAB_1000e4bc3;
  pQVar4 = *(QArrayData **)((long)pvVar1 + 8);
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000e4bbb;
      pQVar4 = *(QArrayData **)((long)pvVar1 + 8);
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000e4bbb:
  operator_delete(pvVar1);
LAB_1000e4bc3:
  QListData::remove((int)param_1);
  return;
}


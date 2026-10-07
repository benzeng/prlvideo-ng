
void FUN_100060330(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint uVar3;
  Data *pDVar4;
  QArrayData *pQVar5;
  
  if (param_2 < 0) {
    return;
  }
  puVar2 = (uint *)*param_1;
  uVar3 = puVar2[2];
  if ((int)(puVar2[3] - uVar3) <= param_2) {
    return;
  }
  if (1 < *puVar2) {
    FUN_10005fb00(param_1,puVar2[1]);
    puVar2 = (uint *)*param_1;
    uVar3 = puVar2[2];
  }
  puVar1 = *(undefined8 **)(puVar2 + ((long)param_2 + (long)(int)uVar3) * 2 + 4);
  if (puVar1 == (undefined8 *)0x0) goto LAB_1000603df;
  pDVar4 = (Data *)puVar1[2];
  if (*(int *)pDVar4 != -1) {
    if (*(int *)pDVar4 != 0) {
      LOCK();
      *(int *)pDVar4 = *(int *)pDVar4 + -1;
      UNLOCK();
      if (*(int *)pDVar4 != 0) goto LAB_1000603a9;
      pDVar4 = (Data *)puVar1[2];
    }
    QListData::dispose(pDVar4);
  }
LAB_1000603a9:
  pQVar5 = (QArrayData *)*puVar1;
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      UNLOCK();
      if (*(int *)pQVar5 != 0) goto LAB_1000603d7;
      pQVar5 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_1000603d7:
  operator_delete(puVar1);
LAB_1000603df:
  QListData::remove((int)param_1);
  return;
}


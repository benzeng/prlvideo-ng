
void FUN_1000b4720(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
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
    FUN_1000b5cf0(param_1,puVar2[1]);
    puVar2 = (uint *)*param_1;
    uVar3 = puVar2[2];
  }
  puVar1 = *(undefined8 **)(puVar2 + ((long)param_2 + (long)(int)uVar3) * 2 + 4);
  if (puVar1 == (undefined8 *)0x0) goto LAB_1000b47d9;
  pQVar4 = (QArrayData *)puVar1[1];
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000b47a3;
      pQVar4 = (QArrayData *)puVar1[1];
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000b47a3:
  pQVar4 = (QArrayData *)*puVar1;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1000b47d1;
      pQVar4 = (QArrayData *)*puVar1;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1000b47d1:
  operator_delete(puVar1);
LAB_1000b47d9:
  QListData::remove((int)param_1);
  return;
}


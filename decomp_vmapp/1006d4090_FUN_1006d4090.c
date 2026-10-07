
void FUN_1006d4090(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  int *piVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  puVar1 = (uint *)*param_1;
  uVar5 = puVar1[1] + 1;
  uVar9 = puVar1[2] & 0x7fffffff;
  if ((*puVar1 < 2) && (uVar5 <= uVar9)) {
    lVar8 = *(long *)(puVar1 + 4);
    uVar5 = puVar1[1];
    piVar2 = (int *)*param_2;
    *(int **)((long)puVar1 + (long)(int)uVar5 * 0x10 + lVar8) = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    piVar2 = (int *)param_2[1];
    *(int **)((long)puVar1 + (long)(int)uVar5 * 0x10 + lVar8 + 8) = piVar2;
    if (1 < *piVar2 + 1U) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    goto LAB_1006d41f6;
  }
  pQVar3 = (QArrayData *)*param_2;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  pQVar4 = (QArrayData *)param_2[1];
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
  }
  iVar6 = *(int *)(*param_1 + 4);
  if (uVar9 < uVar5) {
    uVar10 = iVar6 + 1;
  }
  else {
    uVar10 = *(uint *)(*param_1 + 8) & 0x7fffffff;
  }
  FUN_1006d0a00(param_1,iVar6,uVar10,(ulong)(uVar9 < uVar5) << 3);
  lVar8 = *param_1;
  lVar7 = *(long *)(lVar8 + 0x10) + lVar8;
  lVar8 = (long)*(int *)(lVar8 + 4) * 0x10;
  *(QArrayData **)(lVar8 + lVar7) = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  *(QArrayData **)(lVar7 + 8 + lVar8) = pQVar4;
  iVar6 = *(int *)pQVar4;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
    iVar6 = *(int *)pQVar4;
  }
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_1006d41c9;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_1006d41c9:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_1006d41f6;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_1006d41f6:
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}


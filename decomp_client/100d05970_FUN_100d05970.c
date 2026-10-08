
/* WARNING: Removing unreachable block (ram,0x000100d05b39) */

void FUN_100d05970(long *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  undefined8 uVar5;
  QArrayData *pQVar6;
  QArrayData *pQVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  
  puVar3 = (uint *)*param_1;
  uVar9 = puVar3[1] + 1;
  uVar12 = puVar3[2] & 0x7fffffff;
  if ((*puVar3 < 2) && (uVar9 <= uVar12)) {
    lVar11 = *(long *)(puVar3 + 4);
    lVar10 = (long)(int)puVar3[1];
    *(undefined8 *)((long)puVar3 + lVar10 * 0x28 + lVar11) = *param_2;
    piVar4 = (int *)param_2[1];
    *(int **)((long)puVar3 + lVar10 * 0x28 + lVar11 + 8) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    piVar4 = (int *)param_2[2];
    *(int **)((long)puVar3 + lVar10 * 0x28 + lVar11 + 0x10) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(undefined4 *)((long)puVar3 + lVar10 * 0x28 + lVar11 + 0x20) = *(undefined4 *)(param_2 + 4);
    *(undefined8 *)((long)puVar3 + lVar10 * 0x28 + lVar11 + 0x18) = param_2[3];
    goto LAB_100d05b1e;
  }
  uVar5 = *param_2;
  pQVar6 = (QArrayData *)param_2[1];
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    UNLOCK();
  }
  pQVar7 = (QArrayData *)param_2[2];
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    UNLOCK();
  }
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar8 = param_2[3];
  iVar2 = *(int *)(*param_1 + 4);
  if (uVar12 < uVar9) {
    uVar13 = iVar2 + 1;
  }
  else {
    uVar13 = *(uint *)(*param_1 + 8) & 0x7fffffff;
  }
  FUN_100d06780(param_1,iVar2,uVar13,(ulong)(uVar12 < uVar9) << 3);
  lVar11 = *param_1;
  lVar10 = *(long *)(lVar11 + 0x10) + lVar11;
  lVar11 = (long)*(int *)(lVar11 + 4);
  *(undefined8 *)(lVar10 + lVar11 * 0x28) = uVar5;
  *(QArrayData **)(lVar10 + 8 + lVar11 * 0x28) = pQVar6;
  if (1 < *(int *)pQVar6 + 1U) {
    LOCK();
    *(int *)pQVar6 = *(int *)pQVar6 + 1;
    UNLOCK();
  }
  *(QArrayData **)(lVar10 + 0x10 + lVar11 * 0x28) = pQVar7;
  if (1 < *(int *)pQVar7 + 1U) {
    LOCK();
    *(int *)pQVar7 = *(int *)pQVar7 + 1;
    UNLOCK();
  }
  *(undefined4 *)(lVar10 + 0x20 + lVar11 * 0x28) = uVar1;
  *(undefined8 *)(lVar10 + 0x18 + lVar11 * 0x28) = uVar8;
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      UNLOCK();
      if (*(int *)pQVar7 != 0) goto LAB_100d05af1;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_100d05af1:
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      UNLOCK();
      if (*(int *)pQVar6 != 0) goto LAB_100d05b1e;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100d05b1e:
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}


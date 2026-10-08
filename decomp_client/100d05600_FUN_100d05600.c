
void FUN_100d05600(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 uVar4;
  QArrayData *pQVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  
  puVar13 = (uint *)*param_1;
  uVar1 = puVar13[1];
  uVar10 = uVar1 + 1;
  uVar12 = puVar13[2] & 0x7fffffff;
  if ((*puVar13 < 2) && (uVar10 <= uVar12)) {
    lVar9 = *(long *)(puVar13 + 4);
    lVar8 = (long)(int)puVar13[1];
    uVar2 = *param_2;
    *(undefined8 *)((long)puVar13 + lVar8 * 0x28 + lVar9 + 8) = param_2[1];
    *(undefined8 *)((long)puVar13 + lVar8 * 0x28 + lVar9) = uVar2;
    piVar3 = (int *)param_2[2];
    *(int **)((long)puVar13 + lVar8 * 0x28 + lVar9 + 0x10) = piVar3;
    if (1 < *piVar3 + 1U) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    uVar2 = param_2[3];
    *(undefined8 *)((long)puVar13 + lVar8 * 0x28 + lVar9 + 0x20) = param_2[4];
    *(undefined8 *)((long)puVar13 + lVar8 * 0x28 + lVar9 + 0x18) = uVar2;
  }
  else {
    uVar2 = *param_2;
    uVar4 = param_2[1];
    pQVar5 = (QArrayData *)param_2[2];
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      UNLOCK();
      puVar13 = (uint *)*param_1;
      uVar1 = puVar13[1];
    }
    uVar6 = param_2[3];
    uVar7 = param_2[4];
    if (uVar12 < uVar10) {
      uVar11 = uVar1 + 1;
    }
    else {
      uVar11 = puVar13[2] & 0x7fffffff;
    }
    FUN_100d063c0(param_1,uVar1,uVar11,(ulong)(uVar12 < uVar10) << 3);
    lVar9 = *param_1;
    lVar8 = *(long *)(lVar9 + 0x10) + lVar9;
    lVar9 = (long)*(int *)(lVar9 + 4);
    *(undefined8 *)(lVar8 + 8 + lVar9 * 0x28) = uVar4;
    *(undefined8 *)(lVar8 + lVar9 * 0x28) = uVar2;
    *(QArrayData **)(lVar8 + 0x10 + lVar9 * 0x28) = pQVar5;
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      UNLOCK();
    }
    *(undefined8 *)(lVar8 + 0x20 + lVar9 * 0x28) = uVar7;
    *(undefined8 *)(lVar8 + 0x18 + lVar9 * 0x28) = uVar6;
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        UNLOCK();
        if (*(int *)pQVar5 != 0) goto LAB_100d0575b;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
  }
LAB_100d0575b:
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}



void FUN_100d057b0(long *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined2 local_40;
  undefined1 local_31;
  
  puVar3 = (uint *)*param_1;
  uVar7 = puVar3[1] + 1;
  uVar10 = puVar3[2] & 0x7fffffff;
  if ((*puVar3 < 2) && (uVar7 <= uVar10)) {
    lVar9 = *(long *)(puVar3 + 4);
    lVar8 = (long)(int)puVar3[1] * 0x20;
    piVar4 = (int *)*param_2;
    *(int **)((long)puVar3 + lVar8 + lVar9) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    piVar4 = (int *)param_2[1];
    *(int **)((long)puVar3 + lVar8 + lVar9 + 8) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    piVar4 = (int *)param_2[2];
    *(int **)((long)puVar3 + lVar8 + lVar9 + 0x10) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
    *(undefined2 *)((long)puVar3 + lVar8 + lVar9 + 0x18) = *(undefined2 *)(param_2 + 3);
  }
  else {
    piVar4 = (int *)*param_2;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
    }
    piVar5 = (int *)param_2[1];
    if (1 < *piVar5 + 1U) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
    }
    piVar6 = (int *)param_2[2];
    if (1 < *piVar6 + 1U) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
    }
    uVar1 = *(undefined2 *)(param_2 + 3);
    iVar2 = *(int *)(*param_1 + 4);
    if (uVar10 < uVar7) {
      uVar11 = iVar2 + 1;
    }
    else {
      uVar11 = *(uint *)(*param_1 + 8) & 0x7fffffff;
    }
    local_58 = piVar4;
    local_50 = piVar5;
    local_48 = piVar6;
    local_40 = uVar1;
    FUN_100d06c90(param_1,iVar2,uVar11,(ulong)(uVar10 < uVar7) << 3);
    lVar9 = *param_1;
    lVar8 = *(long *)(lVar9 + 0x10) + lVar9;
    lVar9 = (long)*(int *)(lVar9 + 4) * 0x20;
    *(int **)(lVar9 + lVar8) = piVar4;
    if (1 < *piVar4 + 1U) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      local_31 = *piVar4 != 0;
      UNLOCK();
    }
    *(int **)(lVar8 + 8 + lVar9) = piVar5;
    if (1 < *piVar5 + 1U) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      local_31 = *piVar5 != 0;
      UNLOCK();
    }
    *(int **)(lVar8 + 0x10 + lVar9) = piVar6;
    if (1 < *piVar6 + 1U) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
    }
    *(undefined2 *)(lVar8 + 0x18 + lVar9) = uVar1;
    FUN_100d05f40(&local_58);
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}


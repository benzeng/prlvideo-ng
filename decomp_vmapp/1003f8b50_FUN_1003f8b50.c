
void FUN_1003f8b50(long *param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  
  puVar7 = (uint *)*param_1;
  uVar2 = puVar7[1];
  uVar4 = uVar2 + 1;
  uVar6 = puVar7[2] & 0x7fffffff;
  if ((*puVar7 < 2) && (uVar4 <= uVar6)) {
    lVar3 = *param_2;
    *(long *)((long)puVar7 + (long)(int)puVar7[1] * 8 + *(long *)(puVar7 + 4)) = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
  }
  else {
    param_2 = (long *)*param_2;
    if (param_2 != (long *)0x0) {
      LOCK();
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      UNLOCK();
      puVar7 = (uint *)*param_1;
      uVar2 = puVar7[1];
    }
    if (uVar6 < uVar4) {
      uVar5 = uVar2 + 1;
    }
    else {
      uVar5 = puVar7[2] & 0x7fffffff;
    }
    FUN_1003f8c60(param_1,uVar2,uVar5,(ulong)(uVar6 < uVar4) << 3);
    lVar3 = *param_1;
    *(long **)(*(long *)(lVar3 + 0x10) + lVar3 + (long)*(int *)(lVar3 + 4) * 8) = param_2;
    if (param_2 != (long *)0x0) {
      LOCK();
      *(int *)(param_2 + 1) = (int)param_2[1] + 1;
      UNLOCK();
      LOCK();
      plVar1 = param_2 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*param_2 + 0x10))(param_2);
      }
    }
  }
  *(int *)(*param_1 + 4) = *(int *)(*param_1 + 4) + 1;
  return;
}


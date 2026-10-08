
void FUN_100d16900(long param_1,undefined8 param_2)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  lVar4 = FUN_100d169c0();
  if (lVar4 != 0) {
    return;
  }
  pvVar5 = operator_new(0x10);
  FUN_100d13aa0(pvVar5,param_2);
  puVar3 = *(uint **)(param_1 + 0x20);
  uVar2 = puVar3[1];
  uVar6 = uVar2 + 1;
  uVar7 = puVar3[2] & 0x7fffffff;
  if ((*puVar3 < 2) && (uVar6 <= uVar7)) {
    *(void **)((long)puVar3 + (long)(int)uVar2 * 8 + *(long *)(puVar3 + 4)) = pvVar5;
  }
  else {
    uVar8 = uVar7;
    if (uVar7 < uVar6) {
      uVar8 = uVar6;
    }
    FUN_100d14250((long *)(param_1 + 0x20),(long)(int)uVar2,uVar8,(ulong)(uVar7 < uVar6) << 3);
    lVar4 = *(long *)(param_1 + 0x20);
    *(void **)(*(long *)(lVar4 + 0x10) + lVar4 + (long)*(int *)(lVar4 + 4) * 8) = pvVar5;
  }
  piVar1 = (int *)(*(long *)(param_1 + 0x20) + 4);
  *piVar1 = *piVar1 + 1;
  FUN_100d169c0(param_1,param_2);
  return;
}



void FUN_10037e0f0(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  void *pvVar6;
  void *pvVar7;
  bool bVar8;
  
  pvVar6 = (void *)*param_1;
  pvVar3 = (void *)param_1[1];
  pvVar4 = pvVar3;
  pvVar7 = pvVar3;
  if (pvVar3 != pvVar6) {
    uVar2 = 0;
    uVar5 = 1;
    do {
      plVar1 = *(long **)((long)pvVar6 + uVar2 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))(plVar1);
        pvVar6 = (void *)*param_1;
        pvVar3 = (void *)param_1[1];
      }
      bVar8 = uVar5 < (ulong)((long)pvVar3 - (long)pvVar6 >> 3);
      uVar2 = uVar5;
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (bVar8);
    pvVar4 = pvVar6;
    pvVar7 = pvVar6;
    if (pvVar3 != pvVar6) {
      pvVar4 = (void *)((long)pvVar3 + (~((long)pvVar3 + (-8 - (long)pvVar6)) & 0xfffffffffffffff8U)
                       );
      param_1[1] = (long)pvVar4;
    }
  }
  if (pvVar7 == (void *)0x0) {
    return;
  }
  if (pvVar4 != pvVar7) {
    param_1[1] = (~((long)pvVar4 + (-8 - (long)pvVar7)) & 0xfffffffffffffff8U) + (long)pvVar4;
  }
  operator_delete(pvVar7);
  return;
}


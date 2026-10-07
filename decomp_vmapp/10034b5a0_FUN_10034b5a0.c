
undefined8 FUN_10034b5a0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  
  uVar5 = 9;
  if ((0xf < (ulong)*(uint *)(param_2 + 4)) &&
     ((ulong)*(uint *)(param_2 + 0xc) <= ((ulong)*(uint *)(param_2 + 4) - 0x10) / 0x18)) {
    puVar7 = (uint *)(param_2 + 8);
    if (*(long **)(param_1 + 0xa818) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0xa818);
      plVar8 = (long *)(param_1 + 0xa818);
      do {
        while (plVar6 = plVar2, *(uint *)(plVar6 + 4) < *puVar7) {
          plVar1 = plVar6 + 1;
          plVar6 = plVar8;
          plVar2 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034b630;
        }
        plVar2 = (long *)*plVar6;
        plVar8 = plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
LAB_10034b630:
      if ((plVar6 != (long *)(param_1 + 0xa818)) && (*(uint *)(plVar6 + 4) <= *puVar7)) {
        return 7;
      }
    }
    pvVar3 = operator_new(0x110);
    FUN_100342ce0(pvVar3,puVar7);
    puVar4 = (undefined8 *)FUN_10034ff40(param_1 + 0xa810,puVar7);
    *puVar4 = pvVar3;
    uVar5 = 0;
  }
  return uVar5;
}


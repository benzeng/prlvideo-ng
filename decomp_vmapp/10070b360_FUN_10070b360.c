
undefined8 FUN_10070b360(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  
  if (*(uint *)(param_1 + 4) != 0) {
    uVar3 = param_3 + param_2;
    uVar6 = 0;
    uVar4 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0x10 + (ulong)uVar6 * 0x10);
      uVar1 = uVar7 + uVar4;
      if (param_2 < uVar1) {
        if (uVar3 <= uVar4) {
          return 1;
        }
        plVar2 = *(long **)(param_1 + 8 + (ulong)uVar6 * 0x10);
        if (uVar4 < param_2) {
          plVar2 = (long *)((long)plVar2 + (ulong)(param_2 - uVar4));
          uVar7 = uVar7 - (param_2 - uVar4);
        }
        if (uVar3 < uVar1) {
          uVar7 = (uVar7 + uVar3) - uVar1;
        }
        uVar4 = 0;
        if (uVar7 >> 3 != 0) {
          do {
            if (*plVar2 != 0) {
              return 0;
            }
            plVar2 = plVar2 + 1;
            uVar4 = uVar4 + 1;
          } while (uVar4 < uVar7 >> 3);
        }
        lVar5 = 0;
        if ((uVar7 & 7) != 0) {
          do {
            if (*(char *)((long)plVar2 + lVar5) != '\0') {
              return 0;
            }
            lVar5 = lVar5 + 1;
          } while ((uint)lVar5 < (uVar7 & 7));
        }
      }
      uVar6 = uVar6 + 1;
      uVar4 = uVar1;
    } while (uVar6 < *(uint *)(param_1 + 4));
  }
  return 1;
}


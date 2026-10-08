
undefined8 FUN_100ddc4d0(uint *param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  undefined8 uVar3;
  void *pvVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  
  uVar3 = 0xffffffea;
  if ((param_1 != (uint *)0x0) && (param_2 < *param_1)) {
    uVar7 = (ulong)(param_2 >> 0xf);
    plVar2 = *(long **)(param_1 + uVar7 * 2 + 2);
    uVar3 = 0;
    if (plVar2 != (long *)0x1) {
      if (plVar2 == (long *)0x0) {
        pvVar4 = _valloc(0x1000);
        if (pvVar4 == (void *)0x0) {
          return 0xfffffff4;
        }
        ___bzero(pvVar4,0x1000);
        *(void **)(param_1 + uVar7 * 2 + 2) = pvVar4;
        puVar1 = (uint *)((long)pvVar4 + (ulong)(param_2 >> 5 & 0x3ff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
      }
      else {
        puVar1 = (uint *)((long)plVar2 + (ulong)(param_2 >> 5 & 0x3ff) * 4);
        *puVar1 = *puVar1 | 1 << ((byte)param_2 & 0x1f);
        uVar5 = 0x8000;
        plVar6 = plVar2;
        do {
          if (*plVar6 != -1) {
            return 0;
          }
          if (plVar6[1] != -1) {
            return 0;
          }
          if (plVar6[2] != -1) {
            return 0;
          }
          if (plVar6[3] != -1) {
            return 0;
          }
          uVar5 = uVar5 - 0x100;
          plVar6 = plVar6 + 4;
        } while (0x3f < uVar5);
        if (plVar2 == (long *)0x1) {
          return 0;
        }
        _free(plVar2);
        (param_1 + uVar7 * 2 + 2)[0] = 1;
        (param_1 + uVar7 * 2 + 2)[1] = 0;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}


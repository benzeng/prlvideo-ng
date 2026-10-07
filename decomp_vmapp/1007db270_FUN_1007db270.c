
undefined8 FUN_1007db270(uint *param_1,uint param_2)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  void *pvVar5;
  long *plVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = 0xffffffea;
  if ((param_1 != (uint *)0x0) && (param_2 < *param_1)) {
    uVar8 = (ulong)(param_2 >> 0xf);
    plVar2 = *(long **)(param_1 + uVar8 * 2 + 2);
    uVar4 = 0;
    if (plVar2 != (long *)0x0) {
      if (plVar2 == (long *)0x1) {
        pvVar5 = _valloc(0x1000);
        if (pvVar5 == (void *)0x0) {
          return 0xfffffff4;
        }
        _memset(pvVar5,0xff,0x1000);
        *(void **)(param_1 + uVar8 * 2 + 2) = pvVar5;
        puVar1 = (uint *)((long)pvVar5 + (ulong)(param_2 >> 5 & 0x3ff) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
      }
      else {
        puVar1 = (uint *)((long)plVar2 + (ulong)(param_2 >> 5 & 0x3ff) * 4);
        *puVar1 = *puVar1 & ~(1 << ((byte)param_2 & 0x1f));
        uVar7 = 0x8000;
        plVar3 = plVar2;
        do {
          plVar6 = plVar3;
          if (*plVar6 != 0) {
            return 0;
          }
          if (plVar6[1] != 0) {
            return 0;
          }
          if (plVar6[2] != 0) {
            return 0;
          }
          if (plVar6[3] != 0) {
            return 0;
          }
          uVar7 = uVar7 - 0x100;
          plVar3 = plVar6 + 4;
        } while (0x3f < uVar7);
        if ((uVar7 != 0) && (plVar6[4] != 0)) {
          return 0;
        }
        _free(plVar2);
        (param_1 + uVar8 * 2 + 2)[0] = 0;
        (param_1 + uVar8 * 2 + 2)[1] = 0;
      }
      uVar4 = 0;
    }
  }
  return uVar4;
}


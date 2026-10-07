
/* WARNING: Removing unreachable block (ram,0x0001007db773) */

undefined8 FUN_1007db600(uint *param_1,void *param_2,uint param_3,uint param_4)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  void *pvVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  uVar1 = 0xffffffea;
  if (((param_1 != (uint *)0x0) && (param_4 < *param_1)) && (param_3 <= *param_1)) {
    if (param_3 == 0) {
      uVar1 = 0;
    }
    else if (((param_4 | param_3) & 7) == 0) {
      uVar4 = param_3 - param_4 >> 3;
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar10 = (ulong)(param_4 >> 3) & 0xfff;
        pvVar5 = (void *)((ulong)uVar4 + (long)param_2);
        uVar8 = (ulong)(param_4 >> 0xf);
        uVar9 = 0x1000 - uVar10;
LAB_1007db690:
        if (pvVar5 < (void *)((long)param_2 + uVar9)) {
          uVar9 = (long)pvVar5 - (long)param_2;
        }
        uVar6 = uVar8 & 0xffffffff;
        plVar2 = *(long **)(param_1 + uVar6 * 2 + 2);
        if (plVar2 < (long *)0x2) {
          plVar2 = _valloc(0x1000);
          if (plVar2 == (long *)0x0) {
            return 0xfffffff4;
          }
          ___bzero(plVar2,0x1000);
          *(long **)(param_1 + uVar6 * 2 + 2) = plVar2;
        }
        _memcpy(plVar2 + uVar10,param_2,uVar9 & 0xffffffff);
        uVar4 = 0x8000;
        uVar3 = 0x8000;
        plVar7 = plVar2;
        if (plVar2 != (long *)0x0) {
          do {
            if (((*plVar7 != -1) || (plVar7[1] != -1)) || ((plVar7[2] != -1 || (plVar7[3] != -1))))
            goto LAB_1007db780;
            uVar3 = uVar3 - 0x100;
            plVar7 = plVar7 + 4;
          } while (0x3f < uVar3);
        }
        if (*(void **)(param_1 + uVar6 * 2 + 2) != (void *)0x1) {
          _free(*(void **)(param_1 + uVar6 * 2 + 2));
          (param_1 + uVar6 * 2 + 2)[0] = 1;
          (param_1 + uVar6 * 2 + 2)[1] = 0;
        }
        goto LAB_1007db839;
      }
    }
  }
  return uVar1;
  while( true ) {
    uVar4 = uVar4 - 0x100;
    plVar2 = plVar7 + 4;
    if (uVar4 < 0x40) break;
LAB_1007db780:
    plVar7 = plVar2;
    if (((*plVar7 != 0) || (plVar7[1] != 0)) || ((plVar7[2] != 0 || (plVar7[3] != 0))))
    goto LAB_1007db839;
  }
  if (((uVar4 == 0) || (plVar7[4] == 0)) && (*(void **)(param_1 + uVar6 * 2 + 2) != (void *)0x0)) {
    _free(*(void **)(param_1 + uVar6 * 2 + 2));
    (param_1 + uVar6 * 2 + 2)[0] = 0;
    (param_1 + uVar6 * 2 + 2)[1] = 0;
  }
LAB_1007db839:
  param_2 = (void *)((long)param_2 + uVar9);
  uVar8 = uVar8 + 1;
  uVar10 = 0;
  uVar9 = 0x1000;
  if (pvVar5 <= param_2) {
    return 0;
  }
  goto LAB_1007db690;
}


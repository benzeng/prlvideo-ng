
undefined8 FUN_1002d3350(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  
  uVar6 = *(uint *)(param_2 + 1);
  while ((plVar1 = *(long **)(param_4 + 0x18), plVar1 != (long *)(param_4 + 0x18) &&
         (plVar1 != (long *)0x0))) {
    uVar2 = *(uint *)((long)plVar1 + 0x434);
    lVar3 = -1;
    if (uVar2 < *(uint *)(plVar1 + 0x86)) {
      lVar3 = plVar1[(ulong)uVar2 + 2];
    }
    if (lVar3 != *param_3) break;
    if (*(int *)((long)plVar1 + 0x464) == 0) {
      return 0x4800;
    }
    uVar7 = 0;
    if (uVar2 == 0) {
      uVar7 = *(uint *)((long)plVar1 + 0x444);
    }
    uVar5 = (uVar6 & 0x1ffff) - uVar7;
    uVar2 = *(uint *)(plVar1 + 0x88);
    uVar8 = *(int *)((long)plVar1 + 0x43c) - uVar2;
    if (uVar5 < uVar8) {
      uVar8 = uVar5;
    }
    uVar5 = *(int *)((long)plVar1 + 0x454) - uVar2;
    if (uVar8 < uVar5) {
      uVar5 = uVar8;
    }
    sVar9 = (size_t)uVar5;
    if (param_5 == 0x69) {
      if ((*(byte *)((long)param_2 + 0xc) & 0x40) == 0) {
        if ((uVar5 != 0) && ((ulong)uVar7 + *param_2 != 0)) {
          FUN_10008c9b0(DAT_1011c3688,(ulong)uVar7 + *param_2,(long)plVar1 + (ulong)uVar2 + 0x4d8,
                        sVar9);
        }
      }
      else {
        if (7 < uVar5) {
          sVar9 = 8;
        }
        _memcpy(param_2 + uVar7,(void *)((long)plVar1 + (ulong)uVar2 + 0x4d8),sVar9);
      }
    }
    *(uint *)(plVar1 + 0x88) = *(int *)(plVar1 + 0x88) + uVar5;
    uVar2 = *(uint *)((long)param_3 + 0x14) + uVar5 & 0xffffff;
    *(uint *)((long)param_3 + 0x14) = *(uint *)((long)param_3 + 0x14) & 0xff000000 | uVar2;
    *(uint *)(param_3 + 4) = uVar7 + uVar5;
    if (*(int *)(plVar1 + 0x8d) == 7) {
      uVar2 = uVar2 | 0x6000000;
    }
    else if (*(int *)(plVar1 + 0x8d) == 0) {
      uVar7 = 0x1000000;
      if (uVar5 < uVar8) {
        uVar7 = 0xd000000;
      }
      uVar2 = uVar2 | uVar7;
    }
    else {
      uVar2 = uVar2 | 0x4000000;
    }
    *(uint *)((long)param_3 + 0x14) = uVar2;
    *(int *)((long)plVar1 + 0x434) = *(int *)((long)plVar1 + 0x434) + 1;
    if ((*(int *)(plVar1 + 0x88) == *(int *)((long)plVar1 + 0x454)) ||
       (uVar2 = *(uint *)((long)param_3 + 0x14), (uVar2 & 0xff000000) != 0x1000000)) {
      FUN_1002c8620(param_1,param_4);
      FUN_1002c8930(plVar1);
      uVar2 = *(uint *)((long)param_3 + 0x14);
    }
    if (((uVar2 & 0xff000000) != 0x1000000) || ((uVar6 & 0x1ffff) <= *(uint *)(param_3 + 4))) break;
  }
  uVar4 = 0x2c00;
  if ((((*(uint *)((long)param_2 + 0xc) & 0x20) == 0) &&
      (((*(uint *)((long)param_2 + 0xc) & 4) == 0 ||
       ((*(uint *)((long)param_3 + 0x14) & 0xff000000) != 0xd000000)))) &&
     ((uVar6 = *(uint *)((long)param_3 + 0x14) >> 0x18, uVar6 == 1 || (uVar6 == 0xd)))) {
    uVar4 = 0x800;
  }
  return uVar4;
}


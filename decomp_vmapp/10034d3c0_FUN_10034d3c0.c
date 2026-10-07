
undefined8 FUN_10034d3c0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  uVar3 = 9;
  if (0x13 < *(uint *)(param_2 + 4)) {
    if (*(long **)(param_1 + 0x12870) != (long *)0x0) {
      uVar8 = *(uint *)(param_2 + 8);
      plVar2 = *(long **)(param_1 + 0x12870);
      plVar7 = (long *)(param_1 + 0x12870);
      do {
        while (plVar6 = plVar2, *(uint *)(plVar6 + 4) < uVar8) {
          plVar1 = plVar6 + 1;
          plVar6 = plVar7;
          plVar2 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034d420;
        }
        plVar2 = (long *)*plVar6;
        plVar7 = plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
LAB_10034d420:
      if ((plVar6 != (long *)(param_1 + 0x12870)) && (*(uint *)(plVar6 + 4) <= uVar8)) {
        return 4;
      }
    }
    uVar3 = 4;
    if (*(uint *)(param_2 + 0xc) < 9) {
      uVar8 = 0;
      switch(*(uint *)(param_2 + 0xc)) {
      case 0:
        break;
      case 1:
        uVar8 = 3;
        break;
      case 2:
        uVar8 = 1;
        break;
      case 3:
        uVar8 = 2;
        break;
      default:
        uVar8 = 6;
        break;
      case 5:
        uVar8 = *(uint *)(param_2 + 0x10) & 1 | 4;
        break;
      case 6:
        uVar8 = 0x11;
        break;
      case 7:
        uVar8 = 0x12;
      }
      puVar4 = operator_new(0x10);
      puVar4[1] = 0;
      *puVar4 = 0;
      FUN_10035fe90(*(undefined8 *)(param_1 + 0x2778),puVar4,uVar8);
      puVar5 = (undefined8 *)FUN_10033f5c0(param_1 + 0x12868,(uint *)(param_2 + 8));
      *puVar5 = puVar4;
      uVar3 = 0;
    }
  }
  return uVar3;
}


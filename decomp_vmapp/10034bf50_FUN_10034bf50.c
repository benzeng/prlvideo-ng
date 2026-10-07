
undefined8 FUN_10034bf50(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  
  uVar6 = 9;
  if (0x3f < *(uint *)(param_2 + 4)) {
    uVar2 = *(uint *)(param_2 + 8);
    if (*(long **)(param_1 + 0x27d8) != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x27d8);
      plVar10 = (long *)(param_1 + 0x27d8);
      do {
        while (plVar9 = plVar5, *(uint *)(plVar9 + 4) < uVar2) {
          plVar1 = plVar9 + 1;
          plVar9 = plVar10;
          plVar5 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034bfb0;
        }
        plVar5 = (long *)*plVar9;
        plVar10 = plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_10034bfb0:
      if ((plVar9 != (long *)(param_1 + 0x27d8)) && (*(uint *)(plVar9 + 4) <= uVar2)) {
        return 7;
      }
    }
    puVar7 = operator_new(0x5c);
    *puVar7 = uVar2;
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar3 = *(uint *)(param_2 + 0x14);
    uVar4 = *(uint *)(param_2 + 0x18);
    puVar7[1] = *(uint *)(param_2 + 0xc);
    puVar7[2] = uVar2;
    puVar7[3] = uVar3;
    puVar7[4] = uVar4;
    puVar7[5] = *(uint *)(param_2 + 0x1c);
    puVar7[6] = *(uint *)(param_2 + 0x20);
    puVar7[7] = *(uint *)(param_2 + 0x24);
    puVar7[0xc] = *(uint *)(param_2 + 0x38);
    puVar7[0xd] = *(uint *)(param_2 + 0x3c);
    puVar7[0xe] = 0;
    FUN_1003dd190(puVar7 + 0xf);
    uVar6 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(puVar7 + 10) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(puVar7 + 8) = uVar6;
    puVar8 = (undefined8 *)FUN_100350130(param_1 + 0x27d0,param_2 + 8);
    *puVar8 = puVar7;
    uVar6 = 0;
  }
  return uVar6;
}


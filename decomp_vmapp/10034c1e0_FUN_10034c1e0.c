
undefined8 FUN_10034c1e0(long param_1,long param_2)

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
  if (0x47 < *(uint *)(param_2 + 4)) {
    uVar2 = *(uint *)(param_2 + 8);
    if (*(long **)(param_1 + 0x27a8) != (long *)0x0) {
      plVar5 = *(long **)(param_1 + 0x27a8);
      plVar10 = (long *)(param_1 + 0x27a8);
      do {
        while (plVar9 = plVar5, *(uint *)(plVar9 + 4) < uVar2) {
          plVar1 = plVar9 + 1;
          plVar9 = plVar10;
          plVar5 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_10034c250;
        }
        plVar5 = (long *)*plVar9;
        plVar10 = plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_10034c250:
      if ((plVar9 != (long *)(param_1 + 0x27a8)) && (*(uint *)(plVar9 + 4) <= uVar2)) {
        return 7;
      }
    }
    puVar7 = operator_new(0x40);
    *puVar7 = uVar2;
    uVar6 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(puVar7 + 1) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(puVar7 + 3) = uVar6;
    puVar7[5] = *(uint *)(param_2 + 0x1c);
    puVar7[6] = *(uint *)(param_2 + 0x20);
    *(undefined1 *)(puVar7 + 7) = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)((long)puVar7 + 0x1d) = *(undefined1 *)(param_2 + 0x25);
    uVar2 = *(uint *)(param_2 + 0x2c);
    uVar3 = *(uint *)(param_2 + 0x30);
    uVar4 = *(uint *)(param_2 + 0x34);
    puVar7[8] = *(uint *)(param_2 + 0x28);
    puVar7[9] = uVar2;
    puVar7[10] = uVar3;
    puVar7[0xb] = uVar4;
    puVar7[0xc] = *(uint *)(param_2 + 0x38);
    puVar7[0xd] = *(uint *)(param_2 + 0x3c);
    puVar7[0xe] = *(uint *)(param_2 + 0x40);
    puVar7[0xf] = *(uint *)(param_2 + 0x44);
    puVar8 = (undefined8 *)FUN_100350230(param_1 + 0x27a0,(uint *)(param_2 + 8));
    *puVar8 = puVar7;
    uVar6 = 0;
  }
  return uVar6;
}


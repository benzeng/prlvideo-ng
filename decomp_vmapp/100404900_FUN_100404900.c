
undefined8 * FUN_100404900(long param_1,ulong param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  uVar9 = param_2;
  uVar3 = param_4;
  if (*(int *)(param_1 + 0x4c) != 0) {
    uVar9 = param_2 & 0xfffffffffffff000;
    uVar3 = (((int)param_2 + 0xfff) - (int)uVar9) + param_4 & 0xfffff000;
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 != (long *)(param_1 + 0x20)) {
    do {
      if (((ulong)plVar8[-2] < uVar3 + uVar9) &&
         (uVar9 < (ulong)*(uint *)(plVar8 + -1) + plVar8[-2])) {
        return (undefined8 *)0x0;
      }
      plVar8 = (long *)*plVar8;
    } while (plVar8 != (long *)(param_1 + 0x20));
  }
  puVar4 = _malloc(0x60);
  puVar7 = (undefined8 *)0x0;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar4 + 0x14) = 0;
    *(undefined4 *)(puVar4 + 2) = 0;
    *(uint *)((long)puVar4 + 0x1c) = param_4;
    puVar4[4] = param_2;
    puVar4[5] = param_3;
    *(undefined4 *)(puVar4 + 3) = 0;
    puVar4[0xb] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar7 = puVar4 + 9;
    puVar4[9] = puVar7;
    puVar4[10] = puVar7;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[6] = 0;
    plVar8 = (long *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 8);
    lVar1 = 0;
    while (lVar2 = lVar6, lVar2 != 0) {
      uVar9 = *(ulong *)(lVar2 + -0x10);
      if (param_2 < *(uint *)(lVar2 + -0x14) + uVar9) {
        if (uVar9 < param_4 + param_2) {
          FUN_1008e3970("","PCache",0,"ERROR: pcache node intersection: %llx:%x, new %llx:%x",uVar9,
                        (ulong)*(uint *)(lVar2 + -0x14),param_2,param_4);
          lVar1 = *plVar8;
          if (lVar1 != 0) {
            FUN_1008e3970("","PCache",0,"PCACHE: BUG, node collision! node %llx:%x, prev %llx:%x",
                          puVar4[4],*(undefined4 *)((long)puVar4 + 0x1c),
                          *(undefined8 *)(lVar1 + -0x10),*(undefined4 *)(lVar1 + -0x14));
          }
          goto LAB_100404aa4;
        }
        plVar8 = (long *)(lVar2 + 0x10);
      }
      else {
        plVar8 = (long *)(lVar2 + 8);
      }
      lVar1 = lVar2;
      lVar6 = *plVar8;
    }
    puVar4[6] = lVar1;
    puVar4[8] = 0;
    puVar4[7] = 0;
    *plVar8 = (long)(puVar4 + 6);
    FUN_1007d95d0();
LAB_100404aa4:
    if (*(int *)(param_1 + 0x4c) == 0) {
      uVar3 = *(uint *)((long)puVar4 + 0x1c);
    }
    else {
      uVar9 = puVar4[4];
      uVar5 = uVar9 & 0xfffffffffffff000;
      puVar4[4] = uVar5;
      uVar3 = (((int)uVar9 + 0xfff) - (int)uVar5) + *(int *)((long)puVar4 + 0x1c) & 0xfffff000;
      *(uint *)((long)puVar4 + 0x1c) = uVar3;
    }
    lVar6 = FUN_1007da7d0(*(undefined8 *)(param_1 + 0x68),uVar3);
    puVar4[0xb] = lVar6;
    lVar1 = param_1 + 0x10;
    if (lVar6 == 0) {
      lVar6 = *(long *)(param_1 + 0x18);
      if (lVar6 != lVar1) {
        do {
          if (*(int *)(lVar6 + -0x34) == 1) {
            FUN_100404740(param_1,lVar6 + -0x48);
            lVar6 = FUN_1007da7d0(*(undefined8 *)(param_1 + 0x68),
                                  *(undefined4 *)((long)puVar4 + 0x1c));
            puVar4[0xb] = lVar6;
            plVar8 = (long *)(param_1 + 0x18);
            if (lVar6 != 0) goto LAB_100404b4b;
          }
          else {
            plVar8 = (long *)(lVar6 + 8);
          }
          lVar6 = *plVar8;
        } while (lVar6 != lVar1);
      }
      FUN_100404740(param_1,puVar4);
      puVar7 = (undefined8 *)0x0;
    }
    else {
LAB_100404b4b:
      lVar6 = *(long *)(param_1 + 0x10);
      *(undefined8 **)(lVar6 + 8) = puVar7;
      puVar4[9] = lVar6;
      puVar4[10] = lVar1;
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + *(int *)((long)puVar4 + 0x1c);
      puVar7 = puVar4;
    }
  }
  return puVar7;
}


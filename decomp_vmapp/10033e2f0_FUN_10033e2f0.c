
void FUN_10033e2f0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined4 *puVar6;
  long *plVar7;
  undefined4 *puVar8;
  byte bVar9;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  
  bVar9 = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar5 = plVar3, *(uint *)(param_1 + 8) <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar7 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10033e340;
      }
      plVar1 = plVar5 + 1;
      plVar5 = plVar7;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e340:
    if ((plVar5 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar5[5];
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      FUN_10038df90(&local_a8,param_3);
      local_68 = param_2;
      local_2c = uStack_70;
      local_34 = local_78;
      local_3c = uStack_80;
      local_44 = local_88;
      local_4c = uStack_90;
      local_54 = local_98;
      local_5c = uStack_a0;
      local_64 = local_a8;
      if (*(undefined4 **)(lVar2 + 0x70) == *(undefined4 **)(lVar2 + 0x78)) {
        FUN_100340790(lVar2 + 0x68,&local_68);
      }
      else {
        puVar6 = &local_68;
        puVar8 = *(undefined4 **)(lVar2 + 0x70);
        for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
          puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
        }
        *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + 0x44;
      }
    }
  }
  return;
}


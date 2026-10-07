
void FUN_10033e410(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long *plVar7;
  long *plVar8;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar8 = plVar3, *(uint *)(param_1 + 8) <= *(uint *)(plVar8 + 4)) {
        plVar3 = (long *)*plVar8;
        plVar7 = plVar8;
        if ((long *)*plVar8 == (long *)0x0) goto LAB_10033e460;
      }
      plVar1 = plVar8 + 1;
      plVar3 = (long *)*plVar1;
      plVar8 = plVar7;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e460:
    if ((plVar8 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar8 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar8[5];
      local_50 = param_2;
      local_14 = param_3[7];
      local_1c = param_3[6];
      local_24 = param_3[5];
      local_2c = param_3[4];
      local_34 = param_3[3];
      local_3c = param_3[2];
      local_44 = param_3[1];
      local_4c = *param_3;
      if (*(undefined4 **)(lVar2 + 0x70) == *(undefined4 **)(lVar2 + 0x78)) {
        FUN_100340790(lVar2 + 0x68,&local_50);
      }
      else {
        puVar5 = &local_50;
        puVar6 = *(undefined4 **)(lVar2 + 0x70);
        for (lVar4 = 0x11; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + 1;
          puVar6 = puVar6 + 1;
        }
        *(long *)(lVar2 + 0x70) = *(long *)(lVar2 + 0x70) + 0x44;
      }
    }
  }
  return;
}


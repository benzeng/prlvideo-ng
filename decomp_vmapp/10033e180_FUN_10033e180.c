
void FUN_10033e180(long param_1,undefined4 param_2,undefined8 param_3)

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
  undefined4 local_a0;
  undefined1 local_9c [124];
  
  bVar9 = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar7 = (long *)(param_1 + 0x18);
    do {
      while (plVar5 = plVar3, *(uint *)(param_1 + 8) <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar7 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10033e1d0;
      }
      plVar1 = plVar5 + 1;
      plVar5 = plVar7;
      plVar3 = (long *)*plVar1;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e1d0:
    if ((plVar5 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar5[5];
      local_a0 = param_2;
      FUN_100350ad0(local_9c);
      FUN_100350bf0(local_9c,param_3);
      if (*(undefined4 **)(lVar2 + 0x40) == *(undefined4 **)(lVar2 + 0x48)) {
        FUN_100340a40(lVar2 + 0x38,&local_a0);
      }
      else {
        puVar6 = &local_a0;
        puVar8 = *(undefined4 **)(lVar2 + 0x40);
        for (lVar4 = 0x1f; lVar4 != 0; lVar4 = lVar4 + -1) {
          *puVar8 = *puVar6;
          puVar6 = puVar6 + (ulong)bVar9 * -2 + 1;
          puVar8 = puVar8 + (ulong)bVar9 * -2 + 1;
        }
        *(long *)(lVar2 + 0x40) = *(long *)(lVar2 + 0x40) + 0x7c;
      }
    }
  }
  return;
}


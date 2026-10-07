
void FUN_10033e240(long param_1,undefined4 param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x18);
    plVar5 = (long *)(param_1 + 0x18);
    do {
      while (plVar6 = plVar4, *(uint *)(param_1 + 8) <= *(uint *)(plVar6 + 4)) {
        plVar4 = (long *)*plVar6;
        plVar5 = plVar6;
        if ((long *)*plVar6 == (long *)0x0) goto LAB_10033e290;
      }
      plVar1 = plVar6 + 1;
      plVar4 = (long *)*plVar1;
      plVar6 = plVar5;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e290:
    if ((plVar6 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar6 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar6[5];
      uStack_14 = (undefined4)param_3[1];
      uStack_10 = (undefined4)((ulong)param_3[1] >> 0x20);
      uStack_1c = (undefined4)*param_3;
      uStack_18 = (undefined4)((ulong)*param_3 >> 0x20);
      puVar3 = *(undefined8 **)(lVar2 + 0x58);
      if (puVar3 == *(undefined8 **)(lVar2 + 0x60)) {
        local_20 = param_2;
        FUN_100340600(lVar2 + 0x50,&local_20);
      }
      else {
        *(undefined4 *)(puVar3 + 2) = uStack_10;
        puVar3[1] = CONCAT44(uStack_14,uStack_18);
        *puVar3 = CONCAT44(uStack_1c,param_2);
        *(long *)(lVar2 + 0x58) = *(long *)(lVar2 + 0x58) + 0x14;
      }
    }
  }
  return;
}


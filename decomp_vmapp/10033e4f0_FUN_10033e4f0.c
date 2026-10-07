
void FUN_10033e4f0(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x18);
    plVar4 = (long *)(param_1 + 0x18);
    do {
      while (plVar5 = plVar3, *(uint *)(param_1 + 8) <= *(uint *)(plVar5 + 4)) {
        plVar3 = (long *)*plVar5;
        plVar4 = plVar5;
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10033e530;
      }
      plVar1 = plVar5 + 1;
      plVar3 = (long *)*plVar1;
      plVar5 = plVar4;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e530:
    if ((plVar5 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar5[5];
      if (*(undefined8 **)(lVar2 + 0x88) == *(undefined8 **)(lVar2 + 0x90)) {
        local_10 = param_2;
        uStack_c = param_3;
        FUN_100341060(lVar2 + 0x80,&local_10);
      }
      else {
        **(undefined8 **)(lVar2 + 0x88) = CONCAT44(param_3,param_2);
        *(long *)(lVar2 + 0x88) = *(long *)(lVar2 + 0x88) + 8;
      }
    }
  }
  return;
}


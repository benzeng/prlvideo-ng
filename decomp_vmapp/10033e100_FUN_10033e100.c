
void FUN_10033e100(long param_1,undefined4 param_2,undefined1 param_3)

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
        if ((long *)*plVar5 == (long *)0x0) goto LAB_10033e140;
      }
      plVar1 = plVar5 + 1;
      plVar3 = (long *)*plVar1;
      plVar5 = plVar4;
    } while ((long *)*plVar1 != (long *)0x0);
LAB_10033e140:
    if ((plVar5 != (long *)(param_1 + 0x18)) && (*(uint *)(plVar5 + 4) <= *(uint *)(param_1 + 8))) {
      lVar2 = plVar5[5];
      uStack_c = CONCAT31(uStack_c._1_3_,param_3);
      if (*(undefined8 **)(lVar2 + 0x28) == *(undefined8 **)(lVar2 + 0x30)) {
        local_10 = param_2;
        FUN_100340910(lVar2 + 0x20,&local_10);
      }
      else {
        **(undefined8 **)(lVar2 + 0x28) = CONCAT44(uStack_c,param_2);
        *(long *)(lVar2 + 0x28) = *(long *)(lVar2 + 0x28) + 8;
      }
    }
  }
  return;
}


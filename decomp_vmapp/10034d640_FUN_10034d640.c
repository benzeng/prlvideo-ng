
undefined8 FUN_10034d640(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = 9;
  if (0xb < *(uint *)(param_2 + 4)) {
    uVar3 = 4;
    if (*(long **)(param_1 + 0x12870) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x12870);
      plVar4 = (long *)(param_1 + 0x12870);
      do {
        while (plVar5 = plVar2, *(uint *)(param_2 + 8) <= *(uint *)(plVar5 + 4)) {
          plVar2 = (long *)*plVar5;
          plVar4 = plVar5;
          if ((long *)*plVar5 == (long *)0x0) goto LAB_10034d690;
        }
        plVar1 = plVar5 + 1;
        plVar2 = (long *)*plVar1;
        plVar5 = plVar4;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_10034d690:
      if ((plVar5 != (long *)(param_1 + 0x12870)) &&
         (*(uint *)(plVar5 + 4) <= *(uint *)(param_2 + 8))) {
        if ((**(byte **)plVar5[5] & 0x10) == 0) {
          FUN_10035bdc0(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 8));
        }
        else {
          FUN_10035d2c0(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 0xc0));
        }
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


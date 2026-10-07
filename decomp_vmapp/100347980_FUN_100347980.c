
undefined8 FUN_100347980(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  
  uVar3 = 9;
  if (0x1b < *(uint *)(param_2 + 4)) {
    uVar3 = 7;
    if (*(long **)(param_1 + 0x27f0) != (long *)0x0) {
      plVar2 = *(long **)(param_1 + 0x27f0);
      plVar5 = (long *)(param_1 + 0x27f0);
      do {
        while (plVar4 = plVar2, *(uint *)(param_2 + 8) <= *(uint *)(plVar4 + 4)) {
          plVar2 = (long *)*plVar4;
          plVar5 = plVar4;
          if ((long *)*plVar4 == (long *)0x0) goto LAB_1003479e0;
        }
        plVar1 = plVar4 + 1;
        plVar4 = plVar5;
        plVar2 = (long *)*plVar1;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_1003479e0:
      if ((plVar4 != (long *)(param_1 + 0x27f0)) &&
         (*(uint *)(plVar4 + 4) <= *(uint *)(param_2 + 8))) {
        uVar3 = 0;
        FUN_1003656d0(*(undefined8 *)(param_1 + 0x2778),param_1,plVar4[5],param_2 + 0xc,0,0);
      }
    }
  }
  return uVar3;
}


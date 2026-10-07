
undefined8 FUN_10034d6d0(long param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  
  uVar4 = 9;
  if (0x13 < *(uint *)(param_2 + 4)) {
    uVar4 = 4;
    if (*(long **)(param_1 + 0x12870) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x12870);
      plVar5 = (long *)(param_1 + 0x12870);
      do {
        while (plVar6 = plVar3, *(uint *)(param_2 + 8) <= *(uint *)(plVar6 + 4)) {
          plVar3 = (long *)*plVar6;
          plVar5 = plVar6;
          if ((long *)*plVar6 == (long *)0x0) goto LAB_10034d730;
        }
        plVar1 = plVar6 + 1;
        plVar3 = (long *)*plVar1;
        plVar6 = plVar5;
      } while ((long *)*plVar1 != (long *)0x0);
LAB_10034d730:
      if ((plVar6 != (long *)(param_1 + 0x12870)) &&
         (*(uint *)(plVar6 + 4) <= *(uint *)(param_2 + 8))) {
        puVar2 = (undefined8 *)plVar6[5];
        *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_2 + 0xc);
        *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(param_2 + 0x10);
        if ((*(byte *)*puVar2 & 0x10) == 0) {
          FUN_10035c0d0(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 8));
        }
        else {
          FUN_10035d250(*(undefined8 *)(*(long *)(param_1 + 0x2778) + 0xc0));
        }
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}


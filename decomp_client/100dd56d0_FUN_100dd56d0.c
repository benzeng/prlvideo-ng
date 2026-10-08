
undefined1 FUN_100dd56d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined1 uVar5;
  
  uVar5 = 0xff;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    plVar4 = (long *)(param_1 + 8);
    do {
      while (plVar3 = plVar1, iVar2 = FUN_100deb2c0(plVar3 + 4,param_2), iVar2 < 0) {
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) goto LAB_100dd5730;
      }
      plVar4 = plVar3;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_100dd5730:
    if ((plVar4 != (long *)(param_1 + 8)) && (iVar2 = FUN_100deb2c0(param_2,plVar4 + 4), -1 < iVar2)
       ) {
      uVar5 = *(undefined1 *)((long)plVar4 + 0x34);
    }
  }
  return uVar5;
}


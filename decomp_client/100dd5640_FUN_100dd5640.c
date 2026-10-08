
undefined4 FUN_100dd5640(long param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  undefined4 uVar5;
  
  uVar5 = 0xffffffff;
  if (*(long **)(param_1 + 8) != (long *)0x0) {
    plVar1 = *(long **)(param_1 + 8);
    plVar4 = (long *)(param_1 + 8);
    do {
      while (plVar3 = plVar1, iVar2 = FUN_100deb2c0(plVar3 + 4,param_2), iVar2 < 0) {
        plVar1 = (long *)plVar3[1];
        if ((long *)plVar3[1] == (long *)0x0) goto LAB_100dd56a0;
      }
      plVar4 = plVar3;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
LAB_100dd56a0:
    if ((plVar4 != (long *)(param_1 + 8)) && (iVar2 = FUN_100deb2c0(param_2,plVar4 + 4), -1 < iVar2)
       ) {
      uVar5 = (undefined4)plVar4[6];
    }
  }
  return uVar5;
}


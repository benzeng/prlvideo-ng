
undefined4 FUN_100785590(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  
  lVar3 = FUN_10077d040();
  uVar6 = 0xffffffff;
  if (*(long **)(lVar3 + 8) != (long *)0x0) {
    plVar1 = *(long **)(lVar3 + 8);
    plVar5 = (long *)(lVar3 + 8);
    do {
      while (plVar4 = plVar1, iVar2 = FUN_1007ea6f0(plVar4 + 4,param_1), iVar2 < 0) {
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_100785600;
      }
      plVar5 = plVar4;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
LAB_100785600:
    if ((plVar5 != (long *)(lVar3 + 8)) && (iVar2 = FUN_1007ea6f0(param_1,plVar5 + 4), -1 < iVar2))
    {
      uVar6 = (undefined4)plVar5[6];
    }
  }
  return uVar6;
}



undefined1 FUN_100dd5c60(undefined8 param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined1 uVar6;
  
  lVar3 = FUN_100dcd640();
  uVar6 = 0xff;
  if (*(long **)(lVar3 + 8) != (long *)0x0) {
    plVar1 = *(long **)(lVar3 + 8);
    plVar5 = (long *)(lVar3 + 8);
    do {
      while (plVar4 = plVar1, iVar2 = FUN_100deb2c0(plVar4 + 4,param_1), iVar2 < 0) {
        plVar1 = (long *)plVar4[1];
        if ((long *)plVar4[1] == (long *)0x0) goto LAB_100dd5cc0;
      }
      plVar5 = plVar4;
      plVar1 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
LAB_100dd5cc0:
    if ((plVar5 != (long *)(lVar3 + 8)) && (iVar2 = FUN_100deb2c0(param_1,plVar5 + 4), -1 < iVar2))
    {
      uVar6 = *(undefined1 *)((long)plVar5 + 0x34);
    }
  }
  return uVar6;
}


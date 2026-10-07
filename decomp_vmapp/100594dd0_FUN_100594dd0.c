
undefined8 FUN_100594dd0(long param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  
  plVar3 = *(long **)(param_1 + 0x20);
  while( true ) {
    if (plVar3 == (long *)(param_1 + 0x28)) {
      return 1;
    }
    iVar1 = (int)plVar3[6];
    if (((1 < iVar1 - 1U) && (iVar1 != 0x5a)) && (iVar1 != 0x5c)) break;
    plVar4 = plVar3;
    plVar2 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      do {
        plVar3 = (long *)plVar4[2];
        bVar5 = (long *)*plVar3 != plVar4;
        plVar4 = plVar3;
      } while (bVar5);
    }
    else {
      do {
        plVar3 = plVar2;
        plVar2 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return 0;
}


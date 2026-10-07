
undefined8 FUN_100867960(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = (long *)FUN_10081ddd0(0x10,"ec_pmeth.c",0x50);
  uVar4 = 0;
  if (plVar2 != (long *)0x0) {
    plVar2[1] = 0;
    *plVar2 = 0;
    *(long **)(param_1 + 0x28) = plVar2;
    plVar1 = *(long **)(param_2 + 0x28);
    if (*plVar1 != 0) {
      lVar3 = FUN_10085b820();
      *plVar2 = lVar3;
      if (lVar3 == 0) {
        return 0;
      }
    }
    plVar2[1] = plVar1[1];
    uVar4 = 1;
  }
  return uVar4;
}


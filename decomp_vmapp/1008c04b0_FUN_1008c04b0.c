
undefined8 FUN_1008c04b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)FUN_10081ddd0(0x10,"by_dir.c",0x97);
  uVar3 = 0;
  if (plVar1 != (long *)0x0) {
    lVar2 = FUN_10087ccc0();
    *plVar1 = lVar2;
    if (lVar2 == 0) {
      FUN_10081e1a0(plVar1);
    }
    else {
      plVar1[1] = 0;
      *(long **)(param_1 + 0x10) = plVar1;
      uVar3 = 1;
    }
  }
  return uVar3;
}


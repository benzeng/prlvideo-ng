
undefined4 FUN_100a6a0f0(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  
  uVar3 = 0xffffffff;
  if (((*param_1 != 0) && (plVar1 = *(long **)(*param_1 + 0x10), plVar1 != (long *)0x0)) &&
     (lVar2 = *plVar1, lVar2 != 0)) {
    uVar3 = *(undefined4 *)(lVar2 + 0x5c);
  }
  return uVar3;
}


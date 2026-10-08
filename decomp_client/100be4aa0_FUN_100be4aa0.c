
undefined8 FUN_100be4aa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*param_1 + 0x10);
  uVar3 = 0;
  lVar2 = *(long *)(*param_2 + 0x10);
  if ((lVar1 != lVar2) && (uVar3 = 0xffffffff, lVar1 != lVar2 && -1 < lVar1 - lVar2)) {
    uVar3 = 1;
  }
  return uVar3;
}


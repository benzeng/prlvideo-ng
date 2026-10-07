
long FUN_1007d99e0(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x10)) {
    lVar1 = lVar2;
  }
  return lVar1;
}


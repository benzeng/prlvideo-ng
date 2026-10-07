
long FUN_1007d9a00(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  for (lVar2 = *param_1; lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar1 = lVar2;
  }
  return lVar1;
}


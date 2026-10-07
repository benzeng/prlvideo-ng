
bool FUN_100702190(long *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (*param_1 != 0) {
    bVar1 = *(long *)(*param_1 + 0x10) == 0;
  }
  return bVar1;
}


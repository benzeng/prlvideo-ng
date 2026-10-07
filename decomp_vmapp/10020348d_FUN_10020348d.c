
bool FUN_10020348d(long param_1,long param_2)

{
  bool bVar1;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = param_1 == param_2;
  }
  return bVar1;
}


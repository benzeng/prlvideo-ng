
bool FUN_100dac190(long *param_1,long *param_2)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_1;
  }
  else {
    lVar1 = *(long *)(*param_2 + 8);
  }
  *param_2 = lVar1;
  return lVar1 != 0;
}


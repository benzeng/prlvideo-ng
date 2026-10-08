
void FUN_10091dbdf(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 == (long *)0x0) {
    FUN_10091ad5a(param_1,0,param_3,param_4);
  }
  else if (*param_2 == 0) {
    FUN_10091ad5a(param_2,0,param_3,param_4);
    *param_1 = *param_2;
  }
  else {
    *param_1 = *param_2;
  }
  return;
}


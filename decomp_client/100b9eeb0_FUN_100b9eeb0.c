
void FUN_100b9eeb0(int *param_1,undefined8 param_2,int param_3)

{
  if (*param_1 == 0xffff) {
    ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"unlimited");
    return;
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%d",*param_1 * 100);
  return;
}


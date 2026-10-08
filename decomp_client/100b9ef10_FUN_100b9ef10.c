
void FUN_100b9ef10(uint *param_1,undefined8 param_2,int param_3)

{
  if (*param_1 == 0xfffffffe) {
    ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"combined");
    return;
  }
  if (0xfffe < *param_1) {
    ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"unlimited");
    return;
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%u");
  return;
}


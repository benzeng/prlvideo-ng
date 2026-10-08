
void FUN_100b9ee50(uint *param_1,undefined8 param_2,int param_3)

{
  if (0xfffe < *param_1) {
    ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"unlimited");
    return;
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%u");
  return;
}


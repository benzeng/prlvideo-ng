
undefined8 FUN_100720800(int *param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if ((ulong)(long)*param_1 < 10) {
    ppuVar1 = (undefined **)(PTR_PTR_100ba25c0 + (long)*param_1 * 8);
  }
  else {
    ppuVar1 = &PTR_s_Unknown_10116e610;
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%s",*ppuVar1);
  return 0;
}


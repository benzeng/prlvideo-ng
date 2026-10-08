
undefined8 FUN_100b9f5e0(int *param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  
  if ((ulong)(long)*param_1 < 10) {
    ppuVar1 = (undefined **)(PTR_PTR_1021e1c48 + (long)*param_1 * 8);
  }
  else {
    ppuVar1 = &PTR_s_Unknown_1022cffe0;
  }
  ___snprintf_chk(param_2,(long)param_3,0,0xffffffffffffffff,"%s",*ppuVar1);
  return 0;
}


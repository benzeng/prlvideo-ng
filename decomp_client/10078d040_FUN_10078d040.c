
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_10078d040(double param_1,long param_2,long param_3)

{
  double dVar1;
  
  if (*(long *)(param_2 + 0x28) < 1) {
    dVar1 = 0.0;
  }
  else {
    dVar1 = (param_1 - *(double *)(param_2 + 0x20)) /
            ((double)(param_3 - *(long *)(param_2 + 0x28)) / _DAT_100e29c70);
  }
  *(double *)(param_2 + 0x20) = param_1;
  *(long *)(param_2 + 0x28) = param_3;
  return dVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10038e110(float param_1)

{
  double dVar1;
  
  if (param_1 <= DAT_100b3e824) {
    dVar1 = (double)(param_1 * _DAT_100b3e828);
  }
  else {
    dVar1 = (double)_pow((double)param_1,DAT_100b3e848);
    dVar1 = dVar1 * _DAT_100b3e850 + _DAT_100b3e858;
  }
  return CONCAT44((int)((ulong)dVar1 >> 0x20),(float)dVar1);
}


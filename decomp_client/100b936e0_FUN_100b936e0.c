
undefined4 * FUN_100b936e0(undefined4 param_1,uint param_2,void *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = _malloc((ulong)param_2 + 9);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _memcpy(puVar1 + 2,param_3,(ulong)param_2);
  }
  return puVar1;
}


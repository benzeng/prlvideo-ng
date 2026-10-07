
undefined8 FUN_10089e880(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = (char)((ulong)param_1 >> 0x18);
  puVar1[1] = (char)((ulong)param_1 >> 0x10);
  puVar1[2] = (char)((ulong)param_1 >> 8);
  puVar1[3] = (char)param_1;
  *param_2 = *param_2 + 4;
  return 1;
}



undefined8 FUN_100c79de0(undefined8 param_1,long *param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_2;
  *puVar1 = (char)((ulong)param_1 >> 8);
  puVar1[1] = (char)param_1;
  *param_2 = *param_2 + 2;
  return 1;
}


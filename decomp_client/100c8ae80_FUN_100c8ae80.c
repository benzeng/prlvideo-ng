
undefined8 FUN_100c8ae80(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *param_1 = puVar1 + 2;
  return 2;
}


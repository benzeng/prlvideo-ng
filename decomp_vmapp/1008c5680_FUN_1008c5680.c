
bool FUN_1008c5680(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1008a4610(&DAT_100be3860);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 **)(param_1 + 2) = puVar1;
    *param_1 = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}


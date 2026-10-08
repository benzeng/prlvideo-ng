
bool FUN_100ca0c00(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100c7fb90(&DAT_102253e70);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_2;
    puVar1[1] = param_3;
    *(undefined8 **)(param_1 + 2) = puVar1;
    *param_1 = 0;
  }
  return puVar1 != (undefined8 *)0x0;
}


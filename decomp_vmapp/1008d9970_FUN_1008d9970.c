
undefined8 * FUN_1008d9970(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_10081ddd0(0x38,"ui_lib.c",0x24e);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    uVar2 = FUN_10087d050(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}


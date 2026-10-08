
undefined8 * FUN_100cb61b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_100bf3540(0x38,"ui_lib.c",0x24e);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    uVar2 = FUN_100c58250(param_1);
    *puVar1 = uVar2;
  }
  return puVar1;
}


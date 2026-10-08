
undefined8 * FUN_100cb28f0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_100cb2fc0();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100c62ee0(0x23,0x70,0x41,"p12_add.c",99);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_100bf6fe0(0x96);
    *puVar1 = uVar2;
    puVar1[1] = param_1;
  }
  return puVar1;
}


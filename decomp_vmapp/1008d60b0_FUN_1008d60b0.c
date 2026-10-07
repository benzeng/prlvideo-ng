
undefined8 * FUN_1008d60b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_1008d6780();
  if (puVar1 == (undefined8 *)0x0) {
    FUN_100887ce0(0x23,0x70,0x41,"p12_add.c",99);
    puVar1 = (undefined8 *)0x0;
  }
  else {
    uVar2 = FUN_100821870(0x96);
    *puVar1 = uVar2;
    puVar1[1] = param_1;
  }
  return puVar1;
}



undefined8 * FUN_1008dd790(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_1008da520();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_1008a4610(&DAT_100be8460);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_1008da540(puVar1);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar3 = FUN_100821870(0x19);
      *puVar1 = uVar3;
      puVar1[1] = puVar2;
      *puVar2 = 0;
      uVar3 = FUN_100821870(0x15);
      *(undefined8 *)puVar2[2] = uVar3;
      FUN_1008dae90(puVar2[1],param_1);
      puVar2 = puVar1;
    }
  }
  return puVar2;
}


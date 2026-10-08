
undefined8 * FUN_100cb9fd0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_100cb6d60();
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_100c7fb90(&DAT_102258a70);
    if (puVar2 == (undefined8 *)0x0) {
      FUN_100cb6d80(puVar1);
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar3 = FUN_100bf6fe0(0x19);
      *puVar1 = uVar3;
      puVar1[1] = puVar2;
      *puVar2 = 0;
      uVar3 = FUN_100bf6fe0(0x15);
      *(undefined8 *)puVar2[2] = uVar3;
      FUN_100cb76d0(puVar2[1],param_1);
      puVar2 = puVar1;
    }
  }
  return puVar2;
}


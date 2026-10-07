
undefined8 * FUN_1004b5260(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = _malloc(0x20);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_1;
    *(undefined4 *)(puVar1 + 1) = param_2;
    puVar1[2] = param_3;
    puVar1[3] = 0xffffffffffffffff;
    puVar2 = puVar1;
  }
  return puVar2;
}


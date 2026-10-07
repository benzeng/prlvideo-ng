
undefined8 * FUN_10070ade0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = _malloc(0x858);
  puVar2 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[10] = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar2 = puVar1;
  }
  return puVar2;
}


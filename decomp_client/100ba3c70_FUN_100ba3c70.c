
undefined8 * FUN_100ba3c70(void)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  puVar1 = _malloc(0x30);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)puVar1 = 6;
    pvVar2 = _malloc(0x200);
    puVar1[4] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      _free(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      puVar1[2] = 0x40;
    }
  }
  return puVar1;
}


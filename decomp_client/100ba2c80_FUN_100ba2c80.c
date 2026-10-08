
undefined8 * FUN_100ba2c80(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = _malloc(0x50);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[7] = 0;
    puVar1[6] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    lVar2 = FUN_100ba3c70();
    puVar1[3] = lVar2;
    if (lVar2 == 0) {
      FUN_100ba2d40(puVar1);
      puVar1 = (undefined8 *)0x0;
    }
    else {
      if (param_3 != 0) {
        *(byte *)((long)puVar1 + 0x14) = *(byte *)((long)puVar1 + 0x14) | 2;
      }
      *(undefined4 *)(puVar1 + 2) = 0;
    }
  }
  return puVar1;
}


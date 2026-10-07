
undefined8 * FUN_100725ba0(void *param_1,size_t param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  
  puVar1 = _malloc(0x30);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 3) = 1;
    *(undefined4 *)puVar1 = 5;
    pvVar2 = _malloc(param_2);
    puVar1[4] = pvVar2;
    if (pvVar2 == (void *)0x0) {
      FUN_100724b70(puVar1);
      puVar3 = (undefined8 *)0x0;
    }
    else {
      puVar1[1] = param_2;
      _memcpy(pvVar2,param_1,param_2);
      puVar3 = puVar1;
    }
  }
  return puVar3;
}


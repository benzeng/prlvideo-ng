
void FUN_1007230c0(void *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar1 = *(undefined8 **)((long)param_1 + 0x290);
  while (puVar2 = puVar1, puVar2 != (undefined8 *)((long)param_1 + 0x290)) {
    puVar1 = (undefined8 *)*puVar2;
    if (puVar2 != (undefined8 *)0x0) {
      if ((void *)puVar2[2] != (void *)0x0) {
        _free((void *)puVar2[2]);
      }
      if ((void *)puVar2[3] != (void *)0x0) {
        _free((void *)puVar2[3]);
      }
      _free(puVar2);
    }
  }
  puVar1 = *(undefined8 **)((long)param_1 + 0x2a0);
  while (puVar1 != (undefined8 *)((long)param_1 + 0x2a0)) {
    puVar2 = (undefined8 *)*puVar1;
    puVar3 = (undefined8 *)puVar1[3];
    while (puVar4 = puVar3, puVar4 != puVar1 + 3) {
      puVar3 = (undefined8 *)*puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        if ((void *)puVar4[2] != (void *)0x0) {
          _free((void *)puVar4[2]);
        }
        if ((void *)puVar4[3] != (void *)0x0) {
          _free((void *)puVar4[3]);
        }
        _free(puVar4);
      }
    }
    if ((void *)puVar1[2] != (void *)0x0) {
      _free((void *)puVar1[2]);
    }
    _free(puVar1);
    puVar1 = puVar2;
  }
  ___bzero(param_1,0x2b0);
  _free(param_1);
  return;
}


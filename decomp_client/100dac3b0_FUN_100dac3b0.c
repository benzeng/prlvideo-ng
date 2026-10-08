
void * FUN_100dac3b0(undefined *param_1,uint param_2,undefined8 *param_3,undefined8 *param_4)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_2 < 3) {
    pvVar2 = _calloc(1,0x20);
    if (param_1 == (undefined *)0x0) {
      param_1 = PTR__strcmp_1021e1ca0;
    }
    *(undefined **)((long)pvVar2 + 0x10) = param_1;
    *(uint *)((long)pvVar2 + 0x18) = param_2;
  }
  else {
    piVar1 = ___error();
    *piVar1 = 0x16;
    pvVar2 = (void *)0x0;
  }
  puVar4 = (undefined8 *)0x0;
  while( true ) {
    puVar3 = param_3;
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = puVar4 + 1;
    }
    puVar4 = (undefined8 *)*puVar3;
    if (puVar4 == (undefined8 *)0x0) break;
    FUN_100dac030(pvVar2,*puVar4);
  }
  puVar4 = (undefined8 *)0x0;
  while( true ) {
    puVar3 = param_4;
    if (puVar4 != (undefined8 *)0x0) {
      puVar3 = puVar4 + 1;
    }
    puVar4 = (undefined8 *)*puVar3;
    if (puVar4 == (undefined8 *)0x0) break;
    FUN_100dac030(pvVar2,*puVar4);
  }
  return pvVar2;
}


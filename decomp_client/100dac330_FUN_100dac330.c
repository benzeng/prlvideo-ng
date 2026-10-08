
void * FUN_100dac330(undefined8 *param_1)

{
  uint uVar1;
  int *piVar2;
  void *pvVar3;
  undefined *puVar4;
  
  uVar1 = *(uint *)(param_1 + 3);
  if (uVar1 < 3) {
    puVar4 = (undefined *)param_1[2];
    pvVar3 = _calloc(1,0x20);
    if (puVar4 == (undefined *)0x0) {
      puVar4 = PTR__strcmp_1021e1ca0;
    }
    *(undefined **)((long)pvVar3 + 0x10) = puVar4;
    *(uint *)((long)pvVar3 + 0x18) = uVar1;
    param_1 = (undefined8 *)*param_1;
  }
  else {
    piVar2 = ___error();
    *piVar2 = 0x16;
    pvVar3 = (void *)0x0;
    param_1 = (undefined8 *)*param_1;
  }
  for (; param_1 != (undefined8 *)0x0; param_1 = (undefined8 *)param_1[1]) {
    FUN_100dac030(pvVar3,*param_1);
  }
  return pvVar3;
}


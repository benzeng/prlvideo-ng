
void FUN_1007968a0(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x50);
  FUN_100795d50(pvVar1);
  puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100795ec0(pvVar1);
    operator_delete(pvVar1);
    puVar2 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar2 + 1) = 1;
    puVar2[2] = pvVar1;
    *puVar2 = &PTR_FUN_1011a5910;
  }
  *param_1 = puVar2;
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  return;
}


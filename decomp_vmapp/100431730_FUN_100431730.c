
void FUN_100431730(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_shared_null_100ba20d0;
  *param_1 = PTR_shared_null_100ba20d0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  puVar2 = param_1 + 3;
  do {
    *puVar2 = puVar1;
    *(undefined4 *)(puVar2 + 1) = 0;
    *(undefined4 *)((long)puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 2) = 0xffffffff;
    *(undefined4 *)((long)puVar2 + 0x14) = 0xffffffff;
    *(undefined4 *)(puVar2 + 3) = 0;
    *(undefined4 *)((long)puVar2 + 0x1c) = 0;
    *(undefined4 *)(puVar2 + 4) = 0xffffffff;
    *(undefined4 *)((long)puVar2 + 0x24) = 0xffffffff;
    *(undefined4 *)(puVar2 + 5) = 0;
    *(undefined4 *)((long)puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 6) = 0xffffffff;
    *(undefined4 *)((long)puVar2 + 0x34) = 0xffffffff;
    puVar2[7] = puVar1;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)((long)puVar2 + 0x44) = 0;
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    *(undefined4 *)((long)puVar2 + 0x4c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 10) = 0;
    *(undefined4 *)((long)puVar2 + 0x54) = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0xffffffff;
    *(undefined4 *)((long)puVar2 + 0x5c) = 0xffffffff;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)((long)puVar2 + 100) = 0;
    puVar2[0xd] = 0xffffffffffffffff;
    puVar2 = puVar2 + 0xe;
  } while (puVar2 != param_1 + 0x73);
  puVar2 = operator_new(0x18);
  pvVar3 = operator_new__(0x80000);
  *puVar2 = pvVar3;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0xc) = 0;
  *(undefined4 *)(puVar2 + 2) = 0x80000;
  *(undefined1 *)((long)puVar2 + 0x14) = 1;
  puVar4 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar4 == (undefined8 *)0x0) {
    operator_delete__(pvVar3);
    operator_delete(puVar2);
    puVar4 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar4 + 1) = 1;
    puVar4[2] = puVar2;
    *puVar4 = &PTR_FUN_10111c4a0;
  }
  param_1[0x73] = puVar4;
  return;
}


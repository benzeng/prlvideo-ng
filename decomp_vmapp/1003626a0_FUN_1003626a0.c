
void FUN_1003626a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  
  FUN_10035d780();
  *param_1 = &PTR_FUN_100bbbff0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  puVar1 = operator_new(0x14);
  *(undefined4 *)(puVar1 + 2) = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  param_1[0x12] = puVar1;
  pvVar2 = operator_new(0x20);
  FUN_100351a30(pvVar2);
  param_1[0x15] = pvVar2;
  puVar1 = operator_new(0x90);
  *puVar1 = param_2;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[3] = puVar1 + 2;
  puVar1[4] = puVar1 + 2;
  puVar1[5] = 0;
  puVar1[6] = puVar1 + 5;
  puVar1[7] = puVar1 + 5;
  puVar1[8] = 0;
  puVar1[9] = puVar1 + 8;
  puVar1[10] = puVar1 + 8;
  puVar1[0xb] = 0;
  puVar1[0xc] = puVar1 + 0xb;
  puVar1[0xd] = puVar1 + 0xb;
  puVar1[0xe] = 0;
  puVar1[0xf] = puVar1 + 0xe;
  puVar1[0x10] = puVar1 + 0xe;
  puVar1[0x11] = param_1 + 2;
  param_1[0x18] = puVar1;
  pvVar2 = operator_new(0x280);
  FUN_10036a020(pvVar2,puVar1);
  param_1[0x16] = pvVar2;
  pvVar2 = operator_new(0x30e0);
  FUN_10039a9f0(pvVar2,param_1[0x15]);
  param_1[0x14] = pvVar2;
  puVar1 = operator_new(0x20);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[2] = pvVar2;
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined1 *)((long)puVar1 + 0x19) = 0;
  *(undefined4 *)((long)puVar1 + 0x1c) = 0;
  param_1[0x17] = puVar1;
  pvVar2 = operator_new(0xf8);
  FUN_10038b610(pvVar2,param_1[7],param_1 + 2,puVar1,param_1[1],param_1[0x15],param_1 + 8,
                param_1[0x12]);
  param_1[4] = pvVar2;
  pvVar2 = operator_new(0x48);
  FUN_100386780(pvVar2,param_1[7],param_1 + 8,param_1[0x15]);
  param_1[0x13] = pvVar2;
  param_1[5] = pvVar2;
  return;
}


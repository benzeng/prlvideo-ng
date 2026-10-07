
void FUN_1002fffa0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  
  *param_1 = &PTR_FUN_100bbb950;
  param_1[5] = param_2;
  param_1[6] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  ___bzero(param_1 + 0x15,0x374);
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x8b] = &PTR_FUN_101117978;
  *(undefined4 *)(param_1 + 0x18c) = 9;
  ___bzero(param_1 + 0x8c,0x800);
  param_1[0x18d] = &PTR_FUN_1011179a8;
  *(undefined4 *)(param_1 + 0x28e) = 9;
  ___bzero(param_1 + 0x18e,0x800);
  param_1[0x293] = 0;
  param_1[0x292] = 0;
  param_1[0x291] = 0;
  param_1[0x290] = 0;
  param_1[0x2b5] = 0;
  param_1[0x2b4] = 0;
  param_1[0x2b6] = &PTR_FUN_1011179d8;
  *(undefined4 *)(param_1 + 0x3b7) = 9;
  ___bzero(param_1 + 0x2b7,0x800);
  param_1[0x3b8] = &PTR_FUN_101117978;
  *(undefined4 *)(param_1 + 0x4b9) = 9;
  ___bzero(param_1 + 0x3b9,0x800);
  param_1[0x4c0] = 0;
  *(undefined4 *)(param_1 + 0x4c1) = 0;
  param_1[0x4c2] = 0;
  *(undefined4 *)(param_1 + 0x4c3) = 0;
  *(undefined4 *)(param_1 + 0x4bf) = 0;
  param_1[0x4be] = 0;
  param_1[0x4bd] = 0;
  param_1[0x4bc] = 0;
  param_1[0x4bb] = 0;
  param_1[0x4ba] = 0;
  *(undefined4 *)((long)param_1 + 0x261c) = 0x1c00;
  param_1[0x14c4] = 0;
  *(undefined4 *)(param_1 + 0x14c5) = 0;
  uVar3 = 0;
  do {
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    param_1[uVar3 + 0x294] = puVar1;
    puVar1 = operator_new(0x10);
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 1) = 0;
    param_1[uVar3 + 0x2a4] = puVar1;
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  pvVar2 = operator_new(0x610);
  FUN_1003063d0(pvVar2,param_1 + 0x294,param_1 + 0x2a4);
  param_1[0x28f] = pvVar2;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined2 *)((long)param_1 + 0xa62c) = 0xd2;
  param_1[1] = DAT_1011c7420;
  param_1[2] = DAT_1011c7428;
  param_1[3] = DAT_1011c7430;
  param_1[4] = DAT_1011c7438;
  *(byte *)(param_1 + 0x4bf) = *(byte *)(param_1 + 0x4bf) | 0x18;
  return;
}


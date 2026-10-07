
void FUN_10035d780(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint uStack_38;
  
  *param_1 = &PTR_FUN_100bbbf80;
  param_1[1] = 0;
  FUN_10036b9d0(param_1 + 2);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = param_3;
  param_1[7] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  puVar1 = operator_new(0x58);
  *puVar1 = param_2;
  puVar1[1] = 0;
  puVar1[6] = 0;
  puVar1[7] = puVar1 + 6;
  puVar1[8] = puVar1 + 6;
  puVar1[9] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 *)((long)puVar1 + 0x24) = 0;
  *(undefined8 *)((long)puVar1 + 0x1c) = 0;
  *(ulong *)((long)puVar1 + 0x14) = (ulong)uStack_38;
  *(undefined4 *)(puVar1 + 5) = 3;
  uVar2 = FUN_10070e6f0("I@video.query_wait");
  puVar1[10] = uVar2;
  param_1[1] = puVar1;
  if (*(char *)(DAT_1011c8478 + 0x32) == '\0') {
    if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
      (*DAT_1011c67f0)(0x8e4d);
    }
    else {
      (*DAT_1011c67e8)(0x8e4d);
    }
  }
  return;
}



void FUN_100351930(uint *param_1)

{
  uint uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  uint uVar5;
  uint local_2c;
  
  param_1[6] = 0;
  param_1[7] = 0;
  if (*(char *)(DAT_1011c8478 + 0x3e) == '\0') {
    local_2c = 0x10;
    (*DAT_1011c6048)(0x8b4d,&local_2c);
    *param_1 = local_2c;
    (*DAT_1011c6048)(0x8872,&local_2c);
    param_1[1] = local_2c;
    (*DAT_1011c6048)(0x8b4c,&local_2c);
    param_1[2] = local_2c;
    (*DAT_1011c6048)(0x8c29,&local_2c);
    uVar5 = *param_1;
    uVar1 = local_2c;
  }
  else {
    param_1[2] = 0x10;
    param_1[0] = 0x10;
    param_1[1] = 0x10;
    uVar5 = 0x10;
    uVar1 = 0x10;
  }
  param_1[3] = uVar1;
  uVar4 = (ulong)uVar5;
  puVar2 = operator_new__(uVar4 * 0x18 + 8);
  *puVar2 = uVar4;
  puVar2 = puVar2 + 1;
  if (uVar5 != 0) {
    puVar3 = puVar2;
    do {
      *(undefined4 *)puVar3 = 0;
      puVar3[1] = 0;
      *(undefined4 *)(puVar3 + 2) = 0;
      puVar3 = puVar3 + 3;
    } while (puVar3 != puVar2 + uVar4 * 3);
  }
  *(ulong **)(param_1 + 4) = puVar2;
  return;
}


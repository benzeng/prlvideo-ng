
undefined8 FUN_100c03910(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)(param_2 + 7);
  uVar2 = (ulong)(uint)param_2[0x17];
  *(undefined1 *)((long)param_2 + uVar2 + 0x1c) = 0x80;
  uVar3 = uVar2 + 1;
  if (0x38 < uVar3) {
    ___bzero(uVar3 + (long)puVar1,0x3f - uVar2);
    FUN_100c02440(param_2,puVar1,1);
    uVar3 = 0;
  }
  ___bzero((long)puVar1 + uVar3,0x38 - uVar3);
  param_2[0x15] = param_2[5];
  param_2[0x16] = param_2[6];
  FUN_100c02440(param_2,puVar1,1);
  param_2[0x17] = 0;
  *(undefined8 *)(param_2 + 0x15) = 0;
  *(undefined8 *)(param_2 + 0x13) = 0;
  *(undefined8 *)(param_2 + 0x11) = 0;
  *(undefined8 *)(param_2 + 0xf) = 0;
  *(undefined8 *)(param_2 + 0xd) = 0;
  *(undefined8 *)(param_2 + 0xb) = 0;
  *(undefined8 *)(param_2 + 9) = 0;
  *puVar1 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return 1;
}


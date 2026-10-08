
undefined8 FUN_100bf92e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  
  puVar1 = (undefined8 *)(param_2 + 6);
  uVar2 = (ulong)(uint)param_2[0x16];
  *(undefined1 *)((long)param_2 + uVar2 + 0x18) = 0x80;
  uVar3 = uVar2 + 1;
  if (0x38 < uVar3) {
    ___bzero(uVar3 + (long)puVar1,0x3f - uVar2);
    FUN_100bf8cd0(param_2,puVar1,1);
    uVar3 = 0;
  }
  ___bzero((long)puVar1 + uVar3,0x38 - uVar3);
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_100bf8cd0(param_2,puVar1,1);
  param_2[0x16] = 0;
  *(undefined8 *)(param_2 + 0x14) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0xe) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *puVar1 = 0;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  return 1;
}


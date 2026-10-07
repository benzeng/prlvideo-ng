
void FUN_100423f40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(param_2 + 2);
  uVar4 = uVar5 >> 3 & 0x3f;
  puVar1 = param_2 + 3;
  lVar2 = (long)param_2 + (ulong)uVar4 + 0x19;
  *(undefined1 *)((long)param_2 + (ulong)uVar4 + 0x18) = 0x80;
  uVar4 = uVar4 ^ 0x3f;
  if (uVar4 < 8) {
    ___bzero(lVar2,uVar4);
    FUN_100423870(param_2,puVar1);
    param_2[9] = 0;
    param_2[8] = 0;
    param_2[7] = 0;
    param_2[6] = 0;
    param_2[5] = 0;
    param_2[4] = 0;
    *puVar1 = 0;
    uVar5 = *(uint *)(param_2 + 2);
  }
  else {
    ___bzero(lVar2,uVar4 - 8);
  }
  *(uint *)(param_2 + 10) = uVar5;
  *(undefined4 *)((long)param_2 + 0x54) = *(undefined4 *)((long)param_2 + 0x14);
  FUN_100423870(param_2,puVar1);
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_2[10] = 0;
  param_2[9] = 0;
  param_2[8] = 0;
  param_2[7] = 0;
  param_2[6] = 0;
  param_2[5] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}


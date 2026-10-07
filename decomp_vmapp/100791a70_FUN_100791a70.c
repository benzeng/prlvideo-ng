
void FUN_100791a70(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 8) = param_2;
  *(uint *)((long)param_1 + 0x4c) = param_3;
  uVar1 = 1;
  if (1 < param_3) {
    uVar1 = param_3;
  }
  uVar2 = 1;
  if (1 < param_3) {
    uVar2 = (ulong)param_3;
  }
  if (uVar1 != 0) {
    uVar3 = 0;
    do {
      *(undefined4 *)(param_1 + uVar2 + uVar3 + 0x10) = 0;
      *(undefined4 *)((long)param_1 + uVar3 * 8 + uVar2 * 8 + 0x84) = 0;
      if (uVar3 != 0) {
        param_1[uVar3 + 0x10] = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}


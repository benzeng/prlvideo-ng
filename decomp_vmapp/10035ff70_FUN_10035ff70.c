
void FUN_10035ff70(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  FUN_10035d780();
  *param_1 = &PTR_FUN_100bbbfb8;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  pvVar1 = operator_new(0x278);
  FUN_100351610(pvVar1);
  param_1[0x13] = pvVar1;
  puVar2 = operator_new(0x10);
  *puVar2 = 0;
  puVar2[1] = param_1 + 0x19;
  param_1[0x14] = puVar2;
  pvVar3 = operator_new(0xf8);
  FUN_100398060(pvVar3,pvVar1);
  param_1[0x17] = pvVar3;
  if (*(uint *)(DAT_1011c8478 + 4) < 0x140) {
    pvVar1 = operator_new(0x268);
    FUN_100368d60(pvVar1,param_1[1]);
  }
  else {
    pvVar1 = operator_new(0x270);
    FUN_100369f50(pvVar1,param_1[1]);
  }
  param_1[0x15] = pvVar1;
  pvVar1 = operator_new(0x1500);
  puVar2 = param_1 + 2;
  FUN_10036ddd0(pvVar1,param_1[0x17],param_1[0x13],puVar2);
  param_1[0x18] = pvVar1;
  pvVar3 = operator_new(0xf0);
  FUN_10038ad70(pvVar3,param_1[7],puVar2,pvVar1,param_1[1],param_1[0x13],param_1 + 8,param_1[0x14]);
  param_1[4] = pvVar3;
  pvVar1 = operator_new(0x90);
  FUN_100385120(pvVar1,param_1[7],param_1 + 8,param_1[0x13],param_1[0x14]);
  param_1[0x12] = pvVar1;
  param_1[5] = pvVar1;
  pvVar3 = operator_new(0x18);
  FUN_10037e0e0(pvVar3,pvVar1,param_1[0x18],param_1[6],param_1[0x17],puVar2,param_1[0x13],
                param_1 + 0x19);
  param_1[0x16] = pvVar3;
  uVar4 = 0x8ca2;
  if (*(int *)(DAT_1011c8478 + 0x70) != 1) {
    uVar4 = 0x8ca1;
  }
  (*DAT_1011c6730)(36000,uVar4);
  (*DAT_1011c5e28)(0x901);
  return;
}



void FUN_10082ec50(uint *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = (param_1[1] >> 4 ^ *param_1) & 0xf0f0f0f;
  uVar2 = *param_1 ^ uVar1;
  uVar1 = uVar1 << 4 ^ param_1[1];
  uVar3 = uVar1 & 0xffff ^ uVar2 >> 0x10;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar3 << 0x10 ^ uVar2;
  uVar3 = (uVar1 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar3;
  uVar1 = uVar3 << 2 ^ uVar1;
  uVar3 = (uVar2 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar3 << 8 ^ uVar2;
  uVar3 = (uVar1 >> 1 ^ uVar2) & 0x55555555;
  *param_1 = uVar2 ^ uVar3;
  param_1[1] = uVar3 * 2 ^ uVar1;
  FUN_10082dab0(param_1,param_2,1);
  FUN_10082dab0(param_1,param_3,0);
  FUN_10082dab0(param_1,param_4,1);
  uVar1 = (param_1[1] >> 1 ^ *param_1) & 0x55555555;
  uVar2 = *param_1 ^ uVar1;
  uVar1 = uVar1 * 2 ^ param_1[1];
  uVar3 = (uVar2 >> 8 ^ uVar1) & 0xff00ff;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar3 << 8 ^ uVar2;
  uVar3 = (uVar1 >> 2 ^ uVar2) & 0x33333333;
  uVar2 = uVar2 ^ uVar3;
  uVar1 = uVar3 << 2 ^ uVar1;
  uVar3 = uVar1 & 0xffff ^ uVar2 >> 0x10;
  uVar1 = uVar1 ^ uVar3;
  uVar2 = uVar3 << 0x10 ^ uVar2;
  uVar3 = (uVar1 >> 4 ^ uVar2) & 0xf0f0f0f;
  *param_1 = uVar2 ^ uVar3;
  param_1[1] = uVar3 << 4 ^ uVar1;
  return;
}


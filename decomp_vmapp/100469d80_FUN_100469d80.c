
void FUN_100469d80(uint *param_1,uint param_2,uint param_3,uint *param_4)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[8] = param_2;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  uVar7 = (ulong)*param_4;
  std::string::__init((char *)&local_60,(ulong)(param_4 + 1));
  local_38 = local_50;
  local_40 = local_58;
  local_48 = local_60;
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  uVar4 = *(undefined8 *)(param_1 + 10);
  uVar5 = *(undefined8 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = local_50;
  *(undefined8 *)(param_1 + 0xc) = local_58;
  *(undefined8 *)(param_1 + 10) = local_60;
  local_60 = uVar4;
  local_58 = uVar5;
  local_50 = uVar3;
  std::string::~string((string *)&local_60);
  uVar6 = (ulong)*(uint *)(uVar7 + 4 + (long)param_4);
  lVar1 = uVar7 + uVar6;
  param_1[0x10] = *(uint *)((long)param_4 + lVar1 + 8);
  uVar2 = *(uint *)((long)param_4 + lVar1 + 0xc);
  param_1[0x11] = uVar2;
  lVar1 = (long)param_4 + lVar1 + 0x10;
  *param_1 = param_3;
  if (param_3 < 2) {
    *(long *)(param_1 + 0x12) = lVar1;
  }
  else if (param_3 == 2) {
    FUN_10046a340(param_1 + 2,lVar1,(long)param_4 + (ulong)uVar2 + uVar7 + 0x10 + uVar6);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_1 + 2);
  }
  return;
}


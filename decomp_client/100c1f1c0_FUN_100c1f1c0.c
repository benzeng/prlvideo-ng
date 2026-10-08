
void FUN_100c1f1c0(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,long param_5,
                  uint *param_6,code *param_7)

{
  ulong uVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  byte *pbVar8;
  bool bVar9;
  byte *local_40;
  
  uVar4 = (ulong)*param_6;
  if (param_3 != 0) {
    do {
      if ((int)uVar4 == 0) break;
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)(param_5 + uVar4) ^ bVar2;
      param_2 = param_2 + 1;
      uVar4 = (ulong)((int)uVar4 + 1U & 0xf);
      bVar9 = param_3 != 1;
      param_3 = param_3 - 1;
    } while (bVar9);
  }
  local_40 = param_2;
  if (0xf < param_3) {
    uVar1 = param_3 - 0x10;
    uVar3 = uVar1 & 0xfffffffffffffff0;
    local_40 = param_2 + uVar3 + 0x10;
    pbVar8 = param_1;
    do {
      (*param_7)(param_5,param_5,param_4);
      uVar6 = (uint)uVar4;
      if (uVar6 < 0x10) {
        uVar7 = uVar4;
        if (((0xf - uVar6 >> 3) + 1 & 1) != 0) {
          *(ulong *)(param_2 + uVar4) = *(ulong *)(param_5 + uVar4) ^ *(ulong *)(pbVar8 + uVar4);
          uVar7 = (ulong)(uVar6 + 8);
          uVar4 = uVar4 + 8;
        }
        if (0xf - uVar6 >> 3 != 0) {
          lVar5 = uVar4 + 8;
          do {
            *(ulong *)(param_2 + lVar5 + -8) =
                 *(ulong *)(param_5 + -8 + lVar5) ^ *(ulong *)(pbVar8 + lVar5 + -8);
            *(ulong *)(param_2 + lVar5) = *(ulong *)(param_5 + lVar5) ^ *(ulong *)(pbVar8 + lVar5);
            uVar6 = (int)uVar7 + 0x10;
            uVar7 = (ulong)uVar6;
            lVar5 = lVar5 + 0x10;
          } while (uVar6 < 0x10);
        }
      }
      param_3 = param_3 - 0x10;
      param_2 = param_2 + 0x10;
      pbVar8 = pbVar8 + 0x10;
      uVar4 = 0;
    } while (0xf < param_3);
    param_1 = param_1 + uVar3 + 0x10;
    param_3 = uVar1 - uVar3;
    uVar4 = 0;
  }
  uVar6 = (uint)uVar4;
  if (param_3 != 0) {
    (*param_7)(param_5,param_5,param_4);
    uVar6 = (int)param_3 + uVar6;
    do {
      param_3 = param_3 - 1;
      local_40[uVar4] = *(byte *)(param_5 + uVar4) ^ param_1[uVar4];
      uVar4 = (ulong)((int)uVar4 + 1);
    } while (param_3 != 0);
  }
  *param_6 = uVar6;
  return;
}


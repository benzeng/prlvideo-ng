
void FUN_100c1e390(ulong *param_1,ulong *param_2,ulong param_3,undefined8 param_4,char *param_5,
                  ulong *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  bool bVar8;
  ulong *local_50;
  
  uVar7 = (ulong)*param_7;
  if (param_3 != 0) {
    do {
      if ((int)uVar7 == 0) break;
      uVar3 = *param_1;
      param_1 = (ulong *)((long)param_1 + 1);
      *(byte *)param_2 = *(byte *)((long)param_6 + uVar7) ^ (byte)uVar3;
      param_2 = (ulong *)((long)param_2 + 1);
      uVar7 = (ulong)((int)uVar7 + 1U & 0xf);
      bVar8 = param_3 != 1;
      param_3 = param_3 - 1;
    } while (bVar8);
  }
  local_50 = param_2;
  if (0xf < param_3) {
    uVar7 = param_3 - 0x10;
    uVar3 = uVar7 & 0xfffffffffffffff0;
    local_50 = (ulong *)((long)param_2 + uVar3 + 0x10);
    puVar6 = param_1;
    do {
      (*param_8)(param_5,param_6,param_4);
      bVar1 = param_5[0xf];
      param_5[0xf] = (char)(bVar1 + 1);
      uVar4 = (uint)(byte)param_5[0xe] + (bVar1 + 1 >> 8);
      param_5[0xe] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[0xd] + (uVar4 >> 8);
      param_5[0xd] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[0xc] + (uVar4 >> 8);
      param_5[0xc] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[0xb] + (uVar4 >> 8);
      param_5[0xb] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[10] + (uVar4 >> 8);
      param_5[10] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[9] + (uVar4 >> 8);
      param_5[9] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[8] + (uVar4 >> 8);
      param_5[8] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[7] + (uVar4 >> 8);
      param_5[7] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[6] + (uVar4 >> 8);
      param_5[6] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[5] + (uVar4 >> 8);
      param_5[5] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[4] + (uVar4 >> 8);
      param_5[4] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[3] + (uVar4 >> 8);
      param_5[3] = (char)uVar4;
      uVar4 = (uint)(byte)param_5[2] + (uVar4 >> 8);
      param_5[2] = (char)uVar4;
      iVar2 = (uint)(byte)param_5[1] + (uVar4 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
      *param_2 = *param_6 ^ *puVar6;
      param_2[1] = param_6[1] ^ puVar6[1];
      param_3 = param_3 - 0x10;
      puVar6 = puVar6 + 2;
      param_2 = param_2 + 2;
    } while (0xf < param_3);
    param_1 = (ulong *)((long)param_1 + uVar3 + 0x10);
    param_3 = uVar7 - uVar3;
    uVar7 = 0;
  }
  uVar4 = (uint)uVar7;
  if (param_3 != 0) {
    (*param_8)(param_5,param_6,param_4);
    bVar1 = param_5[0xf];
    param_5[0xf] = (char)(bVar1 + 1);
    uVar5 = (uint)(byte)param_5[0xe] + (bVar1 + 1 >> 8);
    param_5[0xe] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[0xd] + (uVar5 >> 8);
    param_5[0xd] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[0xc] + (uVar5 >> 8);
    param_5[0xc] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[0xb] + (uVar5 >> 8);
    param_5[0xb] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[10] + (uVar5 >> 8);
    param_5[10] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[9] + (uVar5 >> 8);
    param_5[9] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[8] + (uVar5 >> 8);
    param_5[8] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[7] + (uVar5 >> 8);
    param_5[7] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[6] + (uVar5 >> 8);
    param_5[6] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[5] + (uVar5 >> 8);
    param_5[5] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[4] + (uVar5 >> 8);
    param_5[4] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[3] + (uVar5 >> 8);
    param_5[3] = (char)uVar5;
    uVar5 = (uint)(byte)param_5[2] + (uVar5 >> 8);
    param_5[2] = (char)uVar5;
    iVar2 = (uint)(byte)param_5[1] + (uVar5 >> 8);
    param_5[1] = (char)iVar2;
    *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    uVar4 = (int)param_3 + uVar4;
    do {
      param_3 = param_3 - 1;
      *(byte *)((long)local_50 + uVar7) =
           *(byte *)((long)param_6 + uVar7) ^ *(byte *)((long)param_1 + uVar7);
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (param_3 != 0);
  }
  *param_7 = uVar4;
  return;
}


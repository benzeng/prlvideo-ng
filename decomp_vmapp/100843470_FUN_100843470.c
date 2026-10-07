
void FUN_100843470(byte *param_1,byte *param_2,ulong param_3,undefined8 param_4,char *param_5,
                  undefined8 *param_6,uint *param_7,code *param_8)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  bool bVar11;
  
  uVar10 = (ulong)*param_7;
  if ((*param_7 != 0) && (uVar4 = param_3, param_3 != 0)) {
    do {
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = *(byte *)((long)param_6 + uVar10) ^ bVar1;
      param_2 = param_2 + 1;
      param_3 = uVar4 - 1;
      uVar9 = (int)uVar10 + 1U & 0xf;
      uVar10 = (ulong)uVar9;
      if (uVar9 == 0) break;
      bVar11 = uVar4 != 1;
      uVar4 = param_3;
    } while (bVar11);
  }
  uVar3 = (uint)uVar10;
  uVar9 = *(uint *)(param_5 + 0xc);
  uVar9 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
  for (; 0xf < param_3; param_3 = param_3 + lVar8 * -0x10) {
    uVar4 = param_3 >> 4;
    iVar2 = (int)uVar4;
    if (0x10000000 < uVar4) {
      uVar4 = 0x10000000;
      iVar2 = 0x10000000;
    }
    uVar9 = iVar2 + uVar9;
    uVar5 = (ulong)uVar9;
    if (uVar5 < uVar4) {
      uVar9 = 0;
    }
    uVar7 = 0;
    if (uVar5 < uVar4) {
      uVar7 = uVar5;
    }
    lVar8 = uVar4 - uVar7;
    (*param_8)(param_1,param_2,lVar8,param_4,param_5);
    *(uint *)(param_5 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
    if (uVar9 == 0) {
      bVar1 = param_5[0xb];
      param_5[0xb] = (char)(bVar1 + 1);
      uVar6 = (uint)(byte)param_5[10] + (bVar1 + 1 >> 8);
      param_5[10] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[9] + (uVar6 >> 8);
      param_5[9] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[8] + (uVar6 >> 8);
      param_5[8] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[7] + (uVar6 >> 8);
      param_5[7] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[6] + (uVar6 >> 8);
      param_5[6] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[5] + (uVar6 >> 8);
      param_5[5] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[4] + (uVar6 >> 8);
      param_5[4] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[3] + (uVar6 >> 8);
      param_5[3] = (char)uVar6;
      uVar6 = (uint)(byte)param_5[2] + (uVar6 >> 8);
      param_5[2] = (char)uVar6;
      iVar2 = (uint)(byte)param_5[1] + (uVar6 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    }
    param_2 = param_2 + lVar8 * 0x10;
    param_1 = param_1 + lVar8 * 0x10;
  }
  if (param_3 != 0) {
    param_6[1] = 0;
    *param_6 = 0;
    (*param_8)(param_6,param_6,1,param_4,param_5);
    uVar9 = uVar9 + 1;
    *(uint *)(param_5 + 0xc) =
         uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 * 0x1000000;
    if (uVar9 == 0) {
      bVar1 = param_5[0xb];
      param_5[0xb] = (char)(bVar1 + 1);
      uVar9 = (uint)(byte)param_5[10] + (bVar1 + 1 >> 8);
      param_5[10] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[9] + (uVar9 >> 8);
      param_5[9] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[8] + (uVar9 >> 8);
      param_5[8] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[7] + (uVar9 >> 8);
      param_5[7] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[6] + (uVar9 >> 8);
      param_5[6] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[5] + (uVar9 >> 8);
      param_5[5] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[4] + (uVar9 >> 8);
      param_5[4] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[3] + (uVar9 >> 8);
      param_5[3] = (char)uVar9;
      uVar9 = (uint)(byte)param_5[2] + (uVar9 >> 8);
      param_5[2] = (char)uVar9;
      iVar2 = (uint)(byte)param_5[1] + (uVar9 >> 8);
      param_5[1] = (char)iVar2;
      *param_5 = *param_5 + (char)((uint)iVar2 >> 8);
    }
    uVar3 = (int)param_3 + uVar3;
    do {
      param_3 = param_3 - 1;
      param_2[uVar10] = *(byte *)((long)param_6 + uVar10) ^ param_1[uVar10];
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (param_3 != 0);
  }
  *param_7 = uVar3;
  return;
}


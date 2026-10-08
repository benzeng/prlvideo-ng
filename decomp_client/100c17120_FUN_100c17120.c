
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c17120(ulong *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  
  uVar8 = *param_1 >> 0x10 & 0xffff;
  uVar2 = *param_2 * uVar8;
  if (uVar2 == 0) {
    uVar9 = (1 - *param_2) - (int)uVar8;
  }
  else {
    lVar10 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar6 = (ulong)param_2[2] + (param_1[1] >> 0x10);
  uVar8 = param_1[1] & 0xffff;
  uVar2 = param_2[3] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[3]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar7 = (ulong)param_2[1] + *param_1;
  uVar1 = ((uint)uVar6 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[4] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[4]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar7) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[5];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[5]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[6];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[6]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar7 = (ulong)param_2[8] + (uVar2 + uVar3 ^ uVar7);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[9] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[9]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar6 = (ulong)param_2[7] + (uVar3 ^ uVar6);
  uVar1 = ((uint)uVar7 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[10] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[10]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar6) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0xb];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0xb]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0xc];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0xc]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar6 = (ulong)param_2[0xe] + (uVar2 + uVar3 ^ uVar6);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0xf] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0xf]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar7 = (ulong)param_2[0xd] + (uVar3 ^ uVar7);
  uVar1 = ((uint)uVar6 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x10] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x10]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar7) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x11];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x11]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x12];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0x12]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar7 = (ulong)param_2[0x14] + (uVar2 + uVar3 ^ uVar7);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0x15] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x15]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar6 = (ulong)param_2[0x13] + (uVar3 ^ uVar6);
  uVar1 = ((uint)uVar7 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x16] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x16]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar6) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x17];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x17]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x18];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0x18]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar6 = (ulong)param_2[0x1a] + (uVar2 + uVar3 ^ uVar6);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0x1b] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x1b]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar7 = (ulong)param_2[0x19] + (uVar3 ^ uVar7);
  uVar1 = ((uint)uVar6 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x1c] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x1c]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar7) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x1d];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x1d]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x1e];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0x1e]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar7 = (ulong)param_2[0x20] + (uVar2 + uVar3 ^ uVar7);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0x21] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x21]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar6 = (ulong)param_2[0x1f] + (uVar3 ^ uVar6);
  uVar1 = ((uint)uVar7 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x22] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x22]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar6) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x23];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x23]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x24];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0x24]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar6 = (ulong)param_2[0x26] + (uVar2 + uVar3 ^ uVar6);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0x27] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x27]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar7 = (ulong)param_2[0x25] + (uVar3 ^ uVar7);
  uVar1 = ((uint)uVar6 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x28] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x28]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar7) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x29];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x29]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x2a];
  if (uVar4 == 0) {
    uVar9 = (1 - param_2[0x2a]) - uVar9;
  }
  else {
    lVar10 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar9 = (int)lVar10 - (int)((ulong)lVar10 >> 0x10);
  }
  uVar7 = (ulong)param_2[0x2c] + (uVar2 + uVar3 ^ uVar7);
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar2 = param_2[0x2d] * uVar8;
  if (uVar2 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x2d]);
  }
  else {
    uVar8 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar6 = (ulong)param_2[0x2b] + (uVar3 ^ uVar6);
  uVar1 = ((uint)uVar7 ^ uVar9) & 0xffff;
  uVar2 = (ulong)param_2[0x2e] * (ulong)uVar1;
  if (uVar2 == 0) {
    uVar2 = (ulong)((1 - uVar1) - param_2[0x2e]);
  }
  else {
    uVar2 = (uVar2 & 0xffff) - (uVar2 >> 0x10);
    uVar2 = uVar2 - (uVar2 >> 0x10);
  }
  uVar1 = ((uint)uVar8 ^ (uint)uVar6) + (int)uVar2 & 0xffff;
  uVar3 = (ulong)uVar1 * (ulong)param_2[0x2f];
  if (uVar3 == 0) {
    uVar3 = (ulong)((1 - param_2[0x2f]) - uVar1);
  }
  else {
    uVar3 = (uVar3 & 0xffff) - (uVar3 >> 0x10);
    uVar3 = uVar3 - (uVar3 >> 0x10);
  }
  uVar9 = (uVar9 ^ (uint)uVar3) & 0xffff;
  uVar4 = (ulong)uVar9 * (ulong)param_2[0x30];
  if (uVar4 == 0) {
    uVar4 = (ulong)((1 - param_2[0x30]) - uVar9);
  }
  else {
    uVar4 = (uVar4 & 0xffff) - (uVar4 >> 0x10);
    uVar4 = uVar4 - (uVar4 >> 0x10);
  }
  uVar8 = (uVar8 ^ uVar2 + uVar3) & 0xffff;
  uVar5 = param_2[0x33] * uVar8;
  if (uVar5 == 0) {
    uVar8 = (ulong)((1 - (int)uVar8) - param_2[0x33]);
  }
  else {
    uVar8 = (uVar5 & 0xffff) - (uVar5 >> 0x10);
    uVar8 = uVar8 - (uVar8 >> 0x10);
  }
  uVar8 = uVar8 & _UNK_101da82c8;
  uVar7 = ((ulong)param_2[0x32] + (uVar7 ^ uVar3)) * 0x10000 & _UNK_101da82d8;
  *param_1 = uVar4 << 0x10 & _DAT_101da82d0 |
             (ulong)param_2[0x31] + (uVar2 + uVar3 ^ uVar6) & _DAT_101da82c0;
  param_1[1] = uVar7 | uVar8;
  return;
}


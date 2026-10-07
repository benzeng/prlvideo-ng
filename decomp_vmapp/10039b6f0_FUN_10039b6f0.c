
void FUN_10039b6f0(byte *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *param_1 = 0;
  if (param_2 != param_3) {
    uVar3 = FUN_10038e210(param_2);
    uVar4 = FUN_10038e210(param_3);
    uVar6 = uVar4 + 3;
    if (uVar3 <= uVar4) {
      uVar6 = uVar4;
    }
    bVar5 = *param_1 & 0xfc | (char)uVar6 - (char)uVar3 & 3U;
    *param_1 = bVar5;
    uVar8 = *(uint *)(&DAT_100b3ee34 + (ulong)param_2 * 8) >> 8;
    uVar7 = uVar8 & 0xff;
    uVar6 = *(uint *)(&DAT_100b3ee34 + (ulong)param_3 * 8) >> 8 & 0xff;
    if (uVar3 == uVar4) {
      if (uVar6 == 8) {
        return;
      }
      if (uVar7 == 8) {
        return;
      }
      if (uVar7 == uVar6) {
        return;
      }
    }
    else {
      if (uVar7 == 8) {
        return;
      }
      if (uVar6 == 8) {
        return;
      }
    }
    if ((uVar7 < 8) && ((0x8cU >> (uVar8 & 0x1f) & 1) != 0)) {
      bVar5 = bVar5 | 8;
      *param_1 = bVar5;
    }
    if (uVar4 == 0 && uVar3 == 0) {
      if (uVar7 == 6) {
        return;
      }
      if ((uVar6 == 3) || (uVar6 == 5)) {
        bVar1 = 0x17;
        if (uVar7 != 7) {
          bVar1 = 7;
        }
        bVar5 = bVar5 | bVar1;
      }
      else {
        bVar1 = 0x13;
        if (uVar6 != 7) {
          bVar1 = 3;
        }
        bVar2 = 0x13;
        if (uVar7 != 7) {
          bVar2 = bVar1;
        }
        bVar5 = bVar5 | bVar2;
        *param_1 = bVar5;
        if (uVar6 != 7) {
          return;
        }
        *param_1 = bVar5 | 0x20;
        if (uVar7 != 3) {
          return;
        }
        bVar5 = bVar5 | 0x24;
      }
    }
    else if ((uVar3 == 0) || (uVar4 == 0)) {
      if (uVar3 == 0) {
        uVar6 = uVar7;
      }
      if (uVar6 - 3 < 3) {
        bVar5 = bVar5 | 4;
        *param_1 = bVar5;
      }
      if ((uVar6 != 4) && (uVar6 != 7)) {
        return;
      }
      bVar5 = bVar5 | 0x10;
    }
    else {
      if ((uVar8 & 0xfe) != 4) {
        return;
      }
      bVar5 = bVar5 | 4;
    }
    *param_1 = bVar5;
  }
  return;
}


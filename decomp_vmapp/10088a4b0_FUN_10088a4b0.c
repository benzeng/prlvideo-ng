
ulong FUN_10088a4b0(long param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  
  bVar7 = *param_2;
  while (-1 < (char)bVar7) {
    if ((param_3 < 1) || (bVar7 != 9 && bVar7 != 0x20)) break;
    param_3 = param_3 + -1;
    pbVar1 = param_2 + 1;
    param_2 = param_2 + 1;
    bVar7 = *pbVar1;
  }
  pbVar1 = param_2 + (param_3 + -1);
  uVar2 = (long)param_3;
  do {
    uVar3 = uVar2;
    if ((long)uVar3 < 4) break;
    bVar6 = 0xff;
    if (-1 < (char)*pbVar1) {
      bVar6 = (&DAT_100b59b60)[*pbVar1];
    }
    pbVar1 = pbVar1 + -1;
    uVar2 = uVar3 - 1;
  } while ((bVar6 | 0x13) == 0xf3);
  if ((uVar3 & 3) == 0) {
    uVar2 = 0;
    lVar4 = 4;
    if (0 < (int)uVar3) {
      while( true ) {
        bVar5 = 0xff;
        bVar6 = 0xff;
        if (-1 < (char)bVar7) {
          bVar6 = (&DAT_100b59b60)[bVar7];
        }
        if (-1 < (char)param_2[lVar4 + -3]) {
          bVar5 = (&DAT_100b59b60)[param_2[lVar4 + -3]];
        }
        bVar8 = 0xff;
        bVar7 = 0xff;
        if (-1 < (char)param_2[lVar4 + -2]) {
          bVar7 = (&DAT_100b59b60)[param_2[lVar4 + -2]];
        }
        if (-1 < (char)param_2[lVar4 + -1]) {
          bVar8 = (&DAT_100b59b60)[param_2[lVar4 + -1]];
        }
        if ((char)(bVar5 | bVar6 | bVar7 | bVar8) < '\0') {
          return 0xffffffff;
        }
        *(byte *)(param_1 + uVar2) =
             (byte)(((uint)bVar6 << 0x12) >> 0x10) | (byte)(((uint)bVar5 << 0xc) >> 0x10);
        *(byte *)(param_1 + 1 + uVar2) =
             (byte)(((uint)bVar5 << 0xc) >> 8) | (byte)(((uint)bVar7 << 6) >> 8);
        *(byte *)(param_1 + 2 + uVar2) = bVar8 | (byte)((uint)bVar7 << 6);
        if ((int)uVar3 <= (int)lVar4) break;
        bVar7 = param_2[lVar4];
        uVar2 = uVar2 + 3;
        lVar4 = lVar4 + 4;
      }
      uVar2 = (ulong)((int)uVar2 + 3);
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



byte * FUN_1008c46f0(byte *param_1,long *param_2)

{
  byte bVar1;
  uint uVar2;
  __darwin_ct_rune_t _Var3;
  size_t sVar4;
  byte *pbVar5;
  byte bVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte bVar11;
  
  if (param_1 == (byte *)0x0) {
    uVar8 = 0x6b;
    uVar10 = 0x1ba;
  }
  else {
    sVar4 = _strlen((char *)param_1);
    pbVar5 = (byte *)FUN_10081ddd0((int)sVar4 >> 1,"v3_utl.c",0x1bd);
    pbVar7 = pbVar5;
    if (pbVar5 == (byte *)0x0) {
      uVar8 = 0x41;
      uVar10 = 0x1ed;
    }
    else {
      while( true ) {
        do {
          pbVar9 = param_1;
          bVar6 = *pbVar9;
          if (bVar6 == 0) {
            if (param_2 != (long *)0x0) {
              *param_2 = (long)pbVar7 - (long)pbVar5;
              return pbVar5;
            }
            return pbVar5;
          }
          param_1 = pbVar9 + 1;
        } while (bVar6 == 0x3a);
        bVar11 = pbVar9[1];
        if (bVar11 == 0) {
          FUN_100887ce0(0x22,0x71,0x70,"v3_utl.c",0x1cb);
          FUN_10081e1a0(pbVar5);
          return (byte *)0x0;
        }
        if ((char)bVar6 < '\0') {
          uVar2 = ___maskrune((uint)bVar6,0x8000);
        }
        else {
          uVar2 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (ulong)bVar6 * 4 + 0x3c) & 0x8000;
        }
        if (uVar2 != 0) {
          _Var3 = ___tolower((uint)bVar6);
          bVar6 = (byte)_Var3;
        }
        if ((char)bVar11 < '\0') {
          uVar2 = ___maskrune((uint)bVar11,0x8000);
        }
        else {
          uVar2 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (ulong)bVar11 * 4 + 0x3c) & 0x8000;
        }
        if (uVar2 != 0) {
          _Var3 = ___tolower((uint)bVar11);
          bVar11 = (byte)_Var3;
        }
        bVar1 = bVar6 - 0x30;
        if (9 < bVar1) break;
LAB_1008c4832:
        bVar6 = bVar11 - 0x30;
        if (9 < bVar6) {
          if (5 < (byte)(bVar11 + 0x9f)) goto LAB_1008c48cd;
          bVar6 = bVar11 + 0xa9;
        }
        *pbVar7 = bVar1 << 4 | bVar6;
        pbVar7 = pbVar7 + 1;
        param_1 = pbVar9 + 2;
      }
      if ((byte)(bVar6 + 0x9f) < 6) {
        bVar1 = bVar6 + 0xa9;
        goto LAB_1008c4832;
      }
LAB_1008c48cd:
      FUN_10081e1a0(pbVar5);
      uVar8 = 0x71;
      uVar10 = 0x1f2;
    }
  }
  FUN_100887ce0(0x22,0x71,uVar8,"v3_utl.c",uVar10);
  return (byte *)0x0;
}


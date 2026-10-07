
undefined8 * FUN_1008ad360(long param_1,long param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  __darwin_ct_rune_t _Var5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  
  pbVar6 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar6 = (byte *)FUN_10087d050();
    puVar3 = PTR___DefaultRuneLocale_100ba20c0;
    if (pbVar6 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    bVar1 = *pbVar6;
    pbVar7 = pbVar6;
    while (bVar1 != 0) {
      if ((char)bVar1 < '\0') {
        uVar4 = ___maskrune((uint)bVar1,0x8000);
      }
      else {
        uVar4 = *(uint *)(puVar3 + (ulong)bVar1 * 4 + 0x3c) & 0x8000;
      }
      if (uVar4 != 0) {
        _Var5 = ___tolower((uint)bVar1);
        *pbVar7 = (byte)_Var5;
      }
      bVar1 = pbVar7[1];
      pbVar7 = pbVar7 + 1;
    }
  }
  pbVar7 = (byte *)0x0;
  if (param_2 != 0) {
    pbVar7 = (byte *)FUN_10087d050(param_2);
    puVar3 = PTR___DefaultRuneLocale_100ba20c0;
    if (pbVar7 == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    bVar1 = *pbVar7;
    pbVar2 = pbVar7;
    while (bVar1 != 0) {
      if ((char)bVar1 < '\0') {
        uVar4 = ___maskrune((uint)bVar1,0x8000);
      }
      else {
        uVar4 = *(uint *)(puVar3 + (ulong)bVar1 * 4 + 0x3c) & 0x8000;
      }
      if (uVar4 != 0) {
        _Var5 = ___tolower((uint)bVar1);
        *pbVar2 = (byte)_Var5;
      }
      bVar1 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
    }
  }
  puVar8 = (undefined8 *)FUN_10081ddd0(0x18,"asn_mime.c",0x33d);
  puVar10 = (undefined8 *)0x0;
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = pbVar6;
    puVar8[1] = pbVar7;
    lVar9 = FUN_100884d30(FUN_1008ad5f0);
    puVar8[2] = lVar9;
    puVar10 = puVar8;
    if (lVar9 == 0) {
      puVar10 = (undefined8 *)0x0;
    }
  }
  return puVar10;
}


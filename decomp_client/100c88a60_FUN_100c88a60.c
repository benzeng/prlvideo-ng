
void FUN_100c88a60(long param_1,long param_2,long param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  uint uVar4;
  __darwin_ct_rune_t _Var5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  
  pbVar6 = (byte *)0x0;
  if (param_2 != 0) {
    pbVar6 = (byte *)FUN_100c58250(param_2);
    puVar3 = PTR___DefaultRuneLocale_1021e1278;
    if (pbVar6 == (byte *)0x0) {
      return;
    }
    bVar1 = *pbVar6;
    pbVar2 = pbVar6;
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
  lVar7 = 0;
  if (((param_3 == 0) || (lVar7 = FUN_100c58250(param_3), lVar7 != 0)) &&
     (puVar8 = (undefined8 *)FUN_100bf3540(0x10,"asn_mime.c",0x360), puVar8 != (undefined8 *)0x0)) {
    *puVar8 = pbVar6;
    puVar8[1] = lVar7;
    FUN_100c604e0(*(undefined8 *)(param_1 + 0x10),puVar8);
    return;
  }
  return;
}


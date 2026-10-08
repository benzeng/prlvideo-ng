
int FUN_100bbf380(char *param_1,long param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  void *pvVar4;
  __darwin_ct_rune_t _Var5;
  byte bVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  
  iVar8 = 0;
  bVar2 = false;
  while( true ) {
    do {
      do {
        pcVar9 = param_1 + 1;
        cVar1 = *param_1;
        _Var5 = (__darwin_ct_rune_t)cVar1;
        if (cVar1 == '\0') {
          iVar7 = -iVar8;
          if (!bVar2) {
            iVar7 = iVar8;
          }
          return iVar7;
        }
        param_1 = pcVar9;
      } while (cVar1 == '-');
      if (cVar1 < '\0') {
        uVar3 = ___maskrune(_Var5,0x4000);
      }
      else {
        uVar3 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (long)_Var5 * 4 + 0x3c) & 0x4000;
      }
    } while (uVar3 != 0);
    if (cVar1 < '\0') {
      uVar3 = ___maskrune(_Var5,0x1000);
    }
    else {
      uVar3 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (long)_Var5 * 4 + 0x3c) & 0x1000;
    }
    if (uVar3 != 0) {
      _Var5 = ___toupper(_Var5);
    }
    if (_Var5 == 0x4f) {
      _Var5 = 0x30;
    }
    iVar7 = _Var5;
    if (_Var5 == 0x49) {
      iVar7 = 0x31;
    }
    if (_Var5 == 0x4c) {
      iVar7 = 0x31;
    }
    pvVar4 = _memchr("0123456789ABCDEFGHJKMNPQRSTVWXYZ<",iVar7,0x21);
    if (pvVar4 == (void *)0x0) break;
    if ((iVar8 < param_3 * 8) && (uVar3 = (int)pvVar4 + 0xfe25d970, uVar3 < 0x20)) {
      iVar7 = iVar8 >> 3;
      bVar6 = (byte)(1 << (~(byte)iVar8 & 7));
      if ((uVar3 & 0x10) == 0) {
        bVar6 = *(byte *)(param_2 + iVar7) & ~bVar6;
      }
      else {
        bVar6 = *(byte *)(param_2 + iVar7) | bVar6;
      }
      *(byte *)(param_2 + iVar7) = bVar6;
      iVar7 = iVar8 + 1 >> 3;
      bVar6 = (byte)(1 << (~(byte)(iVar8 + 1) & 7));
      if ((uVar3 & 8) == 0) {
        bVar6 = *(byte *)(param_2 + iVar7) & ~bVar6;
      }
      else {
        bVar6 = *(byte *)(param_2 + iVar7) | bVar6;
      }
      *(byte *)(param_2 + iVar7) = bVar6;
      iVar7 = iVar8 + 2 >> 3;
      bVar6 = (byte)(1 << (~(byte)(iVar8 + 2) & 7));
      if ((uVar3 & 4) == 0) {
        bVar6 = *(byte *)(param_2 + iVar7) & ~bVar6;
      }
      else {
        bVar6 = *(byte *)(param_2 + iVar7) | bVar6;
      }
      *(byte *)(param_2 + iVar7) = bVar6;
      iVar7 = iVar8 + 3 >> 3;
      bVar6 = (byte)(1 << (~(byte)(iVar8 + 3) & 7));
      if ((uVar3 & 2) == 0) {
        bVar6 = *(byte *)(param_2 + iVar7) & ~bVar6;
      }
      else {
        bVar6 = *(byte *)(param_2 + iVar7) | bVar6;
      }
      *(byte *)(param_2 + iVar7) = bVar6;
      iVar7 = iVar8 + 4 >> 3;
      bVar6 = (byte)(1 << (~(byte)(iVar8 + 4) & 7));
      if ((uVar3 & 1) == 0) {
        bVar6 = *(byte *)(param_2 + iVar7) & ~bVar6;
      }
      else {
        bVar6 = *(byte *)(param_2 + iVar7) | bVar6;
      }
      *(byte *)(param_2 + iVar7) = bVar6;
      iVar8 = iVar8 + 5;
    }
    else {
      iVar8 = iVar8 + 5;
      bVar2 = true;
    }
  }
  return 0;
}


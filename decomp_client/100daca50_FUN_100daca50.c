
bool FUN_100daca50(byte *param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  __darwin_ct_rune_t _Var9;
  __darwin_ct_rune_t _Var10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte bVar19;
  byte bVar20;
  byte *pbVar21;
  bool bVar22;
  
  uVar5 = param_3 & 0x10;
  uVar6 = param_3 & 4;
  uVar7 = param_3 & 2;
  uVar8 = param_3 & 1;
  pbVar17 = param_2;
  do {
    while( true ) {
      pbVar18 = param_1 + 1;
      bVar14 = *param_1;
      if (')' < (char)bVar14) break;
      if (bVar14 == 0) {
        if (((param_3 & 8) != 0) && (*pbVar17 == 0x2f)) {
          return false;
        }
        return *pbVar17 != 0;
      }
LAB_100dacabc:
      param_1 = pbVar18;
      if ((uint)bVar14 != (uint)*pbVar17) {
        if (uVar5 == 0) {
          return true;
        }
        _Var9 = ___tolower((uint)bVar14);
        _Var10 = ___tolower((uint)*pbVar17);
        if (_Var9 != _Var10) {
          return true;
        }
      }
LAB_100dacaa0:
      pbVar17 = pbVar17 + 1;
    }
    if ('Z' < (char)bVar14) {
      if (bVar14 != 0x5b) {
        if ((bVar14 == 0x5c) && (uVar8 == 0)) {
          bVar20 = param_1[1];
          if (bVar20 != 0) {
            pbVar18 = param_1 + 2;
          }
          bVar14 = 0x5c;
          if (bVar20 != 0) {
            bVar14 = bVar20;
          }
        }
        goto LAB_100dacabc;
      }
      bVar20 = *pbVar17;
      uVar16 = (uint)(char)bVar20;
      if (bVar20 == 0) {
        return true;
      }
      if (bVar20 == 0x2f) {
        if (uVar7 != 0) {
          return true;
        }
      }
      else if ((uVar6 != 0) && (bVar20 == 0x2e)) {
        if (pbVar17 == param_2) {
          return true;
        }
        if ((uVar7 != 0) && (pbVar17[-1] == 0x2f)) {
          return true;
        }
      }
      bVar1 = param_1[1];
      pbVar21 = param_1 + 2;
      if (bVar1 != 0x5e && bVar1 != 0x21) {
        pbVar21 = pbVar18;
      }
      if (uVar5 != 0) {
        uVar16 = ___tolower((uint)bVar20);
      }
      bVar20 = *pbVar21;
      bVar22 = false;
      param_1 = pbVar21 + 1;
      do {
        uVar11 = (uint)bVar20;
        pbVar15 = param_1;
        if ((uVar8 == 0) && (bVar20 == 0x5c)) {
          pbVar15 = pbVar21 + 2;
          uVar11 = (uint)*param_1;
        }
        bVar19 = (byte)uVar11;
        if (bVar19 == 0) goto LAB_100dacabc;
        if ((uVar11 == 0x2f) && (uVar7 != 0)) {
          return true;
        }
        if (uVar5 != 0) {
          _Var9 = ___tolower(uVar11);
          bVar19 = (byte)_Var9;
        }
        bVar20 = *pbVar15;
        if (bVar20 == 0x2d) {
          bVar2 = pbVar15[1];
          uVar11 = (uint)bVar2;
          if ((bVar2 == 0) || (bVar2 == 0x5d)) goto LAB_100dacda0;
          pbVar21 = pbVar15 + 2;
          if ((uVar8 == 0) && (bVar2 == 0x5c)) {
            uVar11 = (uint)pbVar15[2];
            pbVar21 = pbVar15 + 3;
          }
          cVar3 = (char)uVar11;
          if (cVar3 == '\0') goto LAB_100dacabc;
          if (uVar5 != 0) {
            _Var9 = ___tolower(uVar11);
            cVar3 = (char)_Var9;
          }
          bVar4 = true;
          if (cVar3 < (char)uVar16) {
            bVar4 = bVar22;
          }
          if ((char)bVar19 <= (char)uVar16) {
            bVar22 = bVar4;
          }
          bVar20 = *pbVar21;
        }
        else {
LAB_100dacda0:
          pbVar21 = pbVar15;
          if ((uint)bVar19 == (uVar16 & 0xff)) {
            bVar22 = true;
          }
        }
        param_1 = pbVar21 + 1;
      } while (bVar20 != 0x5d);
      if (bVar22 == (bVar1 == 0x5e || bVar1 == 0x21)) {
        return true;
      }
      goto LAB_100dacaa0;
    }
    if (bVar14 != 0x2a) {
      if (bVar14 != 0x3f) goto LAB_100dacabc;
      bVar14 = *pbVar17;
      if (bVar14 == 0) {
        return true;
      }
      param_1 = pbVar18;
      if (bVar14 == 0x2f) {
        if (uVar7 != 0) {
          return true;
        }
      }
      else if ((uVar6 != 0) && (bVar14 == 0x2e)) {
        if (pbVar17 == param_2) {
          return true;
        }
        if ((uVar7 != 0) && (pbVar17[-1] == 0x2f)) {
          return true;
        }
      }
      goto LAB_100dacaa0;
    }
    do {
      pbVar21 = pbVar18;
      bVar14 = *pbVar21;
      pbVar18 = param_1 + 2;
      param_1 = pbVar21;
    } while (bVar14 == 0x2a);
    bVar20 = *pbVar17;
    if ((uVar6 != 0) && (bVar20 == 0x2e)) {
      if (pbVar17 == param_2) {
        return true;
      }
      if ((uVar7 != 0) && (pbVar17[-1] == 0x2f)) {
        return true;
      }
    }
    if (bVar14 != 0x2f) {
      if (bVar14 == 0) {
        if (uVar7 == 0) {
          return false;
        }
        bVar22 = true;
        if ((param_3 & 8) == 0) {
          pcVar13 = _strchr((char *)pbVar17,0x2f);
          bVar22 = pcVar13 == (char *)0x0;
        }
        return (bool)(bVar22 ^ 1);
      }
LAB_100daceb8:
      if (bVar20 == 0) {
        return true;
      }
      while( true ) {
        iVar12 = FUN_100daca50(pbVar21,pbVar17,param_3 & 0xfffffffb);
        if (iVar12 == 0) {
          return false;
        }
        if ((uVar7 != 0) && (bVar20 == 0x2f)) break;
        bVar20 = pbVar17[1];
        pbVar17 = pbVar17 + 1;
        if (bVar20 == 0) {
          return true;
        }
      }
      return true;
    }
    if (uVar7 == 0) goto LAB_100daceb8;
    pbVar17 = (byte *)_strchr((char *)pbVar17,0x2f);
    if (pbVar17 == (byte *)0x0) {
      return true;
    }
  } while( true );
}



undefined8 FUN_1008c40d0(void)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  size_t sVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  undefined8 local_38;
  
  local_38 = 0;
  pbVar4 = (byte *)FUN_10087d050();
  if (pbVar4 != (byte *)0x0) {
    iVar11 = 1;
    pbVar10 = (byte *)0x0;
    pbVar9 = pbVar4;
    pbVar12 = pbVar4;
    do {
      puVar1 = PTR___DefaultRuneLocale_100ba20c0;
      bVar2 = *pbVar12;
      if (((ulong)bVar2 < 0xe) && ((0x2401UL >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
        bVar2 = *pbVar9;
        pbVar12 = (byte *)0x0;
        if (bVar2 == 0) goto LAB_1008c45a1;
        pbVar12 = (byte *)0x0;
        goto LAB_1008c44fc;
      }
      if (iVar11 == 2) {
        iVar11 = 2;
        if (bVar2 == 0x2c) {
          *pbVar12 = 0;
          puVar1 = PTR___DefaultRuneLocale_100ba20c0;
          bVar2 = *pbVar9;
          while( true ) {
            if (bVar2 == 0) goto LAB_1008c445a;
            if ((char)bVar2 < '\0') {
              uVar3 = ___maskrune((uint)bVar2,0x4000);
            }
            else {
              uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
            }
            if (uVar3 == 0) break;
            bVar2 = pbVar9[1];
            pbVar9 = pbVar9 + 1;
          }
          if (*pbVar9 == 0) goto LAB_1008c445a;
          sVar5 = _strlen((char *)pbVar9);
          if (sVar5 != 1) {
            lVar7 = sVar5 - 1;
            do {
              bVar2 = pbVar9[lVar7];
              if ((char)bVar2 < '\0') {
                uVar3 = ___maskrune((uint)bVar2,0x4000);
              }
              else {
                uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
              }
              if (uVar3 == 0) {
                pbVar9[lVar7 + 1] = 0;
                break;
              }
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          if (*pbVar9 == 0) goto LAB_1008c445a;
          FUN_1008c39e0(pbVar10,pbVar9,&local_38);
          pbVar9 = pbVar12 + 1;
          iVar11 = 1;
          pbVar10 = (byte *)0x0;
        }
      }
      else if (iVar11 == 1) {
        iVar11 = 1;
        if (bVar2 == 0x2c) {
          *pbVar12 = 0;
          bVar2 = *pbVar9;
          pbVar10 = pbVar9;
          while( true ) {
            if (bVar2 == 0) goto LAB_1008c4478;
            if ((char)bVar2 < '\0') {
              uVar3 = ___maskrune((uint)bVar2,0x4000);
            }
            else {
              uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
            }
            if (uVar3 == 0) break;
            bVar2 = pbVar10[1];
            pbVar10 = pbVar10 + 1;
          }
          if (*pbVar10 != 0) {
            sVar5 = _strlen((char *)pbVar10);
            if (sVar5 != 1) {
              lVar7 = sVar5 - 1;
              do {
                bVar2 = pbVar10[lVar7];
                if ((char)bVar2 < '\0') {
                  uVar3 = ___maskrune((uint)bVar2,0x4000);
                }
                else {
                  uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
                }
                if (uVar3 == 0) {
                  pbVar10[lVar7 + 1] = 0;
                  break;
                }
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*pbVar10 != 0) {
              pbVar9 = pbVar12 + 1;
              FUN_1008c39e0(pbVar10,0,&local_38);
              goto LAB_1008c4110;
            }
          }
LAB_1008c4478:
          uVar6 = 0x6c;
          uVar8 = 0x13f;
          goto LAB_1008c44b2;
        }
        if (bVar2 == 0x3a) {
          *pbVar12 = 0;
          bVar2 = *pbVar9;
          pbVar10 = pbVar9;
          while( true ) {
            if (bVar2 == 0) goto LAB_1008c4496;
            if ((char)bVar2 < '\0') {
              uVar3 = ___maskrune((uint)bVar2,0x4000);
            }
            else {
              uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
            }
            if (uVar3 == 0) break;
            bVar2 = pbVar10[1];
            pbVar10 = pbVar10 + 1;
          }
          if (*pbVar10 != 0) {
            sVar5 = _strlen((char *)pbVar10);
            if (sVar5 != 1) {
              lVar7 = sVar5 - 1;
              do {
                bVar2 = pbVar10[lVar7];
                if ((char)bVar2 < '\0') {
                  uVar3 = ___maskrune((uint)bVar2,0x4000);
                }
                else {
                  uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
                }
                if (uVar3 == 0) {
                  pbVar10[lVar7 + 1] = 0;
                  break;
                }
                lVar7 = lVar7 + -1;
              } while (lVar7 != 0);
            }
            if (*pbVar10 != 0) {
              pbVar9 = pbVar12 + 1;
              iVar11 = 2;
              goto LAB_1008c4110;
            }
          }
LAB_1008c4496:
          uVar6 = 0x6c;
          uVar8 = 0x132;
          goto LAB_1008c44b2;
        }
      }
LAB_1008c4110:
      pbVar12 = pbVar12 + 1;
    } while( true );
  }
  uVar6 = 0x41;
  uVar8 = 0x121;
  goto LAB_1008c4453;
  while( true ) {
    bVar2 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
    if (bVar2 == 0) break;
LAB_1008c44fc:
    if ((char)bVar2 < '\0') {
      uVar3 = ___maskrune((uint)bVar2,0x4000);
    }
    else {
      uVar3 = *(uint *)(PTR___DefaultRuneLocale_100ba20c0 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) {
      pbVar12 = (byte *)0x0;
      if (*pbVar9 != 0) {
        sVar5 = _strlen((char *)pbVar9);
        puVar1 = PTR___DefaultRuneLocale_100ba20c0;
        if (sVar5 == 1) goto LAB_1008c4590;
        lVar7 = sVar5 - 1;
        goto LAB_1008c4560;
      }
      break;
    }
  }
  goto LAB_1008c45a1;
LAB_1008c445a:
  uVar6 = 0x6d;
  uVar8 = 0x150;
LAB_1008c44b2:
  FUN_100887ce0(0x22,0x6d,uVar6,"v3_utl.c",uVar8);
  goto LAB_1008c44bb;
  while (lVar7 = lVar7 + -1, lVar7 != 0) {
LAB_1008c4560:
    bVar2 = pbVar9[lVar7];
    if ((char)bVar2 < '\0') {
      uVar3 = ___maskrune((uint)bVar2,0x4000);
    }
    else {
      uVar3 = *(uint *)(puVar1 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) {
      pbVar9[lVar7 + 1] = 0;
      break;
    }
  }
LAB_1008c4590:
  pbVar12 = (byte *)0x0;
  if (*pbVar9 != 0) {
    pbVar12 = pbVar9;
  }
LAB_1008c45a1:
  if (iVar11 == 2) {
    pbVar9 = pbVar12;
    if (pbVar12 != (byte *)0x0) {
LAB_1008c45ce:
      FUN_1008c39e0(pbVar10,pbVar9,&local_38);
      FUN_10081e1a0(pbVar4);
      return local_38;
    }
    uVar6 = 0x6d;
    uVar8 = 0x162;
  }
  else {
    if (pbVar12 != (byte *)0x0) {
      pbVar9 = (byte *)0x0;
      pbVar10 = pbVar12;
      goto LAB_1008c45ce;
    }
    uVar6 = 0x6c;
    uVar8 = 0x16c;
  }
LAB_1008c4453:
  FUN_100887ce0(0x22,0x6d,uVar6,"v3_utl.c",uVar8);
LAB_1008c44bb:
  FUN_10081e1a0(pbVar4);
  FUN_100885590(local_38,FUN_1008c3b40);
  return 0;
}


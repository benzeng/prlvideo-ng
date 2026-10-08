
undefined8 FUN_100c9f650(void)

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
  pbVar4 = (byte *)FUN_100c58250();
  if (pbVar4 != (byte *)0x0) {
    iVar11 = 1;
    pbVar10 = (byte *)0x0;
    pbVar9 = pbVar4;
    pbVar12 = pbVar4;
    do {
      puVar1 = PTR___DefaultRuneLocale_1021e1278;
      bVar2 = *pbVar12;
      if (((ulong)bVar2 < 0xe) && ((0x2401UL >> ((ulong)bVar2 & 0x3f) & 1) != 0)) {
        bVar2 = *pbVar9;
        pbVar12 = (byte *)0x0;
        if (bVar2 == 0) goto LAB_100c9fb21;
        pbVar12 = (byte *)0x0;
        goto LAB_100c9fa7c;
      }
      if (iVar11 == 2) {
        iVar11 = 2;
        if (bVar2 == 0x2c) {
          *pbVar12 = 0;
          puVar1 = PTR___DefaultRuneLocale_1021e1278;
          bVar2 = *pbVar9;
          while( true ) {
            if (bVar2 == 0) goto LAB_100c9f9da;
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
          if (*pbVar9 == 0) goto LAB_100c9f9da;
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
          if (*pbVar9 == 0) goto LAB_100c9f9da;
          FUN_100c9ef60(pbVar10,pbVar9,&local_38);
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
            if (bVar2 == 0) goto LAB_100c9f9f8;
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
              FUN_100c9ef60(pbVar10,0,&local_38);
              goto LAB_100c9f690;
            }
          }
LAB_100c9f9f8:
          uVar6 = 0x6c;
          uVar8 = 0x13f;
          goto LAB_100c9fa32;
        }
        if (bVar2 == 0x3a) {
          *pbVar12 = 0;
          bVar2 = *pbVar9;
          pbVar10 = pbVar9;
          while( true ) {
            if (bVar2 == 0) goto LAB_100c9fa16;
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
              goto LAB_100c9f690;
            }
          }
LAB_100c9fa16:
          uVar6 = 0x6c;
          uVar8 = 0x132;
          goto LAB_100c9fa32;
        }
      }
LAB_100c9f690:
      pbVar12 = pbVar12 + 1;
    } while( true );
  }
  uVar6 = 0x41;
  uVar8 = 0x121;
  goto LAB_100c9f9d3;
  while( true ) {
    bVar2 = pbVar9[1];
    pbVar9 = pbVar9 + 1;
    if (bVar2 == 0) break;
LAB_100c9fa7c:
    if ((char)bVar2 < '\0') {
      uVar3 = ___maskrune((uint)bVar2,0x4000);
    }
    else {
      uVar3 = *(uint *)(PTR___DefaultRuneLocale_1021e1278 + (ulong)bVar2 * 4 + 0x3c) & 0x4000;
    }
    if (uVar3 == 0) {
      pbVar12 = (byte *)0x0;
      if (*pbVar9 != 0) {
        sVar5 = _strlen((char *)pbVar9);
        puVar1 = PTR___DefaultRuneLocale_1021e1278;
        if (sVar5 == 1) goto LAB_100c9fb10;
        lVar7 = sVar5 - 1;
        goto LAB_100c9fae0;
      }
      break;
    }
  }
  goto LAB_100c9fb21;
LAB_100c9f9da:
  uVar6 = 0x6d;
  uVar8 = 0x150;
LAB_100c9fa32:
  FUN_100c62ee0(0x22,0x6d,uVar6,"v3_utl.c",uVar8);
  goto LAB_100c9fa3b;
  while (lVar7 = lVar7 + -1, lVar7 != 0) {
LAB_100c9fae0:
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
LAB_100c9fb10:
  pbVar12 = (byte *)0x0;
  if (*pbVar9 != 0) {
    pbVar12 = pbVar9;
  }
LAB_100c9fb21:
  if (iVar11 == 2) {
    pbVar9 = pbVar12;
    if (pbVar12 != (byte *)0x0) {
LAB_100c9fb4e:
      FUN_100c9ef60(pbVar10,pbVar9,&local_38);
      FUN_100bf3910(pbVar4);
      return local_38;
    }
    uVar6 = 0x6d;
    uVar8 = 0x162;
  }
  else {
    if (pbVar12 != (byte *)0x0) {
      pbVar9 = (byte *)0x0;
      pbVar10 = pbVar12;
      goto LAB_100c9fb4e;
    }
    uVar6 = 0x6c;
    uVar8 = 0x16c;
  }
LAB_100c9f9d3:
  FUN_100c62ee0(0x22,0x6d,uVar6,"v3_utl.c",uVar8);
LAB_100c9fa3b:
  FUN_100bf3910(pbVar4);
  FUN_100c60790(local_38,FUN_100c9f0c0);
  return 0;
}


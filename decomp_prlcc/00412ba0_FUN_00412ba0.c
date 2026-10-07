
bool FUN_00412ba0(long param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  long *plVar7;
  undefined8 uVar8;
  char *pcVar9;
  void *pvVar10;
  size_t sVar11;
  void *pvVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  ulong uVar17;
  long lVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  size_t sVar22;
  byte *pbVar23;
  byte *pbVar24;
  long *plVar25;
  byte *pbVar26;
  bool bVar27;
  bool bVar28;
  undefined1 uVar29;
  byte *local_48;
  long *local_40;
  int local_38;
  ulong uVar18;
  
  local_40 = malloc(8);
  *local_40 = *(long *)PTR_EZXML_NIL_0061bd80;
  param_2[param_3] = 0;
  local_48 = (byte *)0x0;
joined_r0x00412be8:
  if (param_2 == (byte *)0x0) goto LAB_00412c10;
LAB_00412bea:
  bVar5 = DAT_00419197;
  bVar1 = *param_2;
  while( true ) {
    if (bVar1 == 0) goto LAB_00412c10;
    if (bVar1 == 0x3c) break;
    bVar27 = true;
    if (bVar1 == 0x25) goto LAB_00412c45;
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  bVar27 = false;
LAB_00412c45:
  lVar14 = 8;
  pbVar24 = param_2;
  pbVar20 = (byte *)"<!ENTITY";
  do {
    if (lVar14 == 0) break;
    lVar14 = lVar14 + -1;
    bVar27 = *pbVar24 == *pbVar20;
    pbVar24 = pbVar24 + 1;
    pbVar20 = pbVar20 + 1;
  } while (bVar27);
  if (!bVar27) {
    lVar14 = 9;
    pbVar24 = param_2;
    pbVar20 = (byte *)0x4191e4;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar27 = *pbVar24 == *pbVar20;
      pbVar24 = pbVar24 + 1;
      pbVar20 = pbVar20 + 1;
    } while (bVar27);
    if (!bVar27) {
      lVar14 = 4;
      pbVar24 = param_2;
      pbVar20 = (byte *)0x419254;
      goto code_r0x004136df;
    }
    if (DAT_00419197 == 0) {
LAB_00412eb1:
      sVar16 = 0;
    }
    else if (DAT_00419198 == 0) {
      if (param_2[9] != DAT_00419197) goto LAB_00412eb1;
      sVar22 = 0;
      do {
        sVar16 = sVar22 + 1;
        lVar14 = sVar22 + 10;
        sVar22 = sVar16;
      } while (DAT_00419197 == param_2[lVar14]);
    }
    else if (DAT_00419199 == 0) {
      for (sVar16 = 0;
          (DAT_00419197 == param_2[sVar16 + 9] || (DAT_00419198 == param_2[sVar16 + 9]));
          sVar16 = sVar16 + 1) {
      }
    }
    else if (DAT_0041919a == '\0') {
      for (sVar16 = 0;
          ((bVar1 = param_2[sVar16 + 9], DAT_00419197 == bVar1 || (DAT_00419198 == bVar1)) ||
          (DAT_00419199 == bVar1)); sVar16 = sVar16 + 1) {
      }
    }
    else {
      sVar16 = strspn((char *)(param_2 + 9),"\t\r\n ");
    }
    bVar3 = DAT_004191d4;
    pbVar24 = param_2 + sVar16 + 9;
    bVar1 = param_2[sVar16 + 9];
    if (bVar1 == 0) {
      FUN_00411f20(param_1,pbVar24,"unclosed <!ATTLIST");
      goto LAB_00412c10;
    }
    if (DAT_004191d4 == 0) {
      sVar22 = strlen((char *)pbVar24);
    }
    else if (DAT_004191d5 == 0) {
      if (bVar1 == DAT_004191d4) {
LAB_00413e60:
        sVar22 = 0;
      }
      else {
        sVar11 = 0;
        do {
          sVar22 = sVar11 + 1;
          lVar14 = sVar11 + 10;
          if (param_2[lVar14 + sVar16] == 0) break;
          sVar11 = sVar22;
        } while (DAT_004191d4 != param_2[lVar14 + sVar16]);
      }
    }
    else if (DAT_004191d6 == 0) {
      if ((DAT_004191d4 == bVar1) || (DAT_004191d5 == bVar1)) goto LAB_00413e60;
      sVar11 = 0;
      do {
        sVar22 = sVar11 + 1;
        bVar1 = param_2[sVar11 + 10 + sVar16];
        if ((bVar1 == 0) || (DAT_004191d4 == bVar1)) break;
        sVar11 = sVar22;
      } while (DAT_004191d5 != bVar1);
    }
    else if (DAT_004191d7 == '\0') {
      if (((DAT_004191d4 == bVar1) || (DAT_004191d5 == bVar1)) || (DAT_004191d6 == bVar1))
      goto LAB_00413e60;
      sVar11 = 0;
      do {
        sVar22 = sVar11 + 1;
        bVar1 = param_2[sVar11 + 10 + sVar16];
        if (((bVar1 == 0) || (DAT_004191d4 == bVar1)) || (DAT_004191d5 == bVar1)) break;
        sVar11 = sVar22;
      } while (DAT_004191d6 != bVar1);
    }
    else {
      sVar22 = strcspn((char *)pbVar24,"\t\r\n >");
    }
    param_2 = pbVar24 + sVar22;
    if (*param_2 != 0x3e) {
      *param_2 = 0;
      local_38 = 0;
      plVar25 = *(long **)(param_1 + 0x88);
      puVar21 = (undefined8 *)*plVar25;
      lVar14 = 0;
      if (puVar21 != (undefined8 *)0x0) {
        local_38 = 0;
        lVar15 = 8;
        lVar14 = 0;
        do {
          lVar19 = lVar15;
          iVar6 = strcmp((char *)local_48,(char *)*puVar21);
          if (iVar6 == 0) break;
          puVar21 = *(undefined8 **)(lVar19 + (long)plVar25);
          local_38 = local_38 + 1;
          lVar15 = lVar19 + 8;
          lVar14 = lVar19;
        } while (puVar21 != (undefined8 *)0x0);
      }
LAB_00412f9b:
      pbVar20 = param_2 + 1;
      if (bVar5 == 0) {
LAB_004134a5:
        sVar16 = 0;
      }
      else if (DAT_00419198 == 0) {
        if (param_2[1] != bVar5) goto LAB_004134a5;
        sVar22 = 0;
        do {
          sVar16 = sVar22 + 1;
          lVar15 = sVar22 + 2;
          sVar22 = sVar16;
        } while (bVar5 == param_2[lVar15]);
      }
      else if (DAT_00419199 == 0) {
        for (sVar16 = 0; (bVar5 == param_2[sVar16 + 1] || (DAT_00419198 == param_2[sVar16 + 1]));
            sVar16 = sVar16 + 1) {
        }
      }
      else if (DAT_0041919a == '\0') {
        for (sVar16 = 0;
            ((bVar1 = param_2[sVar16 + 1], bVar5 == bVar1 || (DAT_00419198 == bVar1)) ||
            (DAT_00419199 == bVar1)); sVar16 = sVar16 + 1) {
        }
      }
      else {
        sVar16 = strspn((char *)pbVar20,"\t\r\n ");
      }
      local_48 = pbVar20 + sVar16;
      bVar1 = *local_48;
      param_2 = pbVar20;
      if ((bVar1 == 0) || (bVar1 == 0x3e)) goto joined_r0x00412be8;
      if (bVar5 == 0) {
        sVar16 = strlen((char *)local_48);
LAB_0041303f:
        param_2 = local_48 + sVar16;
        if (*param_2 == 0) goto LAB_00413e8f;
        *param_2 = 0;
        pbVar20 = param_2 + 1;
        if (bVar5 != 0) goto LAB_0041346d;
LAB_00413063:
        uVar17 = 0;
      }
      else {
        if (DAT_00419198 != 0) {
          if (DAT_00419199 == 0) {
            if ((bVar5 == bVar1) || (DAT_00419198 == bVar1)) goto LAB_0041345b;
            sVar16 = 0;
            do {
              sVar16 = sVar16 + 1;
              bVar1 = local_48[sVar16];
              if ((bVar1 == 0) || (bVar5 == bVar1)) break;
            } while (DAT_00419198 != bVar1);
          }
          else if (DAT_0041919a == '\0') {
            if (((bVar5 == bVar1) || (DAT_00419198 == bVar1)) || (DAT_00419199 == bVar1))
            goto LAB_0041345b;
            sVar16 = 0;
            while( true ) {
              sVar16 = sVar16 + 1;
              bVar1 = local_48[sVar16];
              if ((bVar1 == 0) || (bVar5 == bVar1)) break;
              if ((DAT_00419198 == bVar1) || (DAT_00419199 == bVar1)) break;
            }
          }
          else {
            sVar16 = strcspn((char *)local_48,"\t\r\n ");
          }
          goto LAB_0041303f;
        }
        if (bVar1 != bVar5) {
          sVar16 = 0;
          do {
            sVar16 = sVar16 + 1;
            if (local_48[sVar16] == 0) break;
          } while (bVar5 != local_48[sVar16]);
          goto LAB_0041303f;
        }
LAB_0041345b:
        *local_48 = 0;
        pbVar20 = local_48 + 1;
        param_2 = local_48;
LAB_0041346d:
        if (DAT_00419198 == 0) {
          if (*pbVar20 != bVar5) goto LAB_00413063;
          uVar18 = 0;
          do {
            uVar17 = uVar18 + 1;
            lVar15 = uVar18 + 2;
            uVar18 = uVar17;
          } while (bVar5 == param_2[lVar15]);
        }
        else if (DAT_00419199 == 0) {
          for (uVar17 = 0; (bVar5 == param_2[uVar17 + 1] || (DAT_00419198 == param_2[uVar17 + 1]));
              uVar17 = uVar17 + 1) {
          }
        }
        else if (DAT_0041919a == '\0') {
          for (uVar17 = 0;
              ((bVar1 = param_2[uVar17 + 1], bVar5 == bVar1 || (DAT_00419198 == bVar1)) ||
              (DAT_00419199 == bVar1)); uVar17 = uVar17 + 1) {
          }
        }
        else {
          uVar17 = strspn((char *)pbVar20,"\t\r\n ");
        }
      }
      bVar27 = CARRY8((ulong)pbVar20,uVar17);
      pbVar20 = pbVar20 + uVar17;
      bVar28 = pbVar20 == (byte *)0x0;
      lVar15 = 5;
      pbVar23 = pbVar20;
      pbVar26 = (byte *)"CDATA";
      do {
        if (lVar15 == 0) break;
        lVar15 = lVar15 + -1;
        bVar27 = *pbVar23 < *pbVar26;
        bVar28 = *pbVar23 == *pbVar26;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      } while (bVar28);
      bVar27 = (!bVar27 && !bVar28) == bVar27;
      pcVar9 = " ";
      if (!bVar27) {
        pcVar9 = "*";
      }
      lVar15 = 8;
      pbVar23 = pbVar20;
      pbVar26 = (byte *)"NOTATION";
      do {
        if (lVar15 == 0) break;
        lVar15 = lVar15 + -1;
        bVar27 = *pbVar23 == *pbVar26;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      } while (bVar27);
      if (bVar27) {
        if (bVar5 == 0) {
LAB_00413737:
          sVar16 = 0;
        }
        else if (DAT_00419198 == 0) {
          if (pbVar20[8] != bVar5) goto LAB_00413737;
          sVar22 = 0;
          do {
            sVar16 = sVar22 + 1;
            lVar15 = sVar22 + 9;
            sVar22 = sVar16;
          } while (bVar5 == pbVar20[lVar15]);
        }
        else if (DAT_00419199 == 0) {
          for (sVar16 = 0; (bVar5 == pbVar20[sVar16 + 8] || (DAT_00419198 == pbVar20[sVar16 + 8]));
              sVar16 = sVar16 + 1) {
          }
        }
        else if (DAT_0041919a == '\0') {
          for (sVar16 = 0;
              ((bVar1 = pbVar20[sVar16 + 8], bVar5 == bVar1 || (DAT_00419198 == bVar1)) ||
              (DAT_00419199 == bVar1)); sVar16 = sVar16 + 1) {
          }
        }
        else {
          sVar16 = strspn((char *)(pbVar20 + 8),"\t\r\n ");
        }
        pbVar20 = pbVar20 + 8 + sVar16;
      }
      bVar1 = *pbVar20;
      if (bVar1 == 0x28) {
        pbVar20 = (byte *)strchr((char *)pbVar20,0x29);
      }
      else {
        if (bVar5 == 0) {
          sVar16 = strlen((char *)pbVar20);
        }
        else if (DAT_00419198 == 0) {
          if ((bVar1 == 0) || (bVar1 == bVar5)) {
LAB_00413cee:
            sVar16 = 0;
          }
          else {
            sVar16 = 0;
            do {
              sVar16 = sVar16 + 1;
              if (pbVar20[sVar16] == 0) break;
            } while (bVar5 != pbVar20[sVar16]);
          }
        }
        else if (DAT_00419199 == 0) {
          if (((bVar1 == 0) || (bVar5 == bVar1)) || (DAT_00419198 == bVar1)) goto LAB_00413cee;
          sVar16 = 0;
          do {
            sVar16 = sVar16 + 1;
            bVar1 = pbVar20[sVar16];
            if ((bVar1 == 0) || (bVar5 == bVar1)) break;
          } while (DAT_00419198 != bVar1);
        }
        else if (DAT_0041919a == '\0') {
          if ((((bVar1 == 0) || (bVar5 == bVar1)) || (DAT_00419198 == bVar1)) ||
             (DAT_00419199 == bVar1)) goto LAB_00413cee;
          sVar16 = 0;
          while( true ) {
            sVar16 = sVar16 + 1;
            bVar1 = pbVar20[sVar16];
            if ((bVar1 == 0) || (bVar5 == bVar1)) break;
            if ((DAT_00419198 == bVar1) || (DAT_00419199 == bVar1)) break;
          }
        }
        else {
          sVar16 = strcspn((char *)pbVar20,"\t\r\n ");
        }
        pbVar20 = pbVar20 + sVar16;
      }
      if (pbVar20 == (byte *)0x0) {
        FUN_00411f20(param_1,pbVar24,"malformed <!ATTLIST");
        goto LAB_00412c10;
      }
      if (DAT_004191ff == 0) {
LAB_004134ac:
        sVar16 = 0;
        uVar29 = 1;
      }
      else if (DAT_00419200 == 0) {
        if (*pbVar20 != DAT_004191ff) goto LAB_004134ac;
        sVar16 = 0;
        do {
          sVar16 = sVar16 + 1;
        } while (DAT_004191ff == pbVar20[sVar16]);
        uVar29 = 0;
      }
      else if (DAT_00419201 == 0) {
        for (sVar16 = 0; (DAT_004191ff == pbVar20[sVar16] || (DAT_00419200 == pbVar20[sVar16]));
            sVar16 = sVar16 + 1) {
        }
        uVar29 = 0;
      }
      else {
        uVar29 = DAT_00419202 == '\0';
        if ((bool)uVar29) {
          for (sVar16 = 0;
              ((bVar1 = pbVar20[sVar16], DAT_004191ff == bVar1 || (DAT_00419200 == bVar1)) ||
              (DAT_00419201 == bVar1)); sVar16 = sVar16 + 1) {
          }
          uVar29 = 0;
        }
        else {
          sVar16 = strspn((char *)pbVar20,"\t\r\n )");
        }
      }
      pbVar20 = pbVar20 + sVar16;
      lVar15 = 6;
      pbVar23 = pbVar20;
      pbVar26 = (byte *)"#FIXED";
      do {
        if (lVar15 == 0) break;
        lVar15 = lVar15 + -1;
        uVar29 = *pbVar23 == *pbVar26;
        pbVar23 = pbVar23 + 1;
        pbVar26 = pbVar26 + 1;
      } while ((bool)uVar29);
      if ((bool)uVar29) {
        if (bVar5 == 0) {
LAB_00413745:
          sVar16 = 0;
        }
        else if (DAT_00419198 == 0) {
          if (pbVar20[6] != bVar5) goto LAB_00413745;
          sVar22 = 0;
          do {
            sVar16 = sVar22 + 1;
            lVar15 = sVar22 + 7;
            sVar22 = sVar16;
          } while (bVar5 == pbVar20[lVar15]);
        }
        else if (DAT_00419199 == 0) {
          for (sVar16 = 0; (bVar5 == pbVar20[sVar16 + 6] || (DAT_00419198 == pbVar20[sVar16 + 6]));
              sVar16 = sVar16 + 1) {
          }
        }
        else if (DAT_0041919a == '\0') {
          for (sVar16 = 0;
              ((bVar1 = pbVar20[sVar16 + 6], bVar5 == bVar1 || (DAT_00419198 == bVar1)) ||
              (DAT_00419199 == bVar1)); sVar16 = sVar16 + 1) {
          }
        }
        else {
          sVar16 = strspn((char *)(pbVar20 + 6),"\t\r\n ");
        }
        pbVar20 = pbVar20 + 6 + sVar16;
      }
      bVar1 = *pbVar20;
      if (bVar1 != 0x23) {
        if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
          pbVar23 = pbVar20 + 1;
          param_2 = (byte *)strchr((char *)pbVar23,(int)(char)bVar1);
          pbVar20 = (byte *)0x0;
          if (param_2 == (byte *)0x0) goto LAB_004131fc;
          *param_2 = 0;
          goto LAB_00413530;
        }
LAB_004131fc:
        FUN_00411f20(param_1,pbVar24,"malformed <!ATTLIST");
        param_2 = pbVar20;
        goto joined_r0x00412be8;
      }
      if (bVar3 == 0) {
        sVar16 = strlen((char *)pbVar20);
      }
      else if (DAT_004191d5 == 0) {
        if (bVar3 == 0x23) {
LAB_00413f08:
          sVar16 = 0;
        }
        else {
          sVar16 = 0;
          do {
            sVar16 = sVar16 + 1;
            if (pbVar20[sVar16] == 0) break;
          } while (bVar3 != pbVar20[sVar16]);
        }
      }
      else if (DAT_004191d6 == 0) {
        if ((bVar3 == 0x23) || (DAT_004191d5 == 0x23)) goto LAB_00413f08;
        sVar16 = 0;
        do {
          sVar16 = sVar16 + 1;
          bVar1 = pbVar20[sVar16];
          if ((bVar1 == 0) || (bVar3 == bVar1)) break;
        } while (DAT_004191d5 != bVar1);
      }
      else if (DAT_004191d7 == '\0') {
        if (((bVar3 == 0x23) || (DAT_004191d5 == 0x23)) || (DAT_004191d6 == 0x23))
        goto LAB_00413f08;
        sVar16 = 0;
        while( true ) {
          sVar16 = sVar16 + 1;
          bVar1 = pbVar20[sVar16];
          if ((bVar1 == 0) || (bVar3 == bVar1)) break;
          if ((DAT_004191d5 == bVar1) || (DAT_004191d6 == bVar1)) break;
        }
      }
      else {
        sVar16 = strcspn((char *)pbVar20,"\t\r\n >");
      }
      pbVar23 = (byte *)0x0;
      param_2 = pbVar20 + (sVar16 - 1);
      if (*pcVar9 != ' ') {
LAB_00413530:
        if (*(long *)(lVar14 + (long)*(void **)(param_1 + 0x88)) == 0) {
          if (local_38 == 0) {
            pvVar10 = malloc(0x10);
          }
          else {
            pvVar10 = realloc(*(void **)(param_1 + 0x88),(long)(local_38 + 2) << 3);
          }
          *(void **)(param_1 + 0x88) = pvVar10;
          pvVar12 = malloc(0x10);
          *(void **)(lVar14 + (long)pvVar10) = pvVar12;
          puVar21 = *(undefined8 **)(lVar14 + *(long *)(param_1 + 0x88));
          *(undefined8 *)(*(long *)(param_1 + 0x88) + 8 + lVar14) = 0;
          *puVar21 = pbVar24;
          puVar21[1] = 0;
        }
        lVar15 = 8;
        sVar16 = 0x28;
        puVar21 = (undefined8 *)(lVar14 + *(long *)(param_1 + 0x88));
        pvVar10 = (void *)*puVar21;
        if (*(long *)((long)pvVar10 + 8) != 0) {
          lVar19 = 0;
          iVar6 = 1;
          do {
            iVar13 = iVar6;
            lVar15 = lVar19;
            lVar19 = lVar15 + 0x18;
            iVar6 = iVar13 + 3;
          } while (*(long *)(lVar15 + 0x20 + (long)pvVar10) != 0);
          lVar15 = lVar15 + 0x20;
          sVar16 = (long)(iVar13 + 7) * 8;
        }
        pvVar10 = realloc(pvVar10,sVar16);
        *puVar21 = pvVar10;
        lVar19 = *(long *)(param_1 + 0x88);
        lVar4 = *(long *)(lVar14 + lVar19);
        *(char **)(lVar4 + 0x10 + lVar15) = pcVar9;
        uVar8 = 0;
        *(undefined8 *)(lVar4 + 0x18 + lVar15) = 0;
        if (pbVar23 != (byte *)0x0) {
          uVar8 = FUN_004126c0(pbVar23,*(undefined8 *)(param_1 + 0x80),(int)*pcVar9);
          lVar19 = *(long *)(param_1 + 0x88);
        }
        *(undefined8 *)(lVar4 + 8 + lVar15) = uVar8;
        *(byte **)(lVar15 + *(long *)(lVar14 + lVar19)) = local_48;
      }
      goto LAB_00412f9b;
    }
    goto LAB_00412bea;
  }
  if (DAT_00419197 != 0) {
    if (DAT_00419198 != 0) {
      if (DAT_00419199 == 0) {
        for (sVar16 = 0;
            (DAT_00419197 == param_2[sVar16 + 8] || (DAT_00419198 == param_2[sVar16 + 8]));
            sVar16 = sVar16 + 1) {
        }
      }
      else if (DAT_0041919a == '\0') {
        for (sVar16 = 0;
            ((bVar1 = param_2[sVar16 + 8], DAT_00419197 == bVar1 || (DAT_00419198 == bVar1)) ||
            (DAT_00419199 == bVar1)); sVar16 = sVar16 + 1) {
        }
      }
      else {
        sVar16 = strspn((char *)(param_2 + 8),"\t\r\n ");
      }
      goto LAB_00412c75;
    }
    if (param_2[8] == DAT_00419197) {
      sVar22 = 0;
      do {
        sVar16 = sVar22 + 1;
        lVar14 = sVar22 + 9;
        sVar22 = sVar16;
      } while (DAT_00419197 == param_2[lVar14]);
LAB_00412c75:
      pbVar24 = param_2 + 8 + sVar16;
      if (DAT_004191bb == 0) {
LAB_00412e7c:
        sVar16 = 0;
      }
      else if (DAT_004191bc == 0) {
        if (*pbVar24 != DAT_004191bb) goto LAB_00412e7c;
        sVar16 = 0;
        do {
          sVar16 = sVar16 + 1;
        } while (DAT_004191bb == pbVar24[sVar16]);
      }
      else if (DAT_004191bd == 0) {
        for (sVar16 = 0; (DAT_004191bb == pbVar24[sVar16] || (DAT_004191bc == pbVar24[sVar16]));
            sVar16 = sVar16 + 1) {
        }
      }
      else if (DAT_004191be == '\0') {
        for (sVar16 = 0;
            ((bVar1 = pbVar24[sVar16], DAT_004191bb == bVar1 || (DAT_004191bc == bVar1)) ||
            (DAT_004191bd == bVar1)); sVar16 = sVar16 + 1) {
        }
      }
      else {
        sVar16 = strspn((char *)pbVar24,"\t\r\n %");
      }
      bVar3 = DAT_00419199;
      bVar1 = DAT_00419198;
      local_48 = pbVar24 + sVar16;
      if (bVar5 == 0) {
        sVar16 = strlen((char *)local_48);
        pbVar20 = local_48 + sVar16;
        sVar16 = 0;
        *pbVar20 = 0x3b;
      }
      else if (DAT_00419198 == 0) {
        if ((*local_48 == 0) || (bVar5 == *local_48)) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 1;
            if (local_48[lVar14] == 0) break;
          } while (bVar5 != local_48[lVar14]);
        }
        pbVar20 = local_48 + lVar14;
        sVar16 = 0;
        *pbVar20 = 0x3b;
        if (pbVar20[1] == bVar5) {
          sVar22 = 0;
          do {
            sVar16 = sVar22 + 1;
            lVar14 = sVar22 + 2;
            sVar22 = sVar16;
          } while (pbVar20[1] == pbVar20[lVar14]);
        }
      }
      else if (DAT_00419199 == 0) {
        bVar3 = *local_48;
        if (((bVar3 == 0) || (bVar5 == bVar3)) || (DAT_00419198 == bVar3)) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          do {
            lVar14 = lVar14 + 1;
            bVar3 = local_48[lVar14];
            if ((bVar3 == 0) || (bVar5 == bVar3)) break;
          } while (DAT_00419198 != bVar3);
        }
        pbVar20 = local_48 + lVar14;
        *pbVar20 = 0x3b;
        for (sVar16 = 0; (pbVar20[sVar16 + 1] == bVar5 || (pbVar20[sVar16 + 1] == bVar1));
            sVar16 = sVar16 + 1) {
        }
      }
      else if (DAT_0041919a == '\0') {
        bVar2 = *local_48;
        if ((((bVar2 == 0) || (bVar5 == bVar2)) || (DAT_00419198 == bVar2)) ||
           (DAT_00419199 == bVar2)) {
          lVar14 = 0;
        }
        else {
          lVar14 = 0;
          while( true ) {
            lVar14 = lVar14 + 1;
            bVar2 = local_48[lVar14];
            if ((bVar2 == 0) || (bVar5 == bVar2)) break;
            if ((DAT_00419198 == bVar2) || (DAT_00419199 == bVar2)) break;
          }
        }
        pbVar20 = local_48 + lVar14;
        *pbVar20 = 0x3b;
        for (sVar16 = 0;
            ((bVar2 = pbVar20[sVar16 + 1], bVar2 == bVar5 || (bVar2 == bVar1)) || (bVar2 == bVar3));
            sVar16 = sVar16 + 1) {
        }
      }
      else {
        sVar16 = strcspn((char *)local_48,"\t\r\n ");
        pbVar20 = local_48 + sVar16;
        *pbVar20 = 0x3b;
        sVar16 = strspn((char *)(pbVar20 + 1),"\t\r\n ");
      }
      bVar1 = pbVar20[sVar16 + 1];
      if ((bVar1 == 0x22) || (bVar1 == 0x27)) {
        plVar25 = local_40;
        if (*pbVar24 != 0x25) {
          plVar25 = *(long **)(param_1 + 0x80);
        }
        lVar14 = 0;
        sVar22 = 0x18;
        if (*plVar25 != 0) {
          lVar14 = 0;
          iVar6 = 0;
          do {
            iVar13 = iVar6;
            lVar15 = lVar14 + 8;
            lVar14 = lVar14 + 8;
            iVar6 = iVar13 + 1;
          } while (*(long *)(lVar15 + (long)plVar25) != 0);
          sVar22 = (long)(iVar13 + 4) * 8;
        }
        plVar7 = realloc(plVar25,sVar22);
        plVar25 = plVar7;
        if (*pbVar24 != 0x25) {
          *(long **)(param_1 + 0x80) = plVar7;
          plVar25 = local_40;
        }
        local_40 = plVar25;
        pbVar24 = pbVar20 + sVar16 + 2;
        pbVar20[1] = 0;
        param_2 = (byte *)strchr((char *)pbVar24,(int)(char)bVar1);
        if (param_2 != (byte *)0x0) {
          *param_2 = 0;
          param_2 = param_2 + 1;
        }
        puVar21 = (undefined8 *)((long)plVar7 + lVar14 + 8);
        uVar8 = FUN_004126c0(pbVar24,local_40,0x25);
        *puVar21 = uVar8;
        *(undefined8 *)((long)plVar7 + lVar14 + 0x10) = 0;
        iVar6 = FUN_00411e20(local_48,*puVar21,plVar7);
        if (iVar6 == 0) {
          if ((byte *)*puVar21 != pbVar24) {
            free((byte *)*puVar21);
          }
          FUN_00411f20(param_1,pbVar24,"circular entity declaration &%s",local_48);
          goto LAB_00412c10;
        }
        *(byte **)(lVar14 + (long)plVar7) = local_48;
      }
      else {
        param_2 = (byte *)strchr((char *)pbVar20,0x3e);
      }
      goto joined_r0x00412be8;
    }
  }
  sVar16 = 0;
  goto LAB_00412c75;
  while( true ) {
    lVar14 = lVar14 + -1;
    bVar27 = *pbVar24 == *pbVar20;
    pbVar24 = pbVar24 + 1;
    pbVar20 = pbVar20 + 1;
    if (!bVar27) break;
code_r0x004136df:
    if (lVar14 == 0) break;
  }
  if (bVar27) {
    param_2 = (byte *)strstr((char *)(param_2 + 4),"-->");
  }
  else {
    lVar14 = 2;
    pbVar24 = param_2;
    pbVar20 = (byte *)0x419290;
    do {
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
      bVar27 = *pbVar24 == *pbVar20;
      pbVar24 = pbVar24 + 1;
      pbVar20 = pbVar20 + 1;
    } while (bVar27);
    if (bVar27) {
      pbVar24 = param_2 + 2;
      pcVar9 = strstr((char *)pbVar24,"?>");
      if (pcVar9 == (char *)0x0) goto LAB_00412c10;
      param_2 = (byte *)(pcVar9 + 1);
      FUN_00412160(param_1,pbVar24,(long)pcVar9 - (long)pbVar24);
    }
    else if (bVar1 == 0x3c) {
      param_2 = (byte *)strchr((char *)param_2,0x3e);
    }
    else {
      param_2 = param_2 + 1;
      if ((bVar1 == 0x25) && (*(short *)(param_1 + 0x98) == 0)) {
LAB_00412c10:
        free(local_40);
        return *(char *)(param_1 + 0x9a) == '\0';
      }
    }
  }
  goto joined_r0x00412be8;
LAB_00413e8f:
  FUN_00411f20(param_1,pbVar24,"malformed <!ATTLIST");
  goto LAB_00412bea;
}


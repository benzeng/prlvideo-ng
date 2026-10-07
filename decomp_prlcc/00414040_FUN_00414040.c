
long FUN_00414040(char *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  ushort *puVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  short sVar11;
  int iVar12;
  long lVar13;
  undefined8 uVar14;
  ushort **ppuVar15;
  long lVar16;
  undefined *puVar17;
  void *pvVar18;
  char *pcVar19;
  size_t sVar20;
  char *pcVar21;
  size_t sVar22;
  char cVar23;
  int iVar24;
  undefined8 *puVar25;
  long lVar26;
  char *pcVar27;
  char *pcVar28;
  bool bVar29;
  long *local_88;
  undefined8 *local_70;
  undefined8 *local_60;
  long local_58;
  long local_50;
  int local_44;
  long local_40;
  char *local_38;
  
  local_40 = param_2;
  local_38 = param_1;
  lVar13 = FUN_00411110(0);
  *(char **)(lVar13 + 0x58) = local_38;
  if (local_40 == 0) {
    lVar13 = FUN_00411f20(lVar13,0,"root tag missing");
  }
  else {
    uVar14 = FUN_004109c0(&local_38,&local_40);
    *(undefined8 *)(lVar13 + 0x68) = uVar14;
    *(char **)(lVar13 + 0x70) = local_38;
    *(char **)(lVar13 + 0x78) = local_38 + local_40;
    cVar1 = local_38[local_40 + -1];
    local_38[local_40 + -1] = '\0';
    cVar23 = *local_38;
    while (cVar23 != '\0') {
      if (cVar23 == '<') {
        ppuVar15 = __ctype_b_loc();
        local_70 = (undefined8 *)0x0;
        goto LAB_00414161;
      }
      local_38 = local_38 + 1;
      cVar23 = *local_38;
    }
    lVar13 = FUN_00411f20(lVar13,local_38,"root tag missing");
  }
  return lVar13;
LAB_00414161:
  pcVar19 = local_38;
  cVar10 = DAT_00419272;
  cVar9 = DAT_00419271;
  cVar8 = DAT_00419270;
  cVar7 = DAT_00419199;
  cVar6 = DAT_00419198;
  cVar3 = DAT_00419197;
  puVar4 = *ppuVar15;
  pcVar28 = local_38 + 1;
  cVar23 = local_38[1];
  if (((((*(byte *)((long)puVar4 + (long)cVar23 * 2 + 1) & 4) == 0) && (cVar23 != '_')) &&
      (cVar23 != ':')) && (-1 < cVar23)) {
    if (cVar23 == '/') {
      pcVar19 = local_38 + 2;
      if (DAT_004191d4 == '\0') {
        local_38 = pcVar28;
        sVar22 = strlen(pcVar19);
      }
      else if (DAT_004191d5 == '\0') {
        if ((local_38[2] == '\0') || (local_38[2] == DAT_004191d4)) {
LAB_00415048:
          sVar22 = 0;
        }
        else {
          sVar20 = 0;
          do {
            sVar22 = sVar20 + 1;
            lVar16 = sVar20 + 3;
            if (local_38[lVar16] == '\0') break;
            sVar20 = sVar22;
          } while (DAT_004191d4 != local_38[lVar16]);
        }
      }
      else if (DAT_004191d6 == '\0') {
        cVar23 = local_38[2];
        if (((cVar23 == '\0') || (DAT_004191d4 == cVar23)) || (DAT_004191d5 == cVar23))
        goto LAB_00415048;
        sVar20 = 0;
        do {
          sVar22 = sVar20 + 1;
          cVar23 = local_38[sVar20 + 3];
          if ((cVar23 == '\0') || (DAT_004191d4 == cVar23)) break;
          sVar20 = sVar22;
        } while (DAT_004191d5 != cVar23);
      }
      else if (DAT_004191d7 == '\0') {
        cVar23 = local_38[2];
        if ((((cVar23 == '\0') || (DAT_004191d4 == cVar23)) || (DAT_004191d5 == cVar23)) ||
           (DAT_004191d6 == cVar23)) goto LAB_00415048;
        sVar20 = 0;
        while( true ) {
          sVar22 = sVar20 + 1;
          cVar23 = local_38[sVar20 + 3];
          if ((cVar23 == '\0') || (DAT_004191d4 == cVar23)) break;
          if ((DAT_004191d5 == cVar23) || (sVar20 = sVar22, DAT_004191d6 == cVar23)) break;
        }
      }
      else {
        local_38 = pcVar28;
        sVar22 = strcspn(pcVar19,"\t\r\n >");
      }
      local_38 = pcVar19 + sVar22;
      cVar23 = *local_38;
      pcVar28 = pcVar19;
      if ((cVar23 == '\0') && (cVar1 != '>')) goto LAB_00414624;
      *local_38 = '\0';
      lVar16 = FUN_00412030(lVar13,pcVar19,local_38);
      if (lVar16 != 0) {
        return lVar13;
      }
      puVar4 = *ppuVar15;
      *local_38 = cVar23;
      if ((*(byte *)((long)puVar4 + (long)cVar23 * 2 + 1) & 0x20) == 0) goto LAB_00414575;
      if (DAT_00419197 == '\0') {
LAB_00414c15:
        sVar22 = 0;
      }
      else if (DAT_00419198 == '\0') {
        if (*local_38 != DAT_00419197) goto LAB_00414c15;
        sVar22 = 0;
        do {
          sVar22 = sVar22 + 1;
        } while (DAT_00419197 == local_38[sVar22]);
      }
      else if (DAT_00419199 == '\0') {
        for (sVar22 = 0; (DAT_00419197 == local_38[sVar22] || (DAT_00419198 == local_38[sVar22]));
            sVar22 = sVar22 + 1) {
        }
      }
      else if (DAT_0041919a == '\0') {
        for (sVar22 = 0;
            ((cVar23 = local_38[sVar22], DAT_00419197 == cVar23 || (DAT_00419198 == cVar23)) ||
            (DAT_00419199 == cVar23)); sVar22 = sVar22 + 1) {
        }
      }
      else {
        sVar22 = strspn(local_38,"\t\r\n ");
      }
      local_38 = local_38 + sVar22;
      goto LAB_00414575;
    }
    lVar16 = 3;
    bVar29 = false;
    pcVar21 = pcVar28;
    pcVar27 = "!--";
    do {
      if (lVar16 == 0) break;
      lVar16 = lVar16 + -1;
      bVar29 = *pcVar21 == *pcVar27;
      pcVar21 = pcVar21 + 1;
      pcVar27 = pcVar27 + 1;
    } while (bVar29);
    if (!bVar29) {
      lVar16 = 8;
      bVar29 = false;
      pcVar21 = pcVar28;
      pcVar27 = "![CDATA[";
      do {
        if (lVar16 == 0) break;
        lVar16 = lVar16 + -1;
        bVar29 = *pcVar21 == *pcVar27;
        pcVar21 = pcVar21 + 1;
        pcVar27 = pcVar27 + 1;
      } while (bVar29);
      if (bVar29) {
        local_38 = pcVar28;
        local_38 = strstr(pcVar28,"]]>");
        if (local_38 == (char *)0x0) {
          lVar13 = FUN_00411f20(lVar13,pcVar28,"unclosed <![CDATA[");
          return lVar13;
        }
        local_38 = local_38 + 2;
        FUN_00413f10(lVar13,pcVar19 + 9,local_38 + (-10 - (long)pcVar28),99);
      }
      else {
        lVar16 = 8;
        bVar29 = false;
        pcVar21 = pcVar28;
        pcVar27 = "!DOCTYPE";
        do {
          if (lVar16 == 0) break;
          lVar16 = lVar16 + -1;
          bVar29 = *pcVar21 == *pcVar27;
          pcVar21 = pcVar21 + 1;
          pcVar27 = pcVar27 + 1;
        } while (bVar29);
        if (bVar29) {
          local_38 = pcVar28;
          bVar29 = false;
          while (bVar5 = bVar29, pcVar19 = local_38, cVar23 = *local_38, cVar23 != '\0') {
            if (bVar5) {
              if (cVar23 == ']') {
                if (cVar3 == '\0') {
                  sVar22 = 0;
                }
                else if (cVar6 == '\0') {
                  sVar22 = 0;
                  if (local_38[1] == cVar3) {
                    sVar20 = 0;
                    do {
                      sVar22 = sVar20 + 1;
                      lVar16 = sVar20 + 2;
                      sVar20 = sVar22;
                    } while (cVar3 == local_38[lVar16]);
                  }
                }
                else if (cVar7 == '\0') {
                  for (sVar22 = 0;
                      (cVar3 == local_38[sVar22 + 1] || (cVar6 == local_38[sVar22 + 1]));
                      sVar22 = sVar22 + 1) {
                  }
                }
                else if (DAT_0041919a == '\0') {
                  for (sVar22 = 0;
                      ((cVar23 = local_38[sVar22 + 1], cVar3 == cVar23 || (cVar6 == cVar23)) ||
                      (cVar7 == cVar23)); sVar22 = sVar22 + 1) {
                  }
                }
                else {
                  sVar22 = strspn(local_38 + 1,"\t\r\n ");
                }
                if (pcVar19[sVar22 + 1] == '>') goto LAB_00414d27;
              }
            }
            else if (cVar23 == '>') goto LAB_00414583;
            pcVar19 = pcVar19 + 1;
            if (cVar8 == '\0') {
              sVar22 = strlen(pcVar19);
            }
            else if (cVar9 == '\0') {
              if ((*pcVar19 == '\0') || (*pcVar19 == cVar8)) {
LAB_00414f20:
                sVar22 = 0;
              }
              else {
                sVar22 = 0;
                do {
                  sVar22 = sVar22 + 1;
                  if (pcVar19[sVar22] == '\0') break;
                } while (cVar8 != pcVar19[sVar22]);
              }
            }
            else if (cVar10 == '\0') {
              cVar23 = *pcVar19;
              if (((cVar23 == '\0') || (cVar8 == cVar23)) || (cVar9 == cVar23)) goto LAB_00414f20;
              sVar22 = 0;
              do {
                sVar22 = sVar22 + 1;
                cVar23 = pcVar19[sVar22];
                if ((cVar23 == '\0') || (cVar8 == cVar23)) break;
              } while (cVar9 != cVar23);
            }
            else if (DAT_00419273 == '\0') {
              cVar23 = *pcVar19;
              if (((cVar23 == '\0') || (cVar8 == cVar23)) ||
                 ((cVar9 == cVar23 || (cVar10 == cVar23)))) goto LAB_00414f20;
              sVar22 = 0;
              do {
                sVar22 = sVar22 + 1;
                cVar23 = pcVar19[sVar22];
                if (((cVar23 == '\0') || (cVar8 == cVar23)) || (cVar9 == cVar23)) break;
              } while (cVar10 != cVar23);
            }
            else {
              sVar22 = strcspn(pcVar19,"[]>");
            }
            local_38 = pcVar19 + sVar22;
            bVar29 = true;
            if (*local_38 != '[') {
              bVar29 = bVar5;
            }
          }
          if (cVar1 != '>') {
            lVar13 = FUN_00411f20(lVar13,pcVar28,"unclosed <!DOCTYPE");
            return lVar13;
          }
          if (!bVar5) goto LAB_00414583;
LAB_00414d27:
          pcVar28 = strchr(pcVar28,0x5b);
          pcVar28 = pcVar28 + 1;
          local_38 = pcVar19 + 1;
          sVar11 = FUN_00412ba0(lVar13,pcVar28,(long)pcVar19 - (long)pcVar28);
          if (sVar11 == 0) {
            return lVar13;
          }
        }
        else {
          local_38 = pcVar28;
          if (cVar23 != '?') {
            lVar13 = FUN_00411f20(lVar13,pcVar28,"unexpected <");
            return lVar13;
          }
          do {
            pcVar21 = strchr(local_38,0x3f);
            local_38 = pcVar21;
            if (pcVar21 == (char *)0x0) {
LAB_00415116:
              lVar13 = FUN_00411f20(lVar13,pcVar28,"unclosed <?");
              return lVar13;
            }
            local_38 = pcVar21 + 1;
            if (pcVar21[1] == '\0') {
              if (cVar1 != '>') goto LAB_00415116;
              break;
            }
          } while (pcVar21[1] != '>');
          FUN_00412160(lVar13,pcVar19 + 2,local_38 + (-2 - (long)pcVar28));
        }
      }
      goto LAB_00414575;
    }
    pcVar19 = local_38 + 4;
    local_38 = pcVar28;
    pcVar19 = strstr(pcVar19,"--");
    local_38 = pcVar19;
    if (pcVar19 == (char *)0x0) {
LAB_0041515d:
      lVar13 = FUN_00411f20(lVar13,pcVar28,"unclosed <!--");
      return lVar13;
    }
    local_38 = pcVar19 + 2;
    if (pcVar19[2] != '>') {
      if ((pcVar19[2] != '\0') || (cVar1 != '>')) goto LAB_0041515d;
LAB_00414656:
      if (*(long **)(lVar13 + 0x50) == (long *)0x0) {
        return lVar13;
      }
      if (**(long **)(lVar13 + 0x50) != 0) {
        lVar13 = FUN_00411f20(lVar13,pcVar28,"unclosed tag <%s>");
        return lVar13;
      }
      lVar13 = FUN_00411f20(lVar13,pcVar28,"root tag missing");
      return lVar13;
    }
  }
  else {
    if (*(long *)(lVar13 + 0x50) == 0) {
      local_38 = pcVar28;
      lVar13 = FUN_00411f20(lVar13,pcVar28,"markup outside of root element");
      return lVar13;
    }
    if (DAT_00419221 == '\0') {
      local_38 = pcVar28;
      sVar22 = strlen(pcVar28);
    }
    else if (DAT_00419222 == '\0') {
      if ((cVar23 == '\0') || (cVar23 == DAT_00419221)) {
LAB_00414afd:
        sVar22 = 0;
      }
      else {
        sVar20 = 0;
        do {
          sVar22 = sVar20 + 1;
          lVar16 = sVar20 + 2;
          if (local_38[lVar16] == '\0') break;
          sVar20 = sVar22;
        } while (DAT_00419221 != local_38[lVar16]);
      }
    }
    else if (DAT_00419223 == '\0') {
      if (((cVar23 == '\0') || (DAT_00419221 == cVar23)) || (DAT_00419222 == cVar23))
      goto LAB_00414afd;
      sVar20 = 0;
      do {
        sVar22 = sVar20 + 1;
        cVar23 = local_38[sVar20 + 2];
        if ((cVar23 == '\0') || (DAT_00419221 == cVar23)) break;
        sVar20 = sVar22;
      } while (DAT_00419222 != cVar23);
    }
    else if (DAT_00419224 == '\0') {
      if (((cVar23 == '\0') || (DAT_00419221 == cVar23)) ||
         ((DAT_00419222 == cVar23 || (DAT_00419223 == cVar23)))) goto LAB_00414afd;
      sVar20 = 0;
      do {
        sVar22 = sVar20 + 1;
        cVar23 = local_38[sVar20 + 2];
        if (((cVar23 == '\0') || (DAT_00419221 == cVar23)) || (DAT_00419222 == cVar23)) break;
        sVar20 = sVar22;
      } while (DAT_00419223 != cVar23);
    }
    else {
      local_38 = pcVar28;
      sVar22 = strcspn(pcVar28,"\t\r\n />");
    }
    cVar23 = pcVar28[sVar22];
    bVar2 = *(byte *)((long)puVar4 + (long)cVar23 * 2 + 1);
    local_38 = pcVar28 + sVar22;
    while ((bVar2 & 0x20) != 0) {
      *local_38 = '\0';
      cVar23 = local_38[1];
      local_38 = local_38 + 1;
      bVar2 = *(byte *)((long)*ppuVar15 + (long)cVar23 * 2 + 1);
    }
    if (((cVar23 != '\0') && (cVar23 != '/')) && (cVar23 != '>')) {
      puVar25 = *(undefined8 **)(lVar13 + 0x88);
      local_70 = (undefined8 *)*puVar25;
      while ((local_70 != (undefined8 *)0x0 &&
             (iVar24 = strcmp((char *)*local_70,pcVar28), iVar24 != 0))) {
        local_70 = (undefined8 *)puVar25[1];
        puVar25 = puVar25 + 1;
      }
    }
    cVar23 = *local_38;
    puVar17 = PTR_EZXML_NIL_0061bd80;
    if ((cVar23 == '\0') || (cVar23 == '/')) {
      local_44 = 0;
LAB_004145f4:
      if (cVar23 == '/') {
LAB_00414b04:
        pcVar19 = local_38 + 1;
        *local_38 = '\0';
        cVar23 = cVar1;
        if (local_38[1] != '\0') {
          cVar23 = local_38[1];
        }
        local_38 = pcVar19;
        if (cVar23 == '>') {
          FUN_004110a0(lVar13,pcVar28,puVar17);
          FUN_00412030(lVar13,pcVar28,local_38);
          goto LAB_00414575;
        }
      }
      else if ((cVar23 == '>') || ((cVar23 == '\0' && (cVar1 == '>')))) goto LAB_0041455d;
      if (local_44 != 0) {
        FUN_00410c50(puVar17);
      }
LAB_00414624:
      lVar13 = FUN_00411f20(lVar13,pcVar28,"missing >");
      return lVar13;
    }
    if (cVar23 != '>') {
      local_44 = 0;
      local_58 = 0;
      do {
        if (local_44 == 0) {
          lVar16 = 0;
          iVar24 = 0;
          puVar17 = malloc(0x20);
          local_88 = (long *)(puVar17 + 0x18);
          pvVar18 = malloc(2);
          local_60 = (undefined8 *)(puVar17 + 8);
        }
        else {
          puVar17 = realloc(puVar17,local_58 + 0x20);
          local_88 = (long *)(puVar17 + local_58 + 0x18);
          local_60 = (undefined8 *)(puVar17 + local_58 + 8);
          iVar24 = local_44 / 2;
          pvVar18 = realloc((void *)*local_60,(long)(iVar24 + 2));
          lVar16 = local_58;
        }
        pcVar19 = local_38;
        *local_88 = (long)pvVar18;
        *(undefined2 *)((long)pvVar18 + (long)iVar24) = 0x20;
        *(undefined8 *)(puVar17 + lVar16 + 0x10) = 0;
        *local_60 = &DAT_0041913e;
        *(char **)(puVar17 + lVar16) = local_38;
        if (DAT_00419228 == '\0') {
          sVar22 = strlen(local_38);
        }
        else if (DAT_00419229 == '\0') {
          if ((*local_38 == '\0') || (*local_38 == DAT_00419228)) {
LAB_00414e40:
            sVar22 = 0;
          }
          else {
            sVar22 = 0;
            do {
              sVar22 = sVar22 + 1;
              if (local_38[sVar22] == '\0') break;
            } while (DAT_00419228 != local_38[sVar22]);
          }
        }
        else if (DAT_0041922a == '\0') {
          cVar23 = *local_38;
          if (((cVar23 == '\0') || (DAT_00419228 == cVar23)) || (DAT_00419229 == cVar23))
          goto LAB_00414e40;
          sVar22 = 0;
          do {
            sVar22 = sVar22 + 1;
            cVar23 = local_38[sVar22];
            if ((cVar23 == '\0') || (DAT_00419228 == cVar23)) break;
          } while (DAT_00419229 != cVar23);
        }
        else if (DAT_0041922b == '\0') {
          cVar23 = *local_38;
          if ((((cVar23 == '\0') || (DAT_00419228 == cVar23)) || (DAT_00419229 == cVar23)) ||
             (DAT_0041922a == cVar23)) goto LAB_00414e40;
          sVar22 = 0;
          while( true ) {
            sVar22 = sVar22 + 1;
            cVar23 = local_38[sVar22];
            if ((cVar23 == '\0') || (DAT_00419228 == cVar23)) break;
            if ((DAT_00419229 == cVar23) || (DAT_0041922a == cVar23)) break;
          }
        }
        else {
          sVar22 = strcspn(local_38,"\t\r\n =/>");
        }
        local_38 = pcVar19 + sVar22;
        if ((*local_38 == '=') ||
           ((*(byte *)((long)*ppuVar15 + (long)*local_38 * 2 + 1) & 0x20) != 0)) {
          *local_38 = '\0';
          pcVar19 = local_38 + 1;
          if (DAT_00419230 == '\0') {
LAB_00414855:
            sVar22 = 0;
          }
          else if (DAT_00419231 == '\0') {
            if (local_38[1] != DAT_00419230) goto LAB_00414855;
            sVar20 = 0;
            do {
              sVar22 = sVar20 + 1;
              lVar26 = sVar20 + 2;
              sVar20 = sVar22;
            } while (DAT_00419230 == local_38[lVar26]);
          }
          else if (DAT_00419232 == '\0') {
            for (sVar22 = 0;
                (DAT_00419230 == local_38[sVar22 + 1] || (DAT_00419231 == local_38[sVar22 + 1]));
                sVar22 = sVar22 + 1) {
            }
          }
          else if (DAT_00419233 == '\0') {
            for (sVar22 = 0;
                ((cVar23 = local_38[sVar22 + 1], DAT_00419230 == cVar23 || (DAT_00419231 == cVar23))
                || (DAT_00419232 == cVar23)); sVar22 = sVar22 + 1) {
            }
          }
          else {
            local_38 = pcVar19;
            sVar22 = strspn(pcVar19,"\t\r\n =");
          }
          local_38 = pcVar19 + sVar22;
          cVar23 = *local_38;
          if ((cVar23 == '\"') || (cVar23 == '\'')) {
            local_38 = local_38 + 1;
            *local_60 = local_38;
            cVar3 = *local_38;
            while( true ) {
              if (cVar3 == '\0') {
                FUN_00410c50(puVar17);
                lVar13 = FUN_00411f20(lVar13,pcVar28,"missing %c",(int)cVar23);
                return lVar13;
              }
              if (cVar23 == cVar3) break;
              local_38 = local_38 + 1;
              cVar3 = *local_38;
            }
            *local_38 = '\0';
            local_38 = local_38 + 1;
            if ((local_70 != (undefined8 *)0x0) &&
               (pcVar19 = (char *)local_70[1], pcVar19 != (char *)0x0)) {
              pcVar21 = *(char **)(puVar17 + lVar16);
              local_50 = 1;
              lVar16 = 4;
              do {
                lVar26 = lVar16;
                iVar12 = strcmp(pcVar19,pcVar21);
                if (iVar12 == 0) {
                  iVar12 = (int)*(char *)local_70[local_50 + 2];
                  goto LAB_00414912;
                }
                pcVar19 = (char *)local_70[lVar26];
                lVar16 = lVar26 + 3;
                local_50 = lVar26;
              } while (pcVar19 != (char *)0x0);
            }
            iVar12 = 0x20;
LAB_00414912:
            pcVar19 = (char *)FUN_004126c0(*local_60,*(undefined8 *)(lVar13 + 0x80),iVar12);
            *local_60 = pcVar19;
            if ((pcVar19 < pcVar28) || (local_38 < pcVar19)) {
              *(undefined1 *)((long)iVar24 + *local_88) = 0x40;
            }
          }
          bVar2 = *(byte *)((long)*ppuVar15 + (long)*local_38 * 2 + 1);
          while ((bVar2 & 0x20) != 0) {
            local_38 = local_38 + 1;
            bVar2 = *(byte *)((long)*ppuVar15 + (long)*local_38 * 2 + 1);
          }
        }
        local_44 = local_44 + 2;
        cVar23 = *local_38;
        if (cVar23 == '\0') goto LAB_004145f4;
        if (cVar23 == '/') goto LAB_00414b04;
        local_58 = local_58 + 0x10;
      } while (cVar23 != '>');
    }
LAB_0041455d:
    *local_38 = '\0';
    FUN_004110a0(lVar13,pcVar28,puVar17);
    *local_38 = cVar23;
LAB_00414575:
    if (local_38 == (char *)0x0) goto LAB_00414656;
  }
LAB_00414583:
  if (*local_38 == '\0') goto LAB_00414656;
  *local_38 = '\0';
  pcVar28 = local_38 + 1;
  local_38 = pcVar28;
  if (*pcVar28 == '\0') goto LAB_00414656;
  if (*pcVar28 != '<') {
    do {
      local_38 = local_38 + 1;
      if (*local_38 == '\0') goto LAB_00414656;
    } while (*local_38 != '<');
    FUN_00413f10(lVar13,pcVar28,(long)local_38 - (long)pcVar28,0x26);
  }
  goto LAB_00414161;
}


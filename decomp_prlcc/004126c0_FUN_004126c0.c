
byte * FUN_004126c0(byte *param_1,long *param_2,char param_3)

{
  byte bVar1;
  ushort **ppuVar2;
  char *pcVar3;
  size_t sVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  size_t sVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  bool bVar15;
  char *local_38;
  
  bVar1 = *param_1;
  pbVar12 = param_1;
joined_r0x004126e5:
  if (bVar1 != 0) {
    do {
      bVar1 = *pbVar12;
      pbVar13 = pbVar12 + 1;
      pbVar6 = pbVar12;
      while( true ) {
        pbVar12 = pbVar13;
        if (bVar1 != 0xd) {
          bVar1 = *pbVar12;
          goto joined_r0x004126e5;
        }
        *pbVar6 = 10;
        if (*pbVar12 != 10) break;
        sVar10 = strlen((char *)pbVar12);
        memmove(pbVar12,pbVar12 + 1,sVar10);
        bVar1 = *pbVar12;
        pbVar13 = pbVar12 + 1;
        pbVar6 = pbVar12;
      }
    } while( true );
  }
  bVar1 = *param_1;
  pbVar12 = param_1;
  pbVar6 = param_1;
  while (bVar1 != 0) {
    if (bVar1 != 0x26) {
      if ((bVar1 == 0x25) && (param_3 == '%')) goto LAB_0041279e;
      ppuVar2 = __ctype_b_loc();
      if ((*(byte *)((long)*ppuVar2 + (long)(char)bVar1 * 2 + 1) & 0x20) != 0) goto LAB_0041279a;
      goto LAB_00412767;
    }
LAB_0041279a:
    if (bVar1 == 0) break;
LAB_0041279e:
    if (param_3 == 'c') {
LAB_00412835:
      if (((bVar1 != 0x26) || (((param_3 != '&' && (param_3 != ' ')) && (param_3 != '*')))) &&
         ((bVar1 != 0x25 || (param_3 != '%')))) {
        if (((param_3 == ' ') || (param_3 == '*')) &&
           (ppuVar2 = __ctype_b_loc(),
           (*(byte *)((long)*ppuVar2 + (long)(char)bVar1 * 2 + 1) & 0x20) != 0)) {
          pbVar13 = pbVar12 + 1;
          *pbVar12 = 0x20;
        }
        else {
LAB_00412767:
          pbVar13 = pbVar12 + 1;
        }
      }
      else {
        pcVar3 = (char *)*param_2;
        if (pcVar3 == (char *)0x0) goto LAB_00412767;
        pbVar13 = pbVar12 + 1;
        lVar8 = 0;
        do {
          sVar10 = strlen(pcVar3);
          iVar7 = strncmp((char *)pbVar13,pcVar3,sVar10);
          if (iVar7 == 0) {
            sVar10 = strlen((char *)param_2[lVar8 + 1]);
            local_38 = strchr((char *)pbVar12,0x3b);
            pbVar13 = pbVar12;
            if ((long)local_38 - (long)pbVar12 < (long)(sVar10 - 1)) {
              sVar4 = strlen(local_38);
              lVar11 = (long)pbVar12 - (long)pbVar6;
              sVar4 = lVar11 + sVar10 + sVar4;
              if (pbVar6 == param_1) {
                pcVar3 = malloc(sVar4);
                pbVar6 = (byte *)strcpy(pcVar3,(char *)pbVar6);
              }
              else {
                pbVar6 = realloc(pbVar6,sVar4);
              }
              pbVar13 = pbVar6 + lVar11;
              local_38 = strchr((char *)pbVar13,0x3b);
            }
            pcVar3 = local_38;
            sVar4 = strlen(local_38);
            memmove(pbVar13 + sVar10,pcVar3 + 1,sVar4);
            strncpy((char *)pbVar13,(char *)param_2[lVar8 + 1],sVar10);
            break;
          }
          lVar8 = lVar8 + 2;
          pcVar3 = (char *)param_2[lVar8];
        } while (pcVar3 != (char *)0x0);
      }
    }
    else {
      lVar8 = 2;
      bVar15 = false;
      pbVar13 = pbVar12;
      pbVar14 = &DAT_004191af;
      do {
        if (lVar8 == 0) break;
        lVar8 = lVar8 + -1;
        bVar15 = *pbVar13 == *pbVar14;
        pbVar13 = pbVar13 + 1;
        pbVar14 = pbVar14 + 1;
      } while (bVar15);
      if (!bVar15) goto LAB_00412835;
      if (pbVar12[2] == 0x78) {
        lVar8 = __strtol_internal(pbVar12 + 3,&local_38,0x10);
      }
      else {
        lVar8 = __strtol_internal(pbVar12 + 2,&local_38,10);
      }
      if ((lVar8 == 0) || (*local_38 != ';')) goto LAB_00412767;
      lVar11 = 0;
      lVar5 = lVar8;
      if (lVar8 < 0x80) {
        pbVar13 = pbVar12 + 1;
        *pbVar12 = (byte)lVar8;
      }
      else {
        do {
          lVar9 = lVar11;
          lVar5 = lVar5 / 2;
          lVar11 = lVar9 + 1;
        } while (lVar5 != 0);
        pbVar13 = pbVar12 + 1;
        lVar11 = (lVar9 + -1) / 5;
        *pbVar12 = (byte)(0xff << (7U - (char)lVar11 & 0x1f)) |
                   (byte)(lVar8 >> ((byte)(lVar11 * 6) & 0x3f));
        if (lVar11 != 0) {
          iVar7 = (int)(lVar11 * 6);
          lVar5 = 0;
          do {
            iVar7 = iVar7 + -6;
            pbVar12[lVar5 + 1] = (byte)(lVar8 >> ((byte)iVar7 & 0x3f)) & 0x3f | 0x80;
            lVar5 = lVar5 + 1;
          } while (lVar5 != lVar11);
          pbVar13 = pbVar13 + lVar5;
        }
      }
      pcVar3 = strchr((char *)pbVar13,0x3b);
      sVar10 = strlen(pcVar3);
      memmove(pbVar13,pcVar3 + 1,sVar10);
    }
    pbVar12 = pbVar13;
    bVar1 = *pbVar13;
  }
  if (param_3 == '*') {
    bVar1 = *pbVar6;
    pbVar12 = pbVar6;
    while (bVar1 != 0) {
      if (DAT_0041919a != 0) {
        if (DAT_0041919b == 0) {
          if (*pbVar12 != DAT_0041919a) goto LAB_004129a1;
          sVar10 = 0;
          do {
            sVar10 = sVar10 + 1;
          } while (DAT_0041919a == pbVar12[sVar10]);
        }
        else if (s_standalone_0041919c[0] == 0) {
          for (sVar10 = 0; (DAT_0041919a == pbVar12[sVar10] || (DAT_0041919b == pbVar12[sVar10]));
              sVar10 = sVar10 + 1) {
          }
        }
        else if (s_standalone_0041919c[1] == '\0') {
          for (sVar10 = 0;
              ((bVar1 = pbVar12[sVar10], DAT_0041919a == bVar1 || (DAT_0041919b == bVar1)) ||
              (s_standalone_0041919c[0] == bVar1)); sVar10 = sVar10 + 1) {
          }
        }
        else {
          sVar10 = strspn((char *)pbVar12," ");
        }
        if (sVar10 != 0) {
          sVar4 = strlen((char *)(pbVar12 + sVar10));
          memmove(pbVar12,pbVar12 + sVar10,sVar4 + 1);
        }
      }
LAB_004129a1:
      bVar1 = *pbVar12;
      while ((bVar1 != 0 && (bVar1 != 0x20))) {
        pbVar12 = pbVar12 + 1;
        bVar1 = *pbVar12;
      }
      pbVar12 = pbVar12 + 1;
      bVar1 = *pbVar12;
    }
    if ((pbVar6 <= pbVar12 + -1) && (pbVar12[-1] == 0x20)) {
      pbVar12[-1] = 0;
    }
  }
  return pbVar6;
}



/* WARNING: Type propagation algorithm not settling */

void * FUN_100721cd0(long param_1,char *param_2)

{
  undefined8 ******ppppppuVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined8 *******pppppppuVar7;
  undefined8 ******ppppppuVar8;
  time_t tVar9;
  size_t sVar10;
  byte bVar11;
  char **ppcVar12;
  undefined8 ******ppppppuVar13;
  long lVar14;
  undefined8 *******pppppppuVar15;
  char *pcVar16;
  void *pvVar17;
  undefined8 ******ppppppuVar18;
  byte *pbVar19;
  undefined8 ******local_1c8;
  undefined8 *******local_1b8;
  undefined8 *******local_1b0;
  void *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  char local_160 [8];
  byte local_158 [48];
  byte local_128 [48];
  byte local_f8 [16];
  char local_e8 [16];
  undefined8 local_d8;
  undefined1 local_b8;
  byte local_a8 [16];
  char *local_98;
  char *local_90 [4];
  char *local_70;
  undefined8 local_68;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_98 = "nonce";
  local_90[0] = "realm";
  local_90[1] = "qop";
  local_90[2] = "opaque";
  local_90[3] = "algorithm";
  local_70 = "stale";
  local_68 = 0;
  local_1b8 = &local_1b8;
  local_1b0 = &local_1b8;
LAB_100721d7e:
  local_d8 = (char *)FUN_100723c60(param_2,", \t");
  pppppppuVar15 = &local_1b8;
  if (local_d8 != (char *)0x0) {
    pcVar4 = _strtok_r(local_d8,"=",(char **)&local_d8);
    pppppppuVar15 = local_1b8;
    if ((pcVar4 == (char *)0x0) ||
       (local_d8 = (char *)FUN_100723c60(local_d8,", \t"), pppppppuVar15 = local_1b8,
       local_d8 == (char *)0x0)) goto joined_r0x0001007220c2;
    if (*local_d8 == '\"') {
      pcVar16 = local_d8 + 1;
      pcVar5 = _strchr(pcVar16,0x22);
      pppppppuVar15 = local_1b8;
      if (pcVar5 == (char *)0x0) goto joined_r0x0001007220c2;
      *pcVar5 = '\0';
      local_d8 = pcVar5 + 1;
    }
    else {
      pcVar16 = _strtok_r(local_d8,", \t",(char **)&local_d8);
    }
    puVar6 = (undefined1 *)FUN_100723d50(pcVar4);
    ppcVar12 = local_90;
    pcVar5 = "nonce";
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 0;
      ppcVar12 = local_90;
      pcVar5 = "nonce";
    }
    do {
      iVar3 = _strcmp(pcVar5,pcVar4);
      if (iVar3 == 0) {
        pppppppuVar7 = _malloc(0x20);
        pppppppuVar15 = local_1b8;
        if (pppppppuVar7 == (undefined8 *******)0x0) goto joined_r0x0001007220c2;
        pppppppuVar7[3] = (undefined8 ******)0x0;
        pppppppuVar7[2] = (undefined8 ******)0x0;
        pppppppuVar7[1] = (undefined8 ******)0x0;
        *pppppppuVar7 = (undefined8 ******)0x0;
        ppppppuVar8 = (undefined8 ******)_strdup(pcVar4);
        pppppppuVar7[2] = ppppppuVar8;
        if (ppppppuVar8 != (undefined8 ******)0x0) {
          ppppppuVar8 = (undefined8 ******)_strdup(pcVar16);
          pppppppuVar7[3] = ppppppuVar8;
          if (ppppppuVar8 != (undefined8 ******)0x0) {
            pppppppuVar7[1] = local_1b0;
            *pppppppuVar7 = &local_1b8;
            *local_1b0 = pppppppuVar7;
            param_2 = local_d8;
            local_1b0 = pppppppuVar7;
            break;
          }
          _free(pppppppuVar7[2]);
        }
        _free(pppppppuVar7);
        pppppppuVar15 = local_1b8;
        goto joined_r0x0001007220c2;
      }
      pcVar5 = *ppcVar12;
      ppcVar12 = ppcVar12 + 1;
      param_2 = local_d8;
    } while (pcVar5 != (char *)0x0);
    goto LAB_100721d7e;
  }
  do {
    pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
    if ((undefined8 ********)pppppppuVar15 == &local_1b8) goto LAB_10072204e;
    iVar3 = _strcmp((char *)pppppppuVar15[2],"nonce");
  } while (iVar3 != 0);
  ppppppuVar8 = pppppppuVar15[3];
  if (ppppppuVar8 == (undefined8 ******)0x0) {
LAB_10072204e:
    FUN_100721960(param_1,"Can\'t find mandatory parameter %s in authentication header","nonce");
    *(undefined4 *)(param_1 + 4) = 0xfffffff1;
    pvVar17 = (void *)0x0;
  }
  else {
    pppppppuVar15 = &local_1b8;
    pppppppuVar7 = &local_1b8;
    do {
      pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
      if (pppppppuVar15 == pppppppuVar7) goto LAB_10072207c;
      iVar3 = _strcmp((char *)pppppppuVar15[2],"realm");
    } while (iVar3 != 0);
    ppppppuVar1 = pppppppuVar15[3];
    if (ppppppuVar1 == (undefined8 ******)0x0) {
LAB_10072207c:
      *(undefined4 *)(param_1 + 4) = 0xfffffff1;
      FUN_100721960(param_1,"Can\'t find parameter %s in authentication header","realm");
      pvVar17 = (void *)0x0;
    }
    else {
      ppppppuVar13 = (undefined8 ******)0x0;
      do {
        pppppppuVar7 = (undefined8 *******)*pppppppuVar7;
        if ((undefined8 ********)pppppppuVar7 == &local_1b8) goto LAB_100721fad;
        iVar3 = _strcmp((char *)pppppppuVar7[2],"opaque");
      } while (iVar3 != 0);
      ppppppuVar13 = pppppppuVar7[3];
LAB_100721fad:
      local_1c8 = (undefined8 ******)0x100b173dc;
      pppppppuVar15 = &local_1b8;
      do {
        pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
        if ((undefined8 ********)pppppppuVar15 == &local_1b8) goto LAB_10072212d;
        iVar3 = _strcmp((char *)pppppppuVar15[2],"algorithm");
      } while (iVar3 != 0);
      ppppppuVar18 = pppppppuVar15[3];
      if (((ppppppuVar18 == (undefined8 ******)0x0) ||
          (iVar3 = _strcasecmp("md5-sess",(char *)ppppppuVar18), local_1c8 = ppppppuVar18,
          iVar3 == 0)) || (iVar3 = _strcasecmp("md5",(char *)ppppppuVar18), iVar3 == 0)) {
LAB_10072212d:
        lVar14 = 0;
        tVar9 = _time((time_t *)0x0);
        ___snprintf_chk(local_160,8,0,8,"%06ld",tVar9);
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        sVar10 = _strlen(local_160);
        FUN_100727950(local_160,sVar10 & 0xffffffff,&local_188,0);
        pcVar4 = (char *)(param_1 + 0x18);
        FUN_100823660(&local_98);
        sVar10 = _strlen(pcVar4);
        FUN_100823400(&local_98,pcVar4,sVar10);
        FUN_100823400(&local_98,":",1);
        sVar10 = _strlen((char *)ppppppuVar1);
        FUN_100823400(&local_98,ppppppuVar1,sVar10);
        FUN_100823400(&local_98,":",1);
        sVar10 = _strlen((char *)(param_1 + 0x58));
        FUN_100823400(&local_98,(char *)(param_1 + 0x58),sVar10);
        FUN_100823570(local_f8,&local_98);
        if (local_1c8 != (undefined8 ******)0x0) {
          iVar3 = _strcasecmp((char *)local_1c8,"md5-sess");
          lVar14 = 0;
          if (iVar3 == 0) {
            FUN_100823660(&local_98);
            FUN_100823400(&local_98,local_f8,0x10);
            FUN_100823400(&local_98,":",1);
            sVar10 = _strlen((char *)ppppppuVar8);
            FUN_100823400(&local_98,ppppppuVar8,sVar10);
            FUN_100823400(&local_98,":",1);
            sVar10 = _strlen((char *)&local_188);
            FUN_100823400(&local_98,&local_188,sVar10);
            FUN_100823570(local_f8,&local_98);
            lVar14 = 0;
          }
        }
        do {
          bVar2 = local_f8[lVar14];
          if (bVar2 < 0xa0) {
            bVar11 = bVar2 >> 4 | 0x30;
          }
          else {
            bVar11 = (bVar2 >> 4) + 0x57;
          }
          local_128[lVar14 * 2] = bVar11;
          bVar2 = bVar2 & 0xf;
          if (bVar2 < 10) {
            bVar2 = bVar2 | 0x30;
          }
          else {
            bVar2 = bVar2 + 0x57;
          }
          local_128[lVar14 * 2 + 1] = bVar2;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x10);
        local_128[0x20] = 0;
        ppppppuVar18 = (undefined8 ******)0x0;
        pppppppuVar15 = &local_1b8;
        do {
          pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
          if ((undefined8 ********)pppppppuVar15 == &local_1b8) goto LAB_10072239c;
          iVar3 = _strcmp((char *)pppppppuVar15[2],"qop");
        } while (iVar3 != 0);
        ppppppuVar18 = pppppppuVar15[3];
LAB_10072239c:
        pcVar16 = *(char **)(param_1 + 0x98);
        FUN_100823660(&local_98);
        FUN_100823400(&local_98,"CONNECT",7);
        FUN_100823400(&local_98,":",1);
        sVar10 = _strlen(pcVar16);
        FUN_100823400(&local_98,pcVar16,sVar10);
        FUN_100823570(local_f8,&local_98);
        lVar14 = 0;
        do {
          bVar2 = local_f8[lVar14];
          if (bVar2 < 0xa0) {
            bVar11 = bVar2 >> 4 | 0x30;
          }
          else {
            bVar11 = (bVar2 >> 4) + 0x57;
          }
          *(byte *)((long)&local_d8 + lVar14 * 2) = bVar11;
          bVar2 = bVar2 & 0xf;
          if (bVar2 < 10) {
            bVar2 = bVar2 | 0x30;
          }
          else {
            bVar2 = bVar2 + 0x57;
          }
          *(byte *)((long)&local_d8 + lVar14 * 2 + 1) = bVar2;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x10);
        local_b8 = 0;
        FUN_100823660(&local_98);
        FUN_100823400(&local_98,local_128,0x20);
        FUN_100823400(&local_98,":",1);
        sVar10 = _strlen((char *)ppppppuVar8);
        FUN_100823400(&local_98,ppppppuVar8,sVar10);
        FUN_100823400(&local_98,":",1);
        if ((ppppppuVar18 != (undefined8 ******)0x0) && (*(char *)ppppppuVar18 != '\0')) {
          ___snprintf_chk(local_e8,0x10,0,0x10,"%08x",1);
          sVar10 = _strlen(local_e8);
          FUN_100823400(&local_98,local_e8,sVar10);
          FUN_100823400(&local_98,":",1);
          sVar10 = _strlen((char *)&local_188);
          FUN_100823400(&local_98,&local_188,sVar10);
          FUN_100823400(&local_98,":",1);
          sVar10 = _strlen((char *)ppppppuVar18);
          FUN_100823400(&local_98,ppppppuVar18,sVar10);
          FUN_100823400(&local_98,":",1);
        }
        FUN_100823400(&local_98,&local_d8,0x20);
        FUN_100823570(local_a8,&local_98);
        lVar14 = 0;
        do {
          bVar2 = local_a8[lVar14];
          if (bVar2 < 0xa0) {
            bVar11 = bVar2 >> 4 | 0x30;
          }
          else {
            bVar11 = (bVar2 >> 4) + 0x57;
          }
          local_158[lVar14 * 2] = bVar11;
          bVar2 = bVar2 & 0xf;
          if (bVar2 < 10) {
            bVar2 = bVar2 | 0x30;
          }
          else {
            bVar2 = bVar2 + 0x57;
          }
          local_158[lVar14 * 2 + 1] = bVar2;
          lVar14 = lVar14 + 1;
        } while (lVar14 != 0x10);
        local_158[0x20] = 0;
        local_1a8 = (void *)0x0;
        uStack_1a0 = 0;
        local_198 = 0;
        pbVar19 = local_158;
        if (ppppppuVar18 == (undefined8 ******)0x0) {
          pcVar16 = "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\"";
        }
        else {
          pbVar19 = (byte *)&local_188;
          pcVar16 = 
          "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=\"%s\", response=\"%s\""
          ;
        }
        iVar3 = FUN_100721a30(&local_1a8,pcVar16,pcVar4,ppppppuVar1,ppppppuVar8,
                              *(undefined8 *)(param_1 + 0x98),pbVar19);
        if ((ppppppuVar13 != (undefined8 ******)0x0) && (0 < iVar3)) {
          iVar3 = FUN_100721a30(&local_1a8,", opaque=\"%s\"",ppppppuVar13);
        }
        if (((local_1c8 != (undefined8 ******)"md5") && (local_1c8 != (undefined8 ******)0x0)) &&
           (0 < iVar3)) {
          iVar3 = FUN_100721a30(&local_1a8,", algorithm=\"%s\"",local_1c8);
        }
        pvVar17 = local_1a8;
        if (iVar3 < 1) {
          FUN_100721960(param_1,"No enough memory");
          *(undefined4 *)(param_1 + 4) = 0xfffffffe;
          pvVar17 = (void *)0x0;
        }
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xfffffff1;
        FUN_100721960(param_1,"Unsupported authentication algotithm %s",ppppppuVar18);
        pvVar17 = (void *)0x0;
      }
    }
  }
  pppppppuVar15 = local_1b8;
  while ((undefined8 ********)pppppppuVar15 != &local_1b8) {
    pppppppuVar7 = (undefined8 *******)*pppppppuVar15;
    if (pppppppuVar15[2] != (undefined8 ******)0x0) {
      _free(pppppppuVar15[2]);
    }
    if (pppppppuVar15[3] != (undefined8 ******)0x0) {
      _free(pppppppuVar15[3]);
    }
    _free(pppppppuVar15);
    pppppppuVar15 = pppppppuVar7;
  }
  if ((pvVar17 == (void *)0x0) && (pvVar17 = (void *)0x0, local_1a8 != (void *)0x0)) {
    _free(local_1a8);
    local_1a8 = (void *)0x0;
    uStack_1a0 = 0;
    local_198 = 0;
    pvVar17 = (void *)0x0;
  }
LAB_1007227b0:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return pvVar17;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
joined_r0x0001007220c2:
  while ((undefined8 ********)pppppppuVar15 != &local_1b8) {
    pppppppuVar7 = (undefined8 *******)*pppppppuVar15;
    if (pppppppuVar15[2] != (undefined8 ******)0x0) {
      _free(pppppppuVar15[2]);
    }
    if (pppppppuVar15[3] != (undefined8 ******)0x0) {
      _free(pppppppuVar15[3]);
    }
    _free(pppppppuVar15);
    pppppppuVar15 = pppppppuVar7;
  }
  pvVar17 = (void *)0x0;
  FUN_100721960(param_1,"Can\'t parse authentication header");
  *(undefined4 *)(param_1 + 4) = 0xfffffff1;
  goto LAB_1007227b0;
}


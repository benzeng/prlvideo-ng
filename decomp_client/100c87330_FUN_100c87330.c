
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_100c87330(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5,int param_6,
             undefined8 param_7,long param_8)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined4 uVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  char *local_b0;
  long local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  pcVar10 = "application/x-pkcs7-";
  if ((param_4 & 0x400) == 0) {
    pcVar10 = "application/pkcs7-";
  }
  pcVar8 = "\r\n";
  if ((param_4 & 0x800) == 0) {
    pcVar8 = "\n";
  }
  local_38 = lVar7;
  if ((param_3 == 0) || ((param_4 & 0x40) == 0)) {
    local_b0 = "smime.p7m";
    if (param_5 == 0x17) {
      pcVar9 = "enveloped-data";
    }
    else if (param_5 == 0x16) {
      if (param_6 == 0xcc) {
        pcVar9 = "signed-receipt";
      }
      else {
        iVar3 = FUN_100c60800(param_7);
        pcVar9 = "certs-only";
        if (-1 < iVar3) {
          pcVar9 = "signed-data";
        }
      }
    }
    else {
      pcVar9 = (char *)0x0;
      if (param_5 == 0x312) {
        pcVar9 = "compressed-data";
        local_b0 = "smime.p7z";
      }
    }
    uVar11 = 0;
    FUN_100c5c0c0(param_1,"MIME-Version: 1.0%s",pcVar8);
    FUN_100c5c0c0(param_1,"Content-Disposition: attachment;");
    FUN_100c5c0c0(param_1," filename=\"%s\"%s",local_b0,pcVar8);
    FUN_100c5c0c0(param_1,"Content-Type: %smime;",pcVar10);
    if (pcVar9 != (char *)0x0) {
      FUN_100c5c0c0(param_1," smime-type=%s;",pcVar9);
    }
    FUN_100c5c0c0(param_1," name=\"%s\"%s",local_b0,pcVar8);
    FUN_100c5c0c0(param_1,"Content-Transfer-Encoding: base64%s%s",pcVar8,pcVar8);
    iVar3 = FUN_100c87280(param_1,param_2,param_3,param_4,param_8);
    if (iVar3 == 0) goto LAB_100c87a4d;
    FUN_100c5c0c0(param_1,"%s",pcVar8);
  }
  else {
    iVar3 = FUN_100c62190(local_68,0x20);
    uVar11 = 0;
    if (iVar3 < 0) goto LAB_100c87a4d;
    local_68 = local_68 & _DAT_101daeb50;
    auVar15 = psubusb(local_68,s_00000000000000007777777777777777_101daeb60._0_16_);
    auVar16[0] = -(auVar15[0] == '\0');
    auVar16[1] = -(auVar15[1] == '\0');
    auVar16[2] = -(auVar15[2] == '\0');
    auVar16[3] = -(auVar15[3] == '\0');
    auVar16[4] = -(auVar15[4] == '\0');
    auVar16[5] = -(auVar15[5] == '\0');
    auVar16[6] = -(auVar15[6] == '\0');
    auVar16[7] = -(auVar15[7] == '\0');
    auVar16[8] = -(auVar15[8] == '\0');
    auVar16[9] = -(auVar15[9] == '\0');
    auVar16[10] = -(auVar15[10] == '\0');
    auVar16[0xb] = -(auVar15[0xb] == '\0');
    auVar16[0xc] = -(auVar15[0xc] == '\0');
    auVar16[0xd] = -(auVar15[0xd] == '\0');
    auVar16[0xe] = -(auVar15[0xe] == '\0');
    auVar16[0xf] = -(auVar15[0xf] == '\0');
    auVar13[0] = local_68[0] + s_00000000000000007777777777777777_101daeb60[0x20];
    auVar13[1] = local_68[1] + s_00000000000000007777777777777777_101daeb60[0x21];
    auVar13[2] = local_68[2] + s_00000000000000007777777777777777_101daeb60[0x22];
    auVar13[3] = local_68[3] + s_00000000000000007777777777777777_101daeb60[0x23];
    auVar13[4] = local_68[4] + s_00000000000000007777777777777777_101daeb60[0x24];
    auVar13[5] = local_68[5] + s_00000000000000007777777777777777_101daeb60[0x25];
    auVar13[6] = local_68[6] + s_00000000000000007777777777777777_101daeb60[0x26];
    auVar13[7] = local_68[7] + s_00000000000000007777777777777777_101daeb60[0x27];
    auVar13[8] = local_68[8] + s_00000000000000007777777777777777_101daeb60[0x28];
    auVar13[9] = local_68[9] + s_00000000000000007777777777777777_101daeb60[0x29];
    auVar13[10] = local_68[10] + s_00000000000000007777777777777777_101daeb60[0x2a];
    auVar13[0xb] = local_68[0xb] + s_00000000000000007777777777777777_101daeb60[0x2b];
    auVar13[0xc] = local_68[0xc] + s_00000000000000007777777777777777_101daeb60[0x2c];
    auVar13[0xd] = local_68[0xd] + s_00000000000000007777777777777777_101daeb60[0x2d];
    auVar13[0xe] = local_68[0xe] + s_00000000000000007777777777777777_101daeb60[0x2e];
    auVar13[0xf] = local_68[0xf] + s_00000000000000007777777777777777_101daeb60[0x2f];
    local_68 = ~auVar16 & auVar13 |
               (local_68 | s_00000000000000007777777777777777_101daeb60._16_16_) & auVar16;
    local_58 = _DAT_101daeb50 & local_58;
    auVar15 = psubusb(local_58,s_00000000000000007777777777777777_101daeb60._0_16_);
    auVar14[0] = -(auVar15[0] == '\0');
    auVar14[1] = -(auVar15[1] == '\0');
    auVar14[2] = -(auVar15[2] == '\0');
    auVar14[3] = -(auVar15[3] == '\0');
    auVar14[4] = -(auVar15[4] == '\0');
    auVar14[5] = -(auVar15[5] == '\0');
    auVar14[6] = -(auVar15[6] == '\0');
    auVar14[7] = -(auVar15[7] == '\0');
    auVar14[8] = -(auVar15[8] == '\0');
    auVar14[9] = -(auVar15[9] == '\0');
    auVar14[10] = -(auVar15[10] == '\0');
    auVar14[0xb] = -(auVar15[0xb] == '\0');
    auVar14[0xc] = -(auVar15[0xc] == '\0');
    auVar14[0xd] = -(auVar15[0xd] == '\0');
    auVar14[0xe] = -(auVar15[0xe] == '\0');
    auVar14[0xf] = -(auVar15[0xf] == '\0');
    auVar15[0] = local_58[0] + s_00000000000000007777777777777777_101daeb60[0x20];
    auVar15[1] = local_58[1] + s_00000000000000007777777777777777_101daeb60[0x21];
    auVar15[2] = local_58[2] + s_00000000000000007777777777777777_101daeb60[0x22];
    auVar15[3] = local_58[3] + s_00000000000000007777777777777777_101daeb60[0x23];
    auVar15[4] = local_58[4] + s_00000000000000007777777777777777_101daeb60[0x24];
    auVar15[5] = local_58[5] + s_00000000000000007777777777777777_101daeb60[0x25];
    auVar15[6] = local_58[6] + s_00000000000000007777777777777777_101daeb60[0x26];
    auVar15[7] = local_58[7] + s_00000000000000007777777777777777_101daeb60[0x27];
    auVar15[8] = local_58[8] + s_00000000000000007777777777777777_101daeb60[0x28];
    auVar15[9] = local_58[9] + s_00000000000000007777777777777777_101daeb60[0x29];
    auVar15[10] = local_58[10] + s_00000000000000007777777777777777_101daeb60[0x2a];
    auVar15[0xb] = local_58[0xb] + s_00000000000000007777777777777777_101daeb60[0x2b];
    auVar15[0xc] = local_58[0xc] + s_00000000000000007777777777777777_101daeb60[0x2c];
    auVar15[0xd] = local_58[0xd] + s_00000000000000007777777777777777_101daeb60[0x2d];
    auVar15[0xe] = local_58[0xe] + s_00000000000000007777777777777777_101daeb60[0x2e];
    auVar15[0xf] = local_58[0xf] + s_00000000000000007777777777777777_101daeb60[0x2f];
    local_58 = ~auVar14 & auVar15 |
               (s_00000000000000007777777777777777_101daeb60._16_16_ | local_58) & auVar14;
    local_48 = 0;
    iVar12 = 0;
    FUN_100c5c0c0(param_1,"MIME-Version: 1.0%s",pcVar8);
    FUN_100c5c0c0(param_1,"Content-Type: multipart/signed;");
    FUN_100c5c0c0(param_1," protocol=\"%ssignature\";",pcVar10);
    FUN_100c58a70(param_1," micalg=\"");
    iVar3 = FUN_100c60800(param_7);
    if (0 < iVar3) {
      bVar2 = false;
      bVar1 = false;
      do {
        if (bVar1) {
          FUN_100c58980(param_1,",",1);
        }
        puVar5 = (undefined8 *)FUN_100c60820(param_7,iVar12);
        iVar3 = FUN_100bf7220(*puVar5);
        uVar6 = FUN_100bf70a0(iVar3);
        lVar7 = FUN_100c6bd60(uVar6);
        if ((lVar7 == 0) || (*(code **)(lVar7 + 0x70) == (code *)0x0)) {
LAB_100c87600:
          if (iVar3 < 0x2a0) {
            if (iVar3 == 4) {
              pcVar9 = "md5";
            }
            else {
              if (iVar3 != 0x40) goto LAB_100c87532;
              pcVar9 = "sha1";
            }
          }
          else if (iVar3 < 0x2a2) {
            if (iVar3 == 0x2a0) {
              pcVar9 = "sha-256";
            }
            else {
              if (iVar3 != 0x2a1) goto LAB_100c87532;
              pcVar9 = "sha-384";
            }
          }
          else {
            if (iVar3 != 0x2a2) {
              if (iVar3 != 0x329) {
LAB_100c87532:
                bVar1 = false;
                if (!bVar2) {
                  FUN_100c58a70(param_1,"unknown");
                  bVar1 = true;
                  bVar2 = true;
                }
                goto LAB_100c8769a;
              }
              FUN_100c58a70(param_1,"gostr3411-94");
              break;
            }
            pcVar9 = "sha-512";
          }
          FUN_100c58a70(param_1,pcVar9);
          bVar1 = true;
        }
        else {
          iVar4 = (**(code **)(lVar7 + 0x70))(0,2,0,&local_88);
          if (iVar4 < 1) {
            if (iVar4 == -2) goto LAB_100c87600;
            break;
          }
          FUN_100c58a70(param_1,local_88);
          FUN_100bf3910(local_88);
          bVar1 = true;
        }
LAB_100c8769a:
        iVar12 = iVar12 + 1;
        iVar3 = FUN_100c60800(param_7);
      } while (iVar12 < iVar3);
    }
    FUN_100c5c0c0(param_1,"\"; boundary=\"----%s\"%s%s",local_68,pcVar8,pcVar8);
    FUN_100c5c0c0(param_1,"This is an S/MIME signed message%s%s",pcVar8,pcVar8);
    FUN_100c5c0c0(param_1,"------%s%s",local_68,pcVar8);
    local_70 = param_2;
    if ((param_4 & 0x8040) == 0x40) {
      lVar7 = *(long *)(param_8 + 0x20);
      if ((lVar7 == 0) || (*(code **)(lVar7 + 0x18) == (code *)0x0)) {
        FUN_100c62ee0(0xd,0xd6,0xca,"asn_mime.c",0x17e);
      }
      else {
        local_78 = 0;
        local_80 = 0;
        local_88 = param_1;
        iVar3 = (**(code **)(lVar7 + 0x18))(0xc,&local_70,param_8,&local_88);
        if (0 < iVar3) {
          FUN_100c87040(param_3,local_80,param_4);
          iVar3 = (**(code **)(lVar7 + 0x18))(0xd,&local_70,param_8,&local_88);
          while (local_80 != param_1) {
            lVar7 = FUN_100c592a0(local_80);
            FUN_100c586e0(local_80);
            local_80 = lVar7;
          }
          uVar11 = 0;
          lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
          if (iVar3 < 1) goto LAB_100c87a4d;
          goto LAB_100c8795b;
        }
      }
      uVar11 = 0;
      lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
      goto LAB_100c87a4d;
    }
    FUN_100c87040(param_3,param_1);
    lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
LAB_100c8795b:
    FUN_100c5c0c0(param_1,"%s------%s%s",pcVar8,local_68,pcVar8);
    FUN_100c5c0c0(param_1,"Content-Type: %ssignature;",pcVar10);
    FUN_100c5c0c0(param_1," name=\"smime.p7s\"%s",pcVar8);
    FUN_100c5c0c0(param_1,"Content-Transfer-Encoding: base64%s",pcVar8);
    FUN_100c5c0c0(param_1,"Content-Disposition: attachment;");
    FUN_100c5c0c0(param_1," filename=\"smime.p7s\"%s%s",pcVar8,pcVar8);
    FUN_100c87280(param_1,param_2,0,0,param_8);
    FUN_100c5c0c0(param_1,"%s------%s--%s%s",pcVar8,local_68,pcVar8,pcVar8);
  }
  uVar11 = 1;
LAB_100c87a4d:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}



int FUN_10071a230(long param_1,char *param_2,int param_3,int param_4,undefined8 param_5,int *param_6
                 )

{
  long *plVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  size_t sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  undefined8 uVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  bool bVar21;
  undefined8 in_stack_fffffffffffffef8;
  undefined4 uVar22;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  char local_58 [32];
  long local_38;
  
  uVar22 = (undefined4)((ulong)in_stack_fffffffffffffef8 >> 0x20);
  lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar20;
  if (param_3 != 0x22) {
LAB_10071a871:
    uVar16 = 0xfffffff4;
LAB_10071a876:
    iVar4 = FUN_10071e690(uVar16,0);
    goto LAB_10071aad8;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_68 = 0;
  iVar19 = 0;
  FUN_100727290(&local_c8,&local_d0,0,0);
  iVar4 = FUN_100740800(param_2,local_c8,local_d0,0);
  bVar21 = true;
  if (iVar4 != 0) {
    FUN_100727290(&local_c8,&local_d0,1,0);
    iVar4 = FUN_100740800(param_2,local_c8,local_d0,1);
    bVar21 = iVar4 == 0;
    iVar19 = !bVar21 + 1;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iVar19;
  }
  if (bVar21) {
    plVar6 = _malloc(0x2b0);
    if (plVar6 == (long *)0x0) {
      uVar16 = 0xfffffffe;
      goto LAB_10071a425;
    }
    ___bzero(plVar6,0x290);
    plVar6[0x55] = (long)(plVar6 + 0x54);
    plVar6[0x54] = (long)(plVar6 + 0x54);
    plVar1 = plVar6 + 0x52;
    plVar6[0x53] = (long)plVar1;
    plVar6[0x52] = (long)plVar1;
    switch(local_b8 & 0xffffffff) {
    case 0:
      iVar4 = FUN_10071acf0(&local_b8,plVar6,&local_bc);
      break;
    case 1:
      local_58[0] = '\0';
      local_58[1] = '\0';
      local_58[2] = '\0';
      local_58[3] = '\0';
      local_58[4] = '\0';
      local_58[5] = '\0';
      local_58[6] = '\0';
      local_58[7] = '\0';
      local_58[8] = '\0';
      local_58[9] = '\0';
      local_58[10] = '\0';
      local_58[0xb] = '\0';
      local_58[0xc] = '\0';
      local_58[0xd] = '\0';
      local_58[0xe] = '\0';
      local_58[0xf] = '\0';
      local_58[0x10] = '\0';
      local_58[0x11] = '\0';
      local_58[0x12] = '\0';
      local_58[0x13] = '\0';
      local_58[0x14] = '\0';
      local_58[0x15] = '\0';
      local_58[0x16] = '\0';
      local_58[0x17] = '\0';
      iVar19 = 0;
      iVar4 = 0;
      lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
      pcVar14 = param_2;
      do {
        if (3 < iVar19) goto LAB_10071a47a;
        cVar2 = pcVar14[6];
        while( true ) {
          if (cVar2 != '-') goto LAB_10071a871;
LAB_10071a47a:
          if (iVar19 != 0) break;
          if ((pcVar14[4] != '0') || (pcVar14[5] != '0')) goto LAB_10071a871;
          cVar2 = pcVar14[0xd];
          pcVar14 = pcVar14 + 7;
          iVar19 = 1;
        }
        cVar2 = *pcVar14;
        lVar17 = 0;
        do {
          uVar5 = (uint)lVar17;
          uVar15 = uVar5;
          if ((("0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2) ||
              (uVar15 = uVar5 + 1, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17 + 1] == cVar2)) ||
             (uVar15 = uVar5 + 2, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17 + 2] == cVar2)) break;
          if ("0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17 + 3] == cVar2) {
            uVar15 = uVar5 + 3;
            break;
          }
          lVar17 = lVar17 + 4;
          uVar15 = 0xffffffff;
        } while (lVar17 < 0x20);
        cVar2 = pcVar14[1];
        iVar9 = 0;
        lVar17 = 3;
        while ((&UNK_100b4abfd)[lVar17] != cVar2) {
          iVar8 = iVar9 + 1;
          if ((((&UNK_100b4abfe)[lVar17] == cVar2) ||
              (iVar8 = iVar9 + 2, (&UNK_100b4abff)[lVar17] == cVar2)) ||
             (iVar8 = iVar9 + 3, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2))
          goto LAB_10071a559;
          iVar9 = iVar9 + 4;
          lVar13 = lVar17 + 1;
          lVar17 = lVar17 + 4;
          if (0x1f < lVar13) goto LAB_10071a871;
        }
        iVar8 = (int)lVar17 + -3;
LAB_10071a559:
        if (iVar8 < 0) goto LAB_10071a871;
        cVar2 = pcVar14[2];
        iVar9 = 0;
        lVar17 = 3;
        while ((&UNK_100b4abfd)[lVar17] != cVar2) {
          iVar18 = iVar9 + 1;
          if ((((&UNK_100b4abfe)[lVar17] == cVar2) ||
              (iVar18 = iVar9 + 2, (&UNK_100b4abff)[lVar17] == cVar2)) ||
             (iVar18 = iVar9 + 3, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2))
          goto LAB_10071a5c1;
          iVar9 = iVar9 + 4;
          lVar13 = lVar17 + 1;
          lVar17 = lVar17 + 4;
          if (0x1f < lVar13) goto LAB_10071a871;
        }
        iVar18 = (int)lVar17 + -3;
LAB_10071a5c1:
        if (iVar18 < 0) goto LAB_10071a871;
        cVar2 = pcVar14[3];
        iVar9 = 0;
        lVar17 = 3;
        while ((&UNK_100b4abfd)[lVar17] != cVar2) {
          iVar10 = iVar9 + 1;
          if ((((&UNK_100b4abfe)[lVar17] == cVar2) ||
              (iVar10 = iVar9 + 2, (&UNK_100b4abff)[lVar17] == cVar2)) ||
             (iVar10 = iVar9 + 3, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2))
          goto LAB_10071a62b;
          iVar9 = iVar9 + 4;
          lVar13 = lVar17 + 1;
          lVar17 = lVar17 + 4;
          if (0x1f < lVar13) goto LAB_10071a871;
        }
        iVar10 = (int)lVar17 + -3;
LAB_10071a62b:
        if (iVar10 < 0) goto LAB_10071a871;
        cVar2 = pcVar14[4];
        iVar9 = 0;
        lVar17 = 3;
        while ((&UNK_100b4abfd)[lVar17] != cVar2) {
          iVar11 = iVar9 + 1;
          if ((((&UNK_100b4abfe)[lVar17] == cVar2) ||
              (iVar11 = iVar9 + 2, (&UNK_100b4abff)[lVar17] == cVar2)) ||
             (iVar11 = iVar9 + 3, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2))
          goto LAB_10071a694;
          iVar9 = iVar9 + 4;
          lVar13 = lVar17 + 1;
          lVar17 = lVar17 + 4;
          if (0x1f < lVar13) goto LAB_10071a871;
        }
        iVar11 = (int)lVar17 + -3;
LAB_10071a694:
        if (iVar11 < 0) goto LAB_10071a871;
        if (-1 < iVar4) {
          lVar17 = (long)iVar4;
          iVar4 = iVar4 + 1;
          local_58[lVar17] = cVar2;
        }
        cVar2 = pcVar14[5];
        iVar9 = 0;
        lVar17 = 3;
        while ((&UNK_100b4abfd)[lVar17] != cVar2) {
          iVar12 = iVar9 + 1;
          if ((((&UNK_100b4abfe)[lVar17] == cVar2) ||
              (iVar12 = iVar9 + 2, (&UNK_100b4abff)[lVar17] == cVar2)) ||
             (iVar12 = iVar9 + 3, "0123456789ABCDEFGHJKMNPQRSTVWXYZ<"[lVar17] == cVar2))
          goto LAB_10071a70d;
          iVar9 = iVar9 + 4;
          lVar13 = lVar17 + 1;
          lVar17 = lVar17 + 4;
          if (0x1f < lVar13) goto LAB_10071a871;
        }
        iVar12 = (int)lVar17 + -3;
LAB_10071a70d:
        if (iVar12 < 0) goto LAB_10071a871;
        if (-1 < iVar4) {
          lVar17 = (long)iVar4;
          iVar4 = iVar4 + 1;
          local_58[lVar17] = cVar2;
        }
        if ((iVar18 + iVar8 + iVar10 + iVar11 + iVar12 & 0x1fU) != uVar15) goto LAB_10071a871;
        iVar19 = iVar19 + 1;
        pcVar14 = pcVar14 + 7;
      } while (iVar19 < 5);
      plVar6 = _malloc(0x2b0);
      if (plVar6 != (long *)0x0) {
        ___bzero(plVar6,0x290);
        plVar1 = plVar6 + 0x52;
        plVar6[0x53] = (long)plVar1;
        plVar6[0x52] = (long)plVar1;
        plVar6[0x55] = (long)(plVar6 + 0x54);
        plVar6[0x54] = (long)(plVar6 + 0x54);
        sVar7 = _strlen(local_58);
        FUN_1007201b0(plVar6 + 0x4d,local_58,sVar7 & 0xffffffff);
        *(byte *)((long)plVar6 + 0x19) = *(byte *)((long)plVar6 + 0x19) | 0x18;
        iVar4 = 0;
        ___snprintf_chk(plVar6 + 4,0x50,0,0x290,"VZAKEY");
        *(undefined2 *)((long)plVar6 + 0x1a4) = *(undefined2 *)(param_2 + 0x20);
        *(undefined8 *)((long)plVar6 + 0x19c) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)((long)plVar6 + 0x194) = *(undefined8 *)(param_2 + 0x10);
        uVar16 = *(undefined8 *)param_2;
        *(undefined8 *)((long)plVar6 + 0x18c) = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)((long)plVar6 + 0x184) = uVar16;
        *(byte *)(plVar6 + 3) = *(byte *)(plVar6 + 3) | 0x20;
        *(byte *)((long)plVar6 + 0x1d4) = *(byte *)((long)plVar6 + 0x1d4) | 0x10;
        puVar3 = *(undefined8 **)(param_1 + 8);
        plVar6[1] = (long)puVar3;
        *plVar6 = param_1;
        *puVar3 = plVar6;
        *(long **)(param_1 + 8) = plVar6;
        uVar16 = FUN_10071b050(param_2,0x22,1);
        FUN_100722fa0(plVar1,"keyserver_host",uVar16);
        goto LAB_10071aad8;
      }
      uVar16 = 0xfffffffe;
      goto LAB_10071a876;
    case 2:
      if (iVar19 != 1) {
        iVar4 = FUN_10071acf0(&local_b8,plVar6,&local_bc);
        local_bc = param_4;
        break;
      }
      iVar4 = FUN_100719f60(local_a8._4_4_,uStack_a0 & 0xffffffff,uStack_a0._4_4_,plVar6 + 0x24,
                            plVar6 + 0x1f);
      if (iVar4 == 0) {
        *(byte *)(plVar6 + 3) = *(byte *)(plVar6 + 3) | 0xc0;
        local_bc = 3;
        iVar4 = FUN_10071b470((long)&local_b8 + 4,plVar6,3,0);
        if (iVar4 == 0) {
          *(undefined4 *)(plVar6 + 0x19) = 0;
          *(undefined4 *)((long)plVar6 + 0xcc) = uStack_b0._4_4_;
          ___snprintf_chk(plVar6 + 4,0x50,0,0x290,"%s","PRLSRV");
          plVar6[0x50] = local_b8 >> 0x20;
          *(undefined4 *)(plVar6 + 0x51) = 0;
          *(byte *)((long)plVar6 + 0x19) = *(byte *)((long)plVar6 + 0x19) | 0x18;
          iVar4 = FUN_100714a30();
          if (iVar4 - 4U < 6) {
            pcVar14 = (&PTR_s_PSBM_100bce390)[(int)(iVar4 - 4U)];
          }
          else {
            pcVar14 = "VZ";
          }
          ___snprintf_chk(plVar6 + 0x4d,0x11,0,0x48,"%s%08lu%04u",pcVar14,plVar6[0x50],
                          (int)plVar6[0x51]);
          iVar9 = 3;
          goto LAB_10071a3ef;
        }
      }
      goto LAB_10071aac5;
    case 3:
      if ((int)uStack_b0 != 0) {
        pcVar14 = "unsupported version of license";
        goto LAB_10071a394;
      }
      *(undefined4 *)(plVar6 + 0x19) = 0;
      *(undefined4 *)((long)plVar6 + 0xcc) = 1;
      plVar6[3] = 4;
      ___snprintf_chk(plVar6 + 4,0x50,0,0x290,"%s","PCSSTOR");
      local_bc = 6;
      iVar4 = FUN_10071b470((long)&local_b8 + 4,plVar6,6,0);
      if (iVar4 != 0) goto LAB_10071aac5;
      if ((int)uStack_a0 == -1) {
        plVar6[0x1f] = 0xffff;
        ___snprintf_chk(plVar6 + 0x20,0x20,0,0x1b0,"unlimited");
      }
      else {
        plVar6[0x1f] = (long)(int)(((int)uStack_a0 * 0x16d + (int)local_a8 +
                                    *(int *)(&DAT_100b4a990 + (long)(local_a8._4_4_ + -1) * 4) +
                                    ((int)((int)uStack_a0 + -0x7d9 +
                                          ((uint)((int)uStack_a0 + -0x7d9 >> 0x1f) >> 0x1e)) >> 2) +
                                   (uint)(1 < local_a8._4_4_ + -1 && (uStack_a0 & 3) == 0)) *
                                   0x15180 + -0x76f12001);
        ___snprintf_chk(plVar6 + 0x20,0x20,0,0x1b0,"%02d/%02d/%04d %02d:%02d:%02d",local_a8._4_4_,
                        CONCAT44(uVar22,(int)local_a8),(int)uStack_a0,0x17,0x3b,0x3b);
      }
      plVar6[0x50] = uStack_b0 >> 0x20;
      *(undefined4 *)(plVar6 + 0x51) = 0;
      plVar6[3] = plVar6[3] | 0x1840;
      iVar4 = FUN_100714a30();
      if (iVar4 - 4U < 6) {
        pcVar14 = (&PTR_s_PSBM_100bce390)[(int)(iVar4 - 4U)];
      }
      else {
        pcVar14 = "VZ";
      }
      ___snprintf_chk(plVar6 + 0x4d,0x11,0,0x48,"%s%08lu%04u",pcVar14,plVar6[0x50],(int)plVar6[0x51]
                     );
      *(int *)(plVar6 + 0x30) = uStack_a0._4_4_ * 0x3c;
      *(byte *)((long)plVar6 + 0x19) = *(byte *)((long)plVar6 + 0x19) | 2;
      iVar9 = 6;
      goto LAB_10071a3ef;
    default:
      pcVar14 = "unsupported license class";
LAB_10071a394:
      iVar4 = FUN_10071e690(0xfffffff4,pcVar14);
    }
    iVar9 = local_bc;
    if (iVar4 == 0) {
LAB_10071a3ef:
      if ((param_4 != 0) && (iVar9 != param_4)) {
        FUN_1007230c0(plVar6);
        uVar16 = 0xfffffff9;
        goto LAB_10071a425;
      }
      iVar4 = FUN_100719360(plVar6);
      if (iVar4 != 0) {
        FUN_1007230c0(plVar6);
        goto LAB_10071a420;
      }
      if ((iVar19 == 1) && (iVar4 = _strcmp((char *)(plVar6 + 4),"PRLSRV"), iVar4 == 0)) {
        FUN_100722fa0(plVar1,"internal_pub_key","0");
      }
      *(byte *)((long)plVar6 + 0x1d4) = *(byte *)((long)plVar6 + 0x1d4) | 2;
      iVar4 = 0;
      ___snprintf_chk((long)plVar6 + 0x184,0x50,0,300,"%s",param_2);
      *(byte *)(plVar6 + 3) = *(byte *)(plVar6 + 3) | 0x20;
      puVar3 = *(undefined8 **)(param_1 + 8);
      plVar6[1] = (long)puVar3;
      *plVar6 = param_1;
      *puVar3 = plVar6;
      *(long **)(param_1 + 8) = plVar6;
    }
    else {
LAB_10071aac5:
      FUN_1007230c0(plVar6);
    }
  }
  else {
LAB_10071a420:
    uVar16 = 0xfffffff4;
LAB_10071a425:
    iVar4 = FUN_10071e690(uVar16,0);
  }
  lVar20 = *(long *)PTR____stack_chk_guard_100ba2320;
LAB_10071aad8:
  if (lVar20 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar4;
}


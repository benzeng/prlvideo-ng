
undefined4
FUN_1008ae920(undefined8 param_1,ulong *param_2,long param_3,int param_4,undefined8 param_5,
             int param_6,int param_7)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  char *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  int iVar16;
  int *piVar17;
  long lVar18;
  undefined4 uVar19;
  long local_e0;
  uint local_d8;
  uint local_d4;
  int local_d0;
  undefined4 uStack_cc;
  ulong local_c8;
  ulong local_c0;
  char local_b8 [128];
  long local_38;
  
  lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_e0 = 0;
  iVar16 = (int)param_5;
  local_38 = lVar18;
  if (0x80 < iVar16) {
    FUN_10087d870(param_1,"BAD RECURSION DEPTH\n");
    uVar19 = 0;
LAB_1008af480:
    if (lVar18 == local_38) {
      return uVar19;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  local_c0 = *param_2;
  uVar19 = 1;
  piVar17 = (int *)0x0;
  if (param_3 < 1) {
LAB_1008af447:
    if (local_e0 != 0) {
      FUN_100899890();
    }
    lVar18 = *(long *)PTR____stack_chk_guard_100ba2320;
    if (piVar17 != (int *)0x0) {
      FUN_1008afd70(piVar17);
    }
    *param_2 = local_c0;
    goto LAB_1008af480;
  }
  uVar1 = local_c0 + param_3;
  iVar5 = iVar16;
  if (param_6 == 0) {
    iVar5 = 0;
  }
LAB_1008ae9e9:
  uVar4 = local_c0;
  uVar6 = FUN_1008af630(&local_c0,&local_d0,&local_d4,&local_d8,param_3);
  if ((uVar6 & 0x80) != 0) {
    FUN_10087d780(param_1,"Error in encoding\n",0x12);
LAB_1008af41a:
    uVar19 = 0;
    piVar17 = (int *)0x0;
    goto LAB_1008af447;
  }
  iVar8 = (int)local_c0;
  iVar7 = FUN_100880ec0(param_1,"%5ld:",(uVar4 + (long)param_4) - *param_2);
  if (iVar7 < 1) {
    uVar19 = 0;
    piVar17 = (int *)0x0;
    goto LAB_1008af447;
  }
  lVar18 = (long)(iVar8 - (int)uVar4);
  if (uVar6 == 0x21) {
    iVar8 = FUN_100880ec0(param_1,"d=%-2d hl=%ld l=inf  ",param_5,lVar18);
  }
  else {
    iVar8 = FUN_100880ec0(param_1,"d=%-2d hl=%ld l=%4ld ",param_5,lVar18,
                          CONCAT44(uStack_cc,local_d0));
  }
  uVar3 = local_d4;
  uVar9 = local_d8;
  uVar19 = 0;
  piVar17 = (int *)0x0;
  if (iVar8 < 1) goto LAB_1008af447;
  pcVar15 = "cons: ";
  if ((uVar6 & 0x20) == 0) {
    pcVar15 = "prim: ";
  }
  iVar8 = FUN_10087d780(param_1,pcVar15,6);
  if (iVar8 < 6) goto LAB_1008af41a;
  FUN_10087da20(param_1,iVar5,0x80);
  if ((uVar9 & 0xc0) == 0xc0) {
    pcVar15 = "priv [ %d ] ";
LAB_1008aebc0:
    pcVar11 = local_b8;
    FUN_1008823b0(pcVar11,0x80,pcVar15,uVar3);
  }
  else {
    if ((uVar9 & 0x80) != 0) {
      pcVar15 = "cont [ %d ]";
      goto LAB_1008aebc0;
    }
    if ((uVar9 & 0x40) != 0) {
      pcVar15 = "appl [ %d ]";
      goto LAB_1008aebc0;
    }
    if (0x1e < (int)uVar3) {
      pcVar15 = "<ASN1 %d>";
      goto LAB_1008aebc0;
    }
    uVar9 = uVar3 & 0xfffffeff;
    if ((uVar3 & 0xfffffff7) != 0x102) {
      uVar9 = uVar3;
    }
    pcVar11 = "(unknown)";
    if (uVar9 < 0x1f) {
      pcVar11 = (&PTR_s_EOC_100be2b00)[(int)uVar9];
    }
  }
  iVar8 = FUN_100880ec0(param_1,"%-18s",pcVar11);
  if (iVar8 < 1) goto LAB_1008af41a;
  if ((uVar6 & 0x20) != 0) {
    uVar13 = local_c0 + CONCAT44(uStack_cc,local_d0);
    iVar8 = FUN_10087d780(param_1,"\n",1);
    uVar19 = 0;
    piVar17 = (int *)0x0;
    if (0 < iVar8) {
      if (CONCAT44(uStack_cc,local_d0) <= param_3 - lVar18) {
        if ((uVar6 == 0x21) && (CONCAT44(uStack_cc,local_d0) == 0)) {
          do {
            iVar8 = FUN_1008ae920(param_1,&local_c0,uVar1 - local_c0,
                                  ((int)local_c0 + param_4) - (int)*param_2,iVar16 + 1,param_6,
                                  param_7);
            uVar19 = 0;
            piVar17 = (int *)0x0;
            if (iVar8 == 0) goto LAB_1008af447;
          } while ((iVar8 != 2) && (local_c0 < uVar1));
        }
        else {
          while (local_c0 < uVar13) {
            iVar8 = FUN_1008ae920(param_1,&local_c0,CONCAT44(uStack_cc,local_d0),
                                  ((int)local_c0 + param_4) - (int)*param_2,iVar16 + 1,param_6,
                                  param_7);
            piVar17 = (int *)0x0;
            uVar19 = 0;
            if (iVar8 == 0) goto LAB_1008af447;
          }
        }
        goto LAB_1008af3d0;
      }
      FUN_100880ec0(param_1,"length is greater than %ld\n");
      piVar17 = (int *)0x0;
    }
    goto LAB_1008af447;
  }
  if (local_d8 != 0) {
    local_c0 = local_c0 + CONCAT44(uStack_cc,local_d0);
    iVar8 = FUN_10087d780(param_1,"\n",1);
    piVar17 = (int *)0x0;
    uVar19 = 0;
    if (0 < iVar8) goto LAB_1008af3d0;
    goto LAB_1008af447;
  }
  switch(local_d4) {
  case 1:
    local_c8 = uVar4;
    iVar8 = FUN_1008aad80(0,&local_c8,lVar18 + CONCAT44(uStack_cc,local_d0));
    if (iVar8 < 0) {
      iVar7 = FUN_10087d780(param_1,"Bad boolean\n",0xc);
      piVar17 = (int *)0x0;
      uVar19 = 0;
      if (iVar7 < 1) goto LAB_1008af447;
    }
    FUN_100880ec0(param_1,":%d",iVar8);
    break;
  case 2:
    local_c8 = uVar4;
    piVar10 = (int *)FUN_1008a81c0(0,&local_c8,lVar18 + CONCAT44(uStack_cc,local_d0));
    if (piVar10 == (int *)0x0) {
      uVar12 = 0xb;
      pcVar15 = "BAD INTEGER";
      goto LAB_1008af294;
    }
    iVar8 = FUN_10087d780(param_1,":",1);
    piVar17 = (int *)0x0;
    uVar19 = 0;
    if (iVar8 < 1) goto LAB_1008af447;
    if (piVar10[1] == 0x102) {
      iVar8 = FUN_10087d780(param_1,"-",1);
      piVar17 = (int *)0x0;
      uVar19 = 0;
      if (iVar8 < 1) goto LAB_1008af447;
    }
    iVar8 = *piVar10;
    if (0 < iVar8) {
      lVar14 = 0;
      do {
        piVar17 = (int *)0x0;
        iVar8 = FUN_100880ec0(param_1,"%02X",*(undefined1 *)(*(long *)(piVar10 + 2) + lVar14));
        uVar19 = 0;
        if (iVar8 < 1) goto LAB_1008af447;
        lVar14 = lVar14 + 1;
        iVar8 = *piVar10;
      } while (lVar14 < iVar8);
    }
LAB_1008af221:
    if (iVar8 != 0) goto LAB_1008af37a;
    uVar12 = 2;
    pcVar15 = "00";
    goto LAB_1008af294;
  default:
    if ((param_7 == 0) || (CONCAT44(uStack_cc,local_d0) < 1)) break;
    iVar8 = FUN_10087d780(param_1,"\n",1);
    uVar19 = 0;
    piVar17 = (int *)0x0;
    if (0 < iVar8) {
      iVar8 = param_7;
      if (CONCAT44(uStack_cc,local_d0) < (long)param_7) {
        iVar8 = local_d0;
      }
      if (param_7 == -1) {
        iVar8 = local_d0;
      }
      iVar8 = FUN_100882ec0(param_1,local_c0,iVar8,6);
      goto LAB_1008af397;
    }
    goto LAB_1008af447;
  case 4:
    local_c8 = uVar4;
    piVar10 = (int *)FUN_1008a8340(0,&local_c8,lVar18 + CONCAT44(uStack_cc,local_d0));
    if (piVar10 == (int *)0x0) break;
    if (0 < (long)*piVar10) {
      local_c8 = *(ulong *)(piVar10 + 2);
      lVar14 = 0;
      do {
        bVar2 = *(byte *)(local_c8 + lVar14);
        piVar17 = piVar10;
        if (bVar2 < 0x20) {
          if ((0xd < bVar2) || ((0x2600UL >> ((ulong)bVar2 & 0x3f) & 1) == 0)) goto LAB_1008af2b2;
        }
        else if (0x7e < bVar2) {
LAB_1008af2b2:
          if (param_7 == 0) {
            iVar8 = FUN_10087d780(param_1,"[HEX DUMP]:",0xb);
            if (0 < iVar8) {
              lVar14 = 0;
              if (0 < *piVar10) goto LAB_1008af340;
              goto LAB_1008af37a;
            }
            uVar19 = 0;
            goto LAB_1008af447;
          }
          iVar8 = FUN_10087d780(param_1,"\n",1);
          if (iVar8 < 1) {
            uVar19 = 0;
            goto LAB_1008af447;
          }
          iVar8 = *piVar10;
          iVar7 = param_7;
          if (iVar8 <= param_7) {
            iVar7 = iVar8;
          }
          if (param_7 == -1) {
            iVar7 = iVar8;
          }
          iVar8 = FUN_100882ec0(param_1,local_c8,iVar7,6);
          if (0 < iVar8) {
            FUN_1008afd70(piVar10);
            goto LAB_1008af3a8;
          }
          uVar19 = 0;
          goto LAB_1008af447;
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 < *piVar10);
      iVar8 = FUN_10087d780(param_1,":",1);
      if (iVar8 < 1) {
        uVar19 = 0;
      }
      else {
        iVar8 = FUN_10087d780(param_1,local_c8,*piVar10);
        if (0 < iVar8) goto LAB_1008af37a;
        uVar19 = 0;
      }
      goto LAB_1008af447;
    }
    goto LAB_1008af37a;
  case 6:
    local_c8 = uVar4;
    lVar14 = FUN_1008994c0(&local_e0,&local_c8,lVar18 + CONCAT44(uStack_cc,local_d0));
    if (lVar14 == 0) {
      iVar8 = FUN_10087d780(param_1,":BAD OBJECT",0xb);
      piVar17 = (int *)0x0;
      uVar19 = 0;
      if (iVar8 < 1) goto LAB_1008af447;
    }
    else {
      iVar8 = FUN_10087d780(param_1,":",1);
      uVar19 = 0;
      piVar17 = (int *)0x0;
      if (iVar8 < 1) goto LAB_1008af447;
      FUN_1008993b0(param_1,local_e0);
    }
    break;
  case 10:
    local_c8 = uVar4;
    piVar10 = (int *)FUN_1008a8240(0,&local_c8,lVar18 + CONCAT44(uStack_cc,local_d0));
    if (piVar10 != (int *)0x0) {
      iVar8 = FUN_10087d780(param_1,":",1);
      uVar19 = 0;
      piVar17 = (int *)0x0;
      if (0 < iVar8) {
        if (piVar10[1] == 0x10a) {
          iVar8 = FUN_10087d780(param_1,"-",1);
          uVar19 = 0;
          piVar17 = (int *)0x0;
          if (iVar8 < 1) goto LAB_1008af447;
        }
        iVar8 = *piVar10;
        if (0 < iVar8) {
          lVar14 = 0;
          do {
            iVar8 = FUN_100880ec0(param_1,"%02X",*(undefined1 *)(*(long *)(piVar10 + 2) + lVar14));
            uVar19 = 0;
            piVar17 = (int *)0x0;
            if (iVar8 < 1) goto LAB_1008af447;
            lVar14 = lVar14 + 1;
            iVar8 = *piVar10;
          } while (lVar14 < iVar8);
        }
        goto LAB_1008af221;
      }
      goto LAB_1008af447;
    }
    uVar12 = 0xe;
    pcVar15 = "BAD ENUMERATED";
LAB_1008af294:
    iVar8 = FUN_10087d780(param_1,pcVar15,uVar12);
    uVar19 = 0;
    piVar17 = (int *)0x0;
    if (0 < iVar8) goto LAB_1008af37a;
    goto LAB_1008af447;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x1a:
    iVar8 = FUN_10087d780(param_1,":",1);
    uVar19 = 0;
    piVar17 = (int *)0x0;
    if (iVar8 < 1) goto LAB_1008af447;
    if (0 < CONCAT44(uStack_cc,local_d0)) {
      iVar8 = FUN_10087d780(param_1,local_c0);
      piVar17 = (int *)0x0;
      uVar19 = 0;
      if (iVar8 != local_d0) goto LAB_1008af447;
    }
    break;
  case 0x1e:
    break;
  }
switchD_1008aedaa_caseD_1e:
  iVar8 = FUN_10087d780(param_1,"\n",1);
LAB_1008af397:
  uVar19 = 0;
  piVar17 = (int *)0x0;
  if (iVar8 < 1) goto LAB_1008af447;
LAB_1008af3a8:
  local_c0 = local_c0 + CONCAT44(uStack_cc,local_d0);
  uVar19 = 2;
  piVar17 = (int *)0x0;
  if (local_d8 == 0 && local_d4 == 0) goto LAB_1008af447;
LAB_1008af3d0:
  uVar19 = 1;
  if (uVar1 <= local_c0) {
    piVar17 = (int *)0x0;
    goto LAB_1008af447;
  }
  param_3 = (param_3 - lVar18) - CONCAT44(uStack_cc,local_d0);
  piVar17 = (int *)0x0;
  if (local_c0 <= uVar4) goto LAB_1008af447;
  goto LAB_1008ae9e9;
  while (lVar14 = lVar14 + 1, lVar14 < *piVar10) {
LAB_1008af340:
    uVar19 = 0;
    iVar8 = FUN_100880ec0(param_1,"%02X",*(undefined1 *)(local_c8 + lVar14));
    if (iVar8 < 1) goto LAB_1008af447;
  }
LAB_1008af37a:
  FUN_1008afd70(piVar10);
  goto switchD_1008aedaa_caseD_1e;
}


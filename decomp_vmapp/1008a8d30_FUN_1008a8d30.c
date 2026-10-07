
bool FUN_1008a8d30(undefined8 param_1,long *param_2,int param_3,char *param_4,long param_5,
                  long param_6,int param_7,byte *param_8)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  bool bVar8;
  char *pcVar9;
  int *piVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *local_b0;
  undefined8 local_a0;
  int local_98;
  byte *local_90;
  undefined1 local_88 [80];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar14 = *(long *)(param_4 + 0x20);
  pcVar11 = (code *)0x0;
  if (lVar14 != 0) {
    pcVar11 = (code *)0x0;
    if (*(code **)(lVar14 + 0x18) != (code *)0x0) {
      local_90 = param_8;
      pcVar11 = *(code **)(lVar14 + 0x18);
      local_a0 = param_1;
      local_98 = param_3;
    }
  }
  if (*param_2 == 0) {
    if ((*param_8 & 1) != 0) {
      if (param_7 == 0) {
        iVar2 = FUN_1008a9730(param_1,param_3,param_5,param_6);
        bVar8 = false;
        if (iVar2 == 0) goto LAB_1008a94ae;
      }
      iVar2 = FUN_10087d870(param_1,"<ABSENT>\n");
      goto joined_r0x0001008a9383;
    }
    goto LAB_1008a94a9;
  }
  switch(*param_4) {
  case '\0':
    lVar12 = *(long *)(param_4 + 0x10);
    if (lVar12 == 0) goto switchD_1008a8dbc_caseD_5;
    break;
  case '\x01':
  case '\x06':
    if (param_7 == 0) {
      iVar2 = FUN_1008a9730(param_1,param_3,param_5,param_6);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_1008a94ae;
    }
    if (param_5 != 0 || param_6 != 0) {
      if ((*param_8 & 2) == 0) {
        pcVar9 = "\n";
      }
      else {
        pcVar9 = " {\n";
      }
      iVar2 = FUN_10087d870(param_1,pcVar9);
      bVar8 = false;
      if (iVar2 < 1) goto LAB_1008a94ae;
    }
    if (pcVar11 != (code *)0x0) {
      iVar2 = (*pcVar11)(8,param_2,param_4,&local_a0);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_1008a94ae;
      if (iVar2 == 2) goto LAB_1008a94a9;
    }
    if (0 < *(long *)(param_4 + 0x18)) {
      lVar14 = *(long *)(param_4 + 0x10);
      lVar12 = 0;
      do {
        lVar5 = FUN_1008a8110(param_2,lVar14,1);
        if (lVar5 == 0) {
          bVar8 = false;
          goto LAB_1008a94ae;
        }
        uVar6 = FUN_1008a80f0(param_2,lVar5);
        iVar2 = FUN_1008a9530(param_1,uVar6,param_3 + 2,lVar5,param_8);
        if (iVar2 == 0) {
          bVar8 = false;
          goto LAB_1008a94ae;
        }
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x28;
      } while (lVar12 < *(long *)(param_4 + 0x18));
    }
    if ((*param_8 & 2) != 0) {
      bVar8 = false;
      iVar2 = FUN_100880ec0(param_1,"%*s}\n",param_3,"");
      if (iVar2 < 0) goto LAB_1008a94ae;
    }
    if (pcVar11 == (code *)0x0) goto LAB_1008a94a9;
    uVar3 = (*pcVar11)(9,param_2,param_4,&local_a0);
    goto joined_r0x0001008a9211;
  case '\x02':
    iVar2 = FUN_1008a7e80(param_2,param_4);
    if ((iVar2 < 0) || (*(long *)(param_4 + 0x18) <= (long)iVar2)) {
      iVar2 = FUN_100880ec0(param_1,"ERROR: selector [%d] invalid\n",iVar2);
      bVar8 = 0 < iVar2;
      goto LAB_1008a94ae;
    }
    lVar12 = *(long *)(param_4 + 0x10) + (long)iVar2 * 0x28;
    param_2 = (long *)FUN_1008a80f0(param_2,lVar12);
    break;
  default:
    bVar8 = false;
    FUN_100880ec0(param_1,"Unprocessed type %d\n");
    goto LAB_1008a94ae;
  case '\x04':
    if (param_7 == 0) {
      iVar2 = FUN_1008a9730(param_1,param_3,param_5,param_6);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_1008a94ae;
      lVar14 = *(long *)(param_4 + 0x20);
    }
    if ((lVar14 == 0) || (*(code **)(lVar14 + 0x30) == (code *)0x0)) {
      if (param_6 == 0) goto LAB_1008a94a9;
      iVar2 = FUN_100880ec0(param_1,":EXTERNAL TYPE %s\n",param_6);
      goto joined_r0x0001008a9383;
    }
    iVar2 = (**(code **)(lVar14 + 0x30))(param_1,param_2,param_3,"");
    if (iVar2 == 0) {
      bVar8 = false;
      goto LAB_1008a94ae;
    }
    if (iVar2 == 2) {
      iVar2 = FUN_10087d870(param_1,"\n");
      goto joined_r0x0001008a9383;
    }
    goto LAB_1008a94a9;
  case '\x05':
switchD_1008a8dbc_caseD_5:
    iVar2 = FUN_1008a9730(param_1,param_3,param_5,param_6);
    if (iVar2 == 0) {
      bVar8 = false;
      goto LAB_1008a94ae;
    }
    if ((lVar14 != 0) && (*(code **)(lVar14 + 0x38) != (code *)0x0)) {
      uVar3 = (**(code **)(lVar14 + 0x38))(param_1,param_2,param_4,param_3,param_8);
      goto joined_r0x0001008a9211;
    }
    piVar10 = (int *)*param_2;
    if (*param_4 == '\x05') {
      uVar13 = (long)piVar10[1] & 0xfffffffffffffeff;
LAB_1008a91cf:
      lVar14 = 0;
      local_b0 = param_2;
      if ((*param_8 & 8) != 0) {
        lVar14 = FUN_1008af570(uVar13 & 0xffffffff);
      }
    }
    else {
      uVar13 = *(ulong *)(param_4 + 8);
      if (uVar13 != 0xfffffffffffffffc) goto LAB_1008a91cf;
      iVar2 = *piVar10;
      uVar13 = (ulong)iVar2;
      piVar1 = *(int **)(piVar10 + 2);
      local_b0 = (long *)(piVar10 + 2);
      lVar14 = 0;
      piVar10 = piVar1;
      if ((*param_8 & 0x10) == 0) {
        lVar14 = FUN_1008af570(iVar2);
      }
    }
    if (uVar13 == 5) {
      iVar2 = FUN_10087d870(param_1,"NULL\n");
      uVar3 = (uint)(0 < iVar2);
      goto joined_r0x0001008a9211;
    }
    if (lVar14 != 0) {
      iVar2 = FUN_10087d870(param_1,lVar14);
      if (iVar2 < 1) {
        bVar8 = false;
        goto LAB_1008a94ae;
      }
      iVar2 = FUN_10087d870(param_1,":");
      if (iVar2 < 1) {
        bVar8 = false;
        goto LAB_1008a94ae;
      }
    }
    if (0xf < (long)uVar13) {
      if (1 < uVar13 - 0x10) {
        if (uVar13 == 0x17) {
          uVar3 = FUN_1008a3b50();
        }
        else {
          if (uVar13 != 0x18) goto switchD_1008a9276_caseD_fffffffe;
          uVar3 = FUN_1008a3d40();
        }
        goto LAB_1008a9369;
      }
switchD_1008a9276_caseD_fffffffd:
      iVar2 = FUN_10087d870(param_1,"\n");
      bVar8 = false;
      if (iVar2 < 1) goto LAB_1008a94ae;
      iVar2 = FUN_1008af540(param_1,*(undefined8 *)(piVar10 + 2),(long)*piVar10,param_3,0);
      goto joined_r0x0001008a9383;
    }
    switch(uVar13) {
    case 1:
      iVar2 = (int)*local_b0;
      if (iVar2 == -1) {
        iVar2 = *(int *)(param_4 + 0x28);
      }
      pcVar9 = "TRUE";
      if (iVar2 == 0) {
        pcVar9 = "FALSE";
      }
      pcVar7 = "BOOL ABSENT";
      if (iVar2 != -1) {
        pcVar7 = pcVar9;
      }
      iVar2 = FUN_10087d870(param_1,pcVar7);
      goto LAB_1008a945f;
    case 2:
    case 10:
      uVar6 = FUN_1008c3c50(0);
      iVar2 = FUN_10087d870(param_1,uVar6);
      uVar3 = (uint)(0 < iVar2);
      FUN_10081e1a0(uVar6);
      break;
    case 3:
    case 4:
      if (piVar10[1] == 3) {
        iVar2 = FUN_100880ec0(param_1," (%ld unused bits)\n",*(ulong *)(piVar10 + 4) & 7);
      }
      else {
        iVar2 = FUN_10087d870(param_1,"\n");
      }
      bVar8 = false;
      if (iVar2 < 1) goto LAB_1008a94ae;
      if (0 < *piVar10) {
        iVar2 = FUN_100882ec0(param_1,*(undefined8 *)(piVar10 + 2),*piVar10,param_3 + 2);
        goto joined_r0x0001008a9383;
      }
      goto LAB_1008a94a9;
    case 6:
      lVar14 = *local_b0;
      uVar4 = FUN_100821ab0(lVar14);
      pcVar7 = (char *)FUN_1008219f0(uVar4);
      pcVar9 = "";
      if (pcVar7 != (char *)0x0) {
        pcVar9 = pcVar7;
      }
      FUN_100822110(local_88,0x50,lVar14,1);
      iVar2 = FUN_100880ec0(param_1,"%s (%s)",pcVar9,local_88);
LAB_1008a945f:
      uVar3 = (uint)(0 < iVar2);
      break;
    case 0xfffffffffffffffd:
      goto switchD_1008a9276_caseD_fffffffd;
    default:
switchD_1008a9276_caseD_fffffffe:
      uVar3 = FUN_10089ef50(param_1,piVar10,*(undefined8 *)(param_8 + 0x20));
    }
LAB_1008a9369:
    if (uVar3 == 0) {
      bVar8 = false;
      goto LAB_1008a94ae;
    }
    iVar2 = FUN_10087d870(param_1,"\n");
joined_r0x0001008a9383:
    bVar8 = false;
    if (iVar2 < 1) goto LAB_1008a94ae;
    goto LAB_1008a94a9;
  }
  uVar3 = FUN_1008a9530(param_1,param_2,param_3,lVar12,param_8);
joined_r0x0001008a9211:
  bVar8 = false;
  if (uVar3 != 0) {
LAB_1008a94a9:
    bVar8 = true;
  }
LAB_1008a94ae:
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}



bool FUN_100c842b0(undefined8 param_1,long *param_2,int param_3,char *param_4,long param_5,
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
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
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
        iVar2 = FUN_100c84cb0(param_1,param_3,param_5,param_6);
        bVar8 = false;
        if (iVar2 == 0) goto LAB_100c84a2e;
      }
      iVar2 = FUN_100c58a70(param_1,"<ABSENT>\n");
      goto joined_r0x000100c84903;
    }
    goto LAB_100c84a29;
  }
  switch(*param_4) {
  case '\0':
    lVar12 = *(long *)(param_4 + 0x10);
    if (lVar12 == 0) goto switchD_100c8433c_caseD_5;
    break;
  case '\x01':
  case '\x06':
    if (param_7 == 0) {
      iVar2 = FUN_100c84cb0(param_1,param_3,param_5,param_6);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_100c84a2e;
    }
    if (param_5 != 0 || param_6 != 0) {
      if ((*param_8 & 2) == 0) {
        pcVar9 = "\n";
      }
      else {
        pcVar9 = " {\n";
      }
      iVar2 = FUN_100c58a70(param_1,pcVar9);
      bVar8 = false;
      if (iVar2 < 1) goto LAB_100c84a2e;
    }
    if (pcVar11 != (code *)0x0) {
      iVar2 = (*pcVar11)(8,param_2,param_4,&local_a0);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_100c84a2e;
      if (iVar2 == 2) goto LAB_100c84a29;
    }
    if (0 < *(long *)(param_4 + 0x18)) {
      lVar14 = *(long *)(param_4 + 0x10);
      lVar12 = 0;
      do {
        lVar5 = FUN_100c83690(param_2,lVar14,1);
        if (lVar5 == 0) {
          bVar8 = false;
          goto LAB_100c84a2e;
        }
        uVar6 = FUN_100c83670(param_2,lVar5);
        iVar2 = FUN_100c84ab0(param_1,uVar6,param_3 + 2,lVar5,param_8);
        if (iVar2 == 0) {
          bVar8 = false;
          goto LAB_100c84a2e;
        }
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x28;
      } while (lVar12 < *(long *)(param_4 + 0x18));
    }
    if ((*param_8 & 2) != 0) {
      bVar8 = false;
      iVar2 = FUN_100c5c0c0(param_1,"%*s}\n",param_3,"");
      if (iVar2 < 0) goto LAB_100c84a2e;
    }
    if (pcVar11 == (code *)0x0) goto LAB_100c84a29;
    uVar3 = (*pcVar11)(9,param_2,param_4,&local_a0);
    goto joined_r0x000100c84791;
  case '\x02':
    iVar2 = FUN_100c83400(param_2,param_4);
    if ((iVar2 < 0) || (*(long *)(param_4 + 0x18) <= (long)iVar2)) {
      iVar2 = FUN_100c5c0c0(param_1,"ERROR: selector [%d] invalid\n",iVar2);
      bVar8 = 0 < iVar2;
      goto LAB_100c84a2e;
    }
    lVar12 = *(long *)(param_4 + 0x10) + (long)iVar2 * 0x28;
    param_2 = (long *)FUN_100c83670(param_2,lVar12);
    break;
  default:
    bVar8 = false;
    FUN_100c5c0c0(param_1,"Unprocessed type %d\n");
    goto LAB_100c84a2e;
  case '\x04':
    if (param_7 == 0) {
      iVar2 = FUN_100c84cb0(param_1,param_3,param_5,param_6);
      bVar8 = false;
      if (iVar2 == 0) goto LAB_100c84a2e;
      lVar14 = *(long *)(param_4 + 0x20);
    }
    if ((lVar14 == 0) || (*(code **)(lVar14 + 0x30) == (code *)0x0)) {
      if (param_6 == 0) goto LAB_100c84a29;
      iVar2 = FUN_100c5c0c0(param_1,":EXTERNAL TYPE %s\n",param_6);
      goto joined_r0x000100c84903;
    }
    iVar2 = (**(code **)(lVar14 + 0x30))(param_1,param_2,param_3,"");
    if (iVar2 == 0) {
      bVar8 = false;
      goto LAB_100c84a2e;
    }
    if (iVar2 == 2) {
      iVar2 = FUN_100c58a70(param_1,"\n");
      goto joined_r0x000100c84903;
    }
    goto LAB_100c84a29;
  case '\x05':
switchD_100c8433c_caseD_5:
    iVar2 = FUN_100c84cb0(param_1,param_3,param_5,param_6);
    if (iVar2 == 0) {
      bVar8 = false;
      goto LAB_100c84a2e;
    }
    if ((lVar14 != 0) && (*(code **)(lVar14 + 0x38) != (code *)0x0)) {
      uVar3 = (**(code **)(lVar14 + 0x38))(param_1,param_2,param_4,param_3,param_8);
      goto joined_r0x000100c84791;
    }
    piVar10 = (int *)*param_2;
    if (*param_4 == '\x05') {
      uVar13 = (long)piVar10[1] & 0xfffffffffffffeff;
LAB_100c8474f:
      lVar14 = 0;
      local_b0 = param_2;
      if ((*param_8 & 8) != 0) {
        lVar14 = FUN_100c8aaf0(uVar13 & 0xffffffff);
      }
    }
    else {
      uVar13 = *(ulong *)(param_4 + 8);
      if (uVar13 != 0xfffffffffffffffc) goto LAB_100c8474f;
      iVar2 = *piVar10;
      uVar13 = (ulong)iVar2;
      piVar1 = *(int **)(piVar10 + 2);
      local_b0 = (long *)(piVar10 + 2);
      lVar14 = 0;
      piVar10 = piVar1;
      if ((*param_8 & 0x10) == 0) {
        lVar14 = FUN_100c8aaf0(iVar2);
      }
    }
    if (uVar13 == 5) {
      iVar2 = FUN_100c58a70(param_1,"NULL\n");
      uVar3 = (uint)(0 < iVar2);
      goto joined_r0x000100c84791;
    }
    if (lVar14 != 0) {
      iVar2 = FUN_100c58a70(param_1,lVar14);
      if (iVar2 < 1) {
        bVar8 = false;
        goto LAB_100c84a2e;
      }
      iVar2 = FUN_100c58a70(param_1,":");
      if (iVar2 < 1) {
        bVar8 = false;
        goto LAB_100c84a2e;
      }
    }
    if (0xf < (long)uVar13) {
      if (1 < uVar13 - 0x10) {
        if (uVar13 == 0x17) {
          uVar3 = FUN_100c7f0d0();
        }
        else {
          if (uVar13 != 0x18) goto switchD_100c847f6_caseD_fffffffe;
          uVar3 = FUN_100c7f2c0();
        }
        goto LAB_100c848e9;
      }
switchD_100c847f6_caseD_fffffffd:
      iVar2 = FUN_100c58a70(param_1,"\n");
      bVar8 = false;
      if (iVar2 < 1) goto LAB_100c84a2e;
      iVar2 = FUN_100c8aac0(param_1,*(undefined8 *)(piVar10 + 2),(long)*piVar10,param_3,0);
      goto joined_r0x000100c84903;
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
      iVar2 = FUN_100c58a70(param_1,pcVar7);
      goto LAB_100c849df;
    case 2:
    case 10:
      uVar6 = FUN_100c9f1d0(0);
      iVar2 = FUN_100c58a70(param_1,uVar6);
      uVar3 = (uint)(0 < iVar2);
      FUN_100bf3910(uVar6);
      break;
    case 3:
    case 4:
      if (piVar10[1] == 3) {
        iVar2 = FUN_100c5c0c0(param_1," (%ld unused bits)\n",*(ulong *)(piVar10 + 4) & 7);
      }
      else {
        iVar2 = FUN_100c58a70(param_1,"\n");
      }
      bVar8 = false;
      if (iVar2 < 1) goto LAB_100c84a2e;
      if (0 < *piVar10) {
        iVar2 = FUN_100c5e0c0(param_1,*(undefined8 *)(piVar10 + 2),*piVar10,param_3 + 2);
        goto joined_r0x000100c84903;
      }
      goto LAB_100c84a29;
    case 6:
      lVar14 = *local_b0;
      uVar4 = FUN_100bf7220(lVar14);
      pcVar7 = (char *)FUN_100bf7160(uVar4);
      pcVar9 = "";
      if (pcVar7 != (char *)0x0) {
        pcVar9 = pcVar7;
      }
      FUN_100bf7880(local_88,0x50,lVar14,1);
      iVar2 = FUN_100c5c0c0(param_1,"%s (%s)",pcVar9,local_88);
LAB_100c849df:
      uVar3 = (uint)(0 < iVar2);
      break;
    case 0xfffffffffffffffd:
      goto switchD_100c847f6_caseD_fffffffd;
    default:
switchD_100c847f6_caseD_fffffffe:
      uVar3 = FUN_100c7a4d0(param_1,piVar10,*(undefined8 *)(param_8 + 0x20));
    }
LAB_100c848e9:
    if (uVar3 == 0) {
      bVar8 = false;
      goto LAB_100c84a2e;
    }
    iVar2 = FUN_100c58a70(param_1,"\n");
joined_r0x000100c84903:
    bVar8 = false;
    if (iVar2 < 1) goto LAB_100c84a2e;
    goto LAB_100c84a29;
  }
  uVar3 = FUN_100c84ab0(param_1,param_2,param_3,lVar12,param_8);
joined_r0x000100c84791:
  bVar8 = false;
  if (uVar3 != 0) {
LAB_100c84a29:
    bVar8 = true;
  }
LAB_100c84a2e:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8;
}


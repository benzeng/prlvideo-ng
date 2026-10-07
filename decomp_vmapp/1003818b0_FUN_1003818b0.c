
void FUN_1003818b0(undefined8 param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5
                  ,uint *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  code *pcVar18;
  undefined8 in_stack_ffffffffffffffa0;
  undefined8 uVar19;
  undefined8 in_stack_ffffffffffffffa8;
  
  uVar8 = (undefined4)((ulong)in_stack_ffffffffffffffa8 >> 0x20);
  uVar7 = (undefined4)((ulong)in_stack_ffffffffffffffa0 >> 0x20);
  (*DAT_1011c66f0)(0xcf5,4);
  (*DAT_1011c66f0)(0xcf2,param_6[1]);
  (*DAT_1011c66f0)(0x806e,param_6[2]);
  pcVar6 = DAT_1011c6ca8;
  pcVar18 = DAT_1011c6c98;
  pcVar5 = DAT_1011c6c90;
  if (0x8c19 < param_3) {
    if (0x90ff < param_3) {
      if (param_3 == 0x9102) {
        (*DAT_1011c6cb0)(0x9102,param_6[6],param_5,param_2[2] - *param_2,param_2[3] - param_2[1],
                         param_2[5] - param_2[4],0);
        return;
      }
      if (param_3 == 0x9100) {
                    /* WARNING: Could not recover jumptable at 0x000100381b25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_1011c6ca0)(0x9100,param_6[6],param_5,param_2[2] - *param_2,param_2[3] - param_2[1],0);
        return;
      }
      goto LAB_100381b27;
    }
    if ((param_3 != 0x8c1a) && (param_3 != 0x9009)) goto LAB_100381b27;
LAB_1003819af:
    if ((*(uint *)(&DAT_100b3e3b4 + (ulong)*param_6 * 8) & 4) == 0) {
      iVar16 = param_2[2];
      iVar14 = param_2[3];
      iVar1 = *param_2;
      iVar2 = param_2[1];
      iVar3 = param_2[5];
      iVar4 = param_2[4];
      uVar9 = FUN_10038e1d0();
      uVar10 = FUN_10038e1f0(*param_6);
      (*pcVar6)(param_3,param_4,param_5,iVar16 - iVar1,iVar14 - iVar2,iVar3 - iVar4,0,
                CONCAT44(uVar7,uVar9),CONCAT44(uVar8,uVar10),*(undefined8 *)(param_6 + 4));
      return;
    }
    if (0xffffff < *(uint *)(&DAT_100b3e3b4 + (ulong)*param_6 * 8)) goto switchD_100381cde_caseD_11;
    iVar16 = *param_6 - 0x53;
    switch(iVar16) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      break;
    case 10:
      goto switchD_100381cde_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
    case 0x35:
    case 0x36:
    case 0x38:
    }
    switch(iVar16) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
switchD_100381cde_caseD_0:
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      break;
    case 7:
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    }
switchD_100381cde_caseD_11:
    (*DAT_1011c5a20)(param_3,param_4,param_5);
    return;
  }
  if (param_3 == 0xde0) {
    iVar14 = param_2[2] - *param_2;
    uVar7 = FUN_10038e1d0(*param_6);
    uVar8 = FUN_10038e1f0(*param_6);
    uVar19 = *(undefined8 *)(param_6 + 4);
    param_3 = 0xde0;
    iVar16 = 0;
    pcVar18 = pcVar5;
    goto LAB_100381ec7;
  }
  if (param_3 == 0x806f) goto LAB_1003819af;
LAB_100381b27:
  uVar12 = *param_6;
  uVar11 = *(uint *)(&DAT_100b3e3b4 + (ulong)uVar12 * 8);
  if ((uVar11 & 4) != 0) {
    iVar16 = param_2[2] - *param_2;
    iVar14 = param_2[3] - param_2[1];
    if (0xffffff < uVar11) {
      uVar11 = (uVar11 >> 0x18) * iVar16;
      if (3 < uVar12 - 0x73) {
        uVar11 = uVar11 + 3 & 0xfffffffc;
      }
      uVar11 = uVar11 * iVar14;
      goto switchD_100381d21_caseD_11;
    }
    uVar11 = 0;
    uVar15 = 0;
    switch(uVar12 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar15 = iVar16 * 2 + 3U & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar15 = iVar16 + 3U & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar15 = iVar16 * 4;
      break;
    case 10:
      uVar15 = iVar16 * 8;
      goto switchD_100381d21_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar15 = iVar16 * 2 + 6U & 0xfffffff8;
      break;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x1a:
    case 0x1b:
    case 0x35:
    case 0x36:
    case 0x38:
      uVar15 = iVar16 * 4 + 0xcU & 0xfffffff0;
    }
    switch(uVar12 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 8:
    case 9:
    case 10:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
switchD_100381d21_caseD_0:
      uVar11 = uVar15 * iVar14;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar11 = uVar15 * iVar14 * 3 >> 1;
      break;
    case 7:
      uVar11 = uVar15 * iVar14 * 2;
      break;
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
      uVar11 = uVar15 * (iVar14 + 3U & 0xfffffffc) >> 2;
    }
switchD_100381d21_caseD_11:
    (*DAT_1011c5a10)(param_3,param_4,param_5,iVar16,iVar14,0,uVar11,*(undefined8 *)(param_6 + 4));
    return;
  }
  iVar16 = param_2[3] - param_2[1];
  uVar15 = uVar12 - 0x57;
  if ((8 < uVar15) || ((long)(int)uVar15 - 4U < 3)) goto LAB_100381e83;
  iVar14 = param_2[2] - *param_2;
  if (0xffffff < uVar11) {
    uVar15 = (uVar11 >> 0x18) * iVar14;
    uVar17 = (ulong)uVar15;
    uVar11 = uVar15;
    if (3 < uVar12 - 0x73) {
      uVar11 = uVar15 + 3 & 0xfffffffc;
    }
    uVar11 = uVar11 * iVar16;
    if (3 < uVar12 - 0x73) {
      uVar17 = (ulong)(uVar15 + 3 & 0xfffffffc);
    }
    goto switchD_100381e39_caseD_64;
  }
  uVar11 = 0;
  uVar13 = 0;
  switch(uVar15) {
  case 0:
  case 1:
  case 2:
  case 3:
    iVar1 = iVar14;
    goto LAB_100381d52;
  case 4:
  case 5:
    uVar13 = iVar14 * 4;
    break;
  case 6:
    uVar13 = iVar14 * 8;
    goto switchD_100381d6f_caseD_53;
  case 7:
  case 8:
    iVar1 = iVar14 * 2;
LAB_100381d52:
    uVar13 = iVar1 + 3U & 0xfffffffc;
  }
  switch(uVar12) {
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
switchD_100381d6f_caseD_53:
    uVar11 = uVar13 * iVar16;
    break;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5e:
  case 0x5f:
    uVar11 = iVar16 * uVar13 * 3 >> 1;
    break;
  case 0x5a:
    uVar11 = iVar16 * uVar13 * 2;
    goto switchD_100381e39_caseD_57;
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x87:
  case 0x88:
  case 0x89:
  case 0x8a:
  case 0x8b:
    uVar11 = uVar13 * (iVar16 + 3U & 0xfffffffc) >> 2;
  }
  uVar17 = 0;
  switch(uVar12) {
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x5e:
  case 0x5f:
    uVar17 = (ulong)(iVar14 * 2 + 3U & 0xfffffffc);
    break;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x62:
  case 99:
switchD_100381e39_caseD_57:
    uVar12 = iVar14 + 3U & 0xfffffffc;
    goto LAB_100381e78;
  case 0x5b:
  case 0x5c:
  case 0x60:
  case 0x61:
    uVar12 = iVar14 * 4;
    goto LAB_100381e78;
  case 0x5d:
    uVar12 = iVar14 * 8;
LAB_100381e78:
    uVar17 = (ulong)uVar12;
    break;
  case 0x65:
  case 0x66:
  case 0x6b:
  case 0x6c:
  case 0x87:
  case 0x8a:
    uVar17 = (ulong)(iVar14 * 2 + 6U & 0xfffffff8);
    break;
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6d:
  case 0x6e:
  case 0x88:
  case 0x89:
  case 0x8b:
    uVar17 = (ulong)(iVar14 * 4 + 0xcU & 0xfffffff0);
  }
switchD_100381e39_caseD_64:
  iVar16 = (int)(uVar11 / uVar17);
LAB_100381e83:
  iVar14 = param_2[2] - *param_2;
  uVar8 = FUN_10038e1d0();
  uVar9 = FUN_10038e1f0(*param_6);
  uVar19 = CONCAT44(uVar7,uVar9);
  uVar7 = 0;
LAB_100381ec7:
  (*pcVar18)(param_3,param_4,param_5,iVar14,iVar16,uVar7,uVar8,uVar19);
  return;
}


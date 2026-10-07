
void FUN_100383ac0(undefined8 param_1,int *param_2,int param_3,undefined4 param_4,uint *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong extraout_RDX;
  ulong uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined8 in_stack_ffffffffffffff78;
  undefined8 in_stack_ffffffffffffff88;
  ulong local_58;
  
  uVar9 = (undefined4)((ulong)in_stack_ffffffffffffff78 >> 0x20);
  uVar10 = (undefined4)((ulong)in_stack_ffffffffffffff88 >> 0x20);
  (*DAT_1011c66f0)(0xcf5,4);
  (*DAT_1011c66f0)(0xcf2,param_5[1]);
  (*DAT_1011c66f0)(0x806e,param_5[2]);
  pcVar8 = DAT_1011c6cf8;
  pcVar7 = DAT_1011c6cf0;
  pcVar6 = DAT_1011c6ce8;
  pcVar5 = DAT_1011c5a50;
  pcVar4 = DAT_1011c5a40;
  if (param_3 < 0x8c1a) {
    if (param_3 == 0xde0) {
      iVar1 = *param_2;
      iVar19 = param_2[2];
      uVar9 = FUN_10038e1d0(*param_5);
      uVar10 = FUN_10038e1f0(*param_5);
      (*pcVar6)(0xde0,param_4,iVar1,iVar19 - iVar1,uVar9,uVar10,*(undefined8 *)(param_5 + 4));
      return;
    }
    if (param_3 != 0x806f) goto LAB_100383c32;
LAB_100383b95:
    uVar2 = *param_5;
    uVar14 = *(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8);
    if ((uVar14 & 4) == 0) {
      iVar1 = *param_2;
      iVar19 = param_2[1];
      iVar16 = param_2[4];
      iVar21 = param_2[2];
      iVar3 = param_2[3];
      iVar22 = param_2[5];
      uVar11 = FUN_10038e1d0();
      uVar12 = FUN_10038e1f0(*param_5);
      (*pcVar8)(param_3,param_4,iVar1,iVar19,iVar16,iVar21 - iVar1,CONCAT44(uVar9,iVar3 - iVar19),
                iVar22 - iVar16,CONCAT44(uVar10,uVar11),uVar12,*(undefined8 *)(param_5 + 4));
      return;
    }
    iVar1 = *param_2;
    iVar19 = param_2[1];
    iVar16 = param_2[2] - iVar1;
    iVar21 = param_2[3] - iVar19;
    if (0xffffff < uVar14) {
      uVar14 = (uVar14 >> 0x18) * iVar16;
      if (3 < uVar2 - 0x73) {
        uVar14 = uVar14 + 3 & 0xfffffffc;
      }
      uVar14 = uVar14 * iVar21;
      goto switchD_100383e52_caseD_11;
    }
    uVar14 = 0;
    uVar20 = 0;
    switch(uVar2 - 0x53) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 0xb:
    case 0xc:
      uVar20 = iVar16 * 2 + 3U & 0xfffffffc;
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xf:
    case 0x10:
      uVar20 = iVar16 + 3U & 0xfffffffc;
      break;
    case 8:
    case 9:
    case 0xd:
    case 0xe:
      uVar20 = iVar16 * 4;
      break;
    case 10:
      uVar20 = iVar16 * 8;
      goto switchD_100383e52_caseD_0;
    case 0x12:
    case 0x13:
    case 0x18:
    case 0x19:
    case 0x34:
    case 0x37:
      uVar20 = iVar16 * 2 + 6U & 0xfffffff8;
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
      uVar20 = iVar16 * 4 + 0xcU & 0xfffffff0;
    }
    switch(uVar2 - 0x53) {
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
switchD_100383e52_caseD_0:
      uVar14 = uVar20 * iVar21;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar14 = uVar20 * iVar21 * 3 >> 1;
      break;
    case 7:
      uVar14 = uVar20 * iVar21 * 2;
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
      uVar14 = uVar20 * (iVar21 + 3U & 0xfffffffc) >> 2;
    }
switchD_100383e52_caseD_11:
    iVar3 = param_2[4];
    iVar22 = param_2[5] - iVar3;
    uVar11 = FUN_10038e1d0();
    (*pcVar5)(param_3,param_4,iVar1,iVar19,iVar3,iVar16,CONCAT44(uVar9,iVar21),iVar22,
              CONCAT44(uVar10,uVar11),uVar14 * iVar22,*(undefined8 *)(param_5 + 4));
    return;
  }
  if ((param_3 == 0x8c1a) || (param_3 == 0x9009)) goto LAB_100383b95;
LAB_100383c32:
  iVar1 = param_2[1];
  uVar20 = param_2[3] - iVar1;
  local_58 = (ulong)uVar20;
  uVar2 = *param_5;
  uVar14 = *(uint *)(&DAT_100b3e3b4 + (ulong)uVar2 * 8);
  if ((uVar14 & 4) != 0) {
    iVar19 = *param_2;
    iVar16 = param_2[2] - iVar19;
    if (0xffffff < uVar14) {
      uVar14 = (uVar14 >> 0x18) * iVar16;
      if (3 < uVar2 - 0x73) {
        uVar14 = uVar14 + 3 & 0xfffffffc;
      }
      uVar14 = uVar14 * uVar20;
      goto switchD_100383ebe_caseD_11;
    }
    uVar14 = 0;
    uVar15 = 0;
    switch(uVar2 - 0x53) {
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
      goto switchD_100383ebe_caseD_0;
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
    switch(uVar2 - 0x53) {
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
switchD_100383ebe_caseD_0:
      uVar14 = uVar15 * uVar20;
      break;
    case 4:
    case 5:
    case 6:
    case 0xb:
    case 0xc:
      uVar14 = uVar15 * uVar20 * 3 >> 1;
      break;
    case 7:
      uVar14 = uVar15 * uVar20 * 2;
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
      uVar14 = uVar15 * (uVar20 + 3 & 0xfffffffc) >> 2;
    }
switchD_100383ebe_caseD_11:
    uVar10 = FUN_10038e1d0();
    (*pcVar4)(param_3,param_4,iVar19,iVar1,iVar16,local_58,CONCAT44(uVar9,uVar10),uVar14,
              *(undefined8 *)(param_5 + 4));
    return;
  }
  uVar15 = uVar2 - 0x57;
  puVar18 = (uint *)(ulong)uVar15;
  uVar13 = extraout_RDX;
  if ((8 < uVar15) || ((long)(int)uVar15 - 4U < 3)) goto LAB_100384092;
  iVar19 = param_2[2] - *param_2;
  if (0xffffff < uVar14) {
    uVar15 = (uVar14 >> 0x18) * iVar19;
    uVar14 = uVar15;
    if (3 < uVar2 - 0x73) {
      uVar14 = uVar15 + 3 & 0xfffffffc;
    }
    uVar14 = uVar14 * uVar20;
    if (3 < uVar2 - 0x73) {
      uVar15 = uVar15 + 3 & 0xfffffffc;
    }
    goto switchD_100384040_caseD_64;
  }
  uVar15 = 0;
  switch(puVar18) {
  case (uint *)0x0:
  case (uint *)0x1:
  case (uint *)0x2:
  case (uint *)0x3:
    iVar16 = iVar19;
    goto LAB_100383f71;
  case (uint *)0x4:
  case (uint *)0x5:
    uVar15 = iVar19 * 4;
    break;
  case (uint *)0x6:
    uVar15 = iVar19 * 8;
    goto switchD_100383f8e_caseD_0;
  case (uint *)0x7:
  case (uint *)0x8:
    iVar16 = iVar19 * 2;
LAB_100383f71:
    uVar15 = iVar16 + 3U & 0xfffffffc;
  }
  uVar17 = uVar2 - 0x53;
  uVar14 = 0;
  if (0x38 < uVar17) goto switchD_100383f8e_caseD_11;
  puVar18 = (uint *)((long)&switchD_100383f8e::switchdataD_1003844b0 +
                    (long)(int)(&switchD_100383f8e::switchdataD_1003844b0)[uVar17]);
  uVar14 = 0;
  switch((ulong)uVar17) {
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
switchD_100383f8e_caseD_0:
    uVar14 = uVar15 * uVar20;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar14 = uVar20 * uVar15 * 3 >> 1;
    break;
  case 7:
    uVar14 = uVar20 * uVar15 * 2;
    goto switchD_100384040_caseD_57;
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
    uVar14 = uVar15 * (uVar20 + 3 & 0xfffffffc) >> 2;
  }
switchD_100383f8e_caseD_11:
  uVar15 = 0;
  puVar18 = &switchD_100384040::switchdataD_100384594;
  switch(uVar2) {
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x5e:
  case 0x5f:
    uVar15 = iVar19 * 2 + 3U & 0xfffffffc;
    break;
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x62:
  case 99:
switchD_100384040_caseD_57:
    uVar15 = iVar19 + 3U & 0xfffffffc;
    break;
  case 0x5b:
  case 0x5c:
  case 0x60:
  case 0x61:
    uVar15 = iVar19 * 4;
    break;
  case 0x5d:
    uVar15 = iVar19 * 8;
    break;
  case 0x65:
  case 0x66:
  case 0x6b:
  case 0x6c:
  case 0x87:
  case 0x8a:
    uVar15 = iVar19 * 2 + 6U & 0xfffffff8;
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
    uVar15 = iVar19 * 4 + 0xcU & 0xfffffff0;
  }
switchD_100384040_caseD_64:
  local_58 = (ulong)uVar14 / (ulong)uVar15;
  uVar13 = (ulong)uVar14 % (ulong)uVar15;
LAB_100384092:
  iVar19 = *param_2;
  iVar16 = param_2[2];
  uVar10 = FUN_10038e1d0((ulong)uVar2,puVar18,uVar13);
  uVar11 = FUN_10038e1f0(*param_5);
  (*pcVar7)(param_3,param_4,iVar19,iVar1,iVar16 - iVar19,local_58,CONCAT44(uVar9,uVar10),uVar11,
            *(undefined8 *)(param_5 + 4));
  return;
}


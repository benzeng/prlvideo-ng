
void FUN_10038cb70(long *param_1,long param_2,uint *param_3,undefined4 param_4,undefined4 param_5,
                  long param_6,uint *param_7,undefined4 param_8)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  undefined4 uVar12;
  
  lVar10 = 0;
  if (*(long **)(param_2 + 0x48) != *(long **)(param_2 + 0x40)) {
    lVar10 = **(long **)(param_2 + 0x40);
  }
  lVar6 = 0;
  if (*(long **)(param_6 + 0x48) != *(long **)(param_6 + 0x40)) {
    lVar6 = **(long **)(param_6 + 0x40);
  }
  uVar8 = *(uint *)(lVar10 + 0x1c);
  if (param_3[2] <= *param_3) {
    return;
  }
  if (param_3[3] <= param_3[1]) {
    return;
  }
  if (param_7[2] <= *param_7) {
    return;
  }
  if (param_7[3] <= param_7[1]) {
    return;
  }
  (*DAT_1011c5738)(0x8d40,(int)param_1[4]);
  (**(code **)(*param_1 + 0x38))(param_1,lVar10,param_4,param_5);
  (*DAT_1011c5708)(0x88eb,(int)param_1[0x1c]);
  uVar9 = param_3[1];
  uVar11 = param_3[3];
  uVar8 = (uVar11 - uVar9) * (param_3[2] - *param_3) *
          (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar8 * 8) >> 0x18);
  if (*(uint *)((long)param_1 + 0xe4) < uVar8) {
    (*DAT_1011c57d8)(0x88eb,uVar8,0,0x88ea);
    *(uint *)((long)param_1 + 0xe4) = uVar8;
    uVar9 = param_3[1];
    uVar11 = param_3[3];
  }
  (*DAT_1011c66f0)(0x806c,uVar11 - uVar9);
  uVar12 = 0;
  uVar9 = 0;
  FUN_100389b40();
  (*DAT_1011c5708)(0x88eb,0);
  (*DAT_1011c5708)(0x88ec,(int)param_1[0x1c]);
  (**(code **)(*param_1 + 0x48))(param_1);
  (*DAT_1011c5768)(*(undefined4 *)(lVar6 + 0x14),*(undefined4 *)(lVar6 + 0xc));
  iVar7 = param_7[2] - *param_7;
  iVar4 = param_7[3] - param_7[1];
  uVar8 = *(uint *)(lVar6 + 0x1c);
  if (0xffffff < *(uint *)(&DAT_100b3e3b4 + (ulong)uVar8 * 8)) {
    uVar11 = (*(uint *)(&DAT_100b3e3b4 + (ulong)uVar8 * 8) >> 0x18) * iVar7;
    if (3 < uVar8 - 0x73) {
      uVar11 = uVar11 + 3 & 0xfffffffc;
    }
    uVar11 = uVar11 * iVar4;
    goto switchD_10038cda9_caseD_11;
  }
  switch(uVar8 - 0x53) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 0xb:
  case 0xc:
    uVar9 = iVar7 * 2 + 3U & 0xfffffffc;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
  case 0xf:
  case 0x10:
    uVar9 = iVar7 + 3U & 0xfffffffc;
    break;
  case 8:
  case 9:
  case 0xd:
  case 0xe:
    uVar9 = iVar7 * 4;
    break;
  case 10:
    uVar9 = iVar7 * 8;
    goto switchD_10038cda9_caseD_0;
  case 0x12:
  case 0x13:
  case 0x18:
  case 0x19:
  case 0x34:
  case 0x37:
    uVar9 = iVar7 * 2 + 6U & 0xfffffff8;
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
    uVar9 = iVar7 * 4 + 0xcU & 0xfffffff0;
  }
  uVar11 = 0;
  switch(uVar8 - 0x53) {
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
switchD_10038cda9_caseD_0:
    uVar11 = uVar9 * iVar4;
    break;
  case 4:
  case 5:
  case 6:
  case 0xb:
  case 0xc:
    uVar11 = iVar4 * uVar9 * 3 >> 1;
    break;
  case 7:
    uVar11 = iVar4 * uVar9 * 2;
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
    uVar11 = uVar9 * (iVar4 + 3U & 0xfffffffc) >> 2;
  }
switchD_10038cda9_caseD_11:
  (*DAT_1011c66f0)(0xcf5,4);
  (*DAT_1011c66f0)(0xcf2,param_7[2] - *param_7);
  (*DAT_1011c66f0)(0x806e,param_7[3] - param_7[1]);
  pcVar3 = DAT_1011c5a40;
  uVar8 = *param_7;
  uVar9 = param_7[1];
  uVar1 = param_7[2];
  uVar2 = param_7[3];
  uVar5 = FUN_10038e1d0(*(undefined4 *)(lVar6 + 0x1c));
  (*pcVar3)(0xde1,param_8,uVar8,uVar9,uVar1 - uVar8,uVar2 - uVar9,CONCAT44(uVar12,uVar5),uVar11,0);
  (*DAT_1011c5708)(0x88ec,0);
  **(uint **)(param_6 + 0x90) = **(uint **)(param_6 + 0x90) & ~(1 << ((byte)param_8 & 0x1f));
  return;
}


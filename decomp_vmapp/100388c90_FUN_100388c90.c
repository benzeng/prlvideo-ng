
void FUN_100388c90(long param_1,long *param_2,long *param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  (*DAT_1011c5bc0)(0xc11);
  (*DAT_1011c5738)(0x8ca8,*(undefined4 *)(param_1 + 0x24));
  (*DAT_1011c5738)(0x8ca9,*(undefined4 *)(param_1 + 0x20));
  local_38 = 0x2601;
  if (*param_5 != 2) {
    local_38 = 0x2600;
  }
  local_44 = 0x821a;
  uVar9 = 0x4000;
  uVar6 = 0x8ce0;
  if ((*(ushort *)(*param_3 + 0xb0) & 0x40) == 0) {
    local_40 = 0x8ce0;
    local_3c = 0x8ce0;
  }
  else {
    local_40 = 0x8ce0;
    local_3c = 0x8ce0;
    if ((*(ushort *)(*param_2 + 0xb0) & 0x40) != 0) {
      local_40 = 0x8d00;
      if ((*(byte *)(param_2[1] + 0xac) & 2) != 0) {
        local_40 = 0x821a;
      }
      bVar4 = *(byte *)(param_3[1] + 0xac) & 2;
      local_3c = 0x8d00;
      if (bVar4 != 0) {
        local_3c = 0x821a;
      }
      local_38 = 0x2600;
      local_44 = 0x8ce0;
      uVar9 = 0x100;
      uVar6 = 0;
      if ((*(byte *)(param_2[1] + 0xac) & 2) != 0) {
        uVar9 = (uint)bVar4 << 9 | 0x100;
        uVar6 = 0;
      }
    }
  }
  (*DAT_1011c68d8)(uVar6);
  (*DAT_1011c5c00)(uVar6);
  iVar8 = 0;
  (*DAT_1011c5de8)(0x8ca8,local_44,0xde1,0,0);
  (*DAT_1011c5de8)(0x8ca9,local_44,0xde1,0,0);
  if (param_4 != 0) {
    do {
      uVar6 = *(undefined4 *)(param_2[1] + 0xc);
      iVar5 = *(int *)(param_2[1] + 0x14);
      uVar7 = (int)param_2[3] + iVar8;
      uVar1 = *(undefined4 *)((long)param_2 + 0x1c);
      if (iVar5 < 0x8c18) {
        if (iVar5 < 0x8513) {
          if (iVar5 < 0x806f) {
            if (iVar5 == 0xde0) {
              (*DAT_1011c75b0)(0x8ca8,local_40,uVar6,uVar1);
            }
            else if (iVar5 == 0xde1) goto LAB_100388f00;
          }
          else {
            if (iVar5 == 0x806f) goto LAB_100388ed0;
            if (iVar5 == 0x84f5) goto LAB_100388f00;
          }
        }
        else if (iVar5 == 0x8513) {
          iVar5 = uVar7 + 0x8515 + (uVar7 / 6) * -6;
LAB_100388f00:
          (*DAT_1011c5de8)(0x8ca8,local_40,iVar5,uVar6,uVar1);
        }
      }
      else if (iVar5 < 0x9100) {
        if ((iVar5 == 0x8c18) || (iVar5 == 0x8c1a)) {
LAB_100388ed0:
          (*DAT_1011c5e18)(0x8ca8,local_40,uVar6,uVar1);
        }
      }
      else {
        if (iVar5 == 0x9102) goto LAB_100388ed0;
        if (iVar5 == 0x9100) goto LAB_100388f00;
      }
      uVar6 = *(undefined4 *)(param_3[1] + 0xc);
      iVar5 = *(int *)(param_3[1] + 0x14);
      uVar7 = (int)param_3[3] + iVar8;
      uVar1 = *(undefined4 *)((long)param_3 + 0x1c);
      if (iVar5 < 0x8c18) {
        if (iVar5 < 0x8513) {
          if (iVar5 < 0x806f) {
            if (iVar5 == 0xde0) {
              (*DAT_1011c75b0)(0x8ca9,local_3c,uVar6,uVar1);
            }
            else if (iVar5 == 0xde1) goto LAB_100389010;
          }
          else {
            if (iVar5 == 0x806f) goto LAB_100388fe0;
            if (iVar5 == 0x84f5) goto LAB_100389010;
          }
        }
        else if (iVar5 == 0x8513) {
          iVar5 = uVar7 + 0x8515 + (uVar7 / 6) * -6;
LAB_100389010:
          (*DAT_1011c5de8)(0x8ca9,local_3c,iVar5,uVar6,uVar1);
        }
      }
      else if (iVar5 < 0x9100) {
        if ((iVar5 == 0x8c18) || (iVar5 == 0x8c1a)) {
LAB_100388fe0:
          (*DAT_1011c5e18)(0x8ca9,local_3c,uVar6,uVar1);
        }
      }
      else {
        if (iVar5 == 0x9102) goto LAB_100388fe0;
        if (iVar5 == 0x9100) goto LAB_100389010;
      }
      puVar2 = (undefined4 *)param_2[2];
      puVar3 = (undefined4 *)param_3[2];
      (*DAT_1011c57c8)(*puVar2,puVar2[1],puVar2[2],puVar2[3],*puVar3,puVar3[1],puVar3[2],puVar3[3],
                       uVar9,local_38);
      iVar8 = iVar8 + 1;
    } while (param_4 != iVar8);
  }
  (*DAT_1011c5de8)(0x8ca8,local_40,0xde1,0,0);
                    /* WARNING: Could not recover jumptable at 0x0001003890b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_1011c5de8)(0x8ca9,local_3c,0xde1,0,0);
  return;
}


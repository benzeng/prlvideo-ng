
void FUN_1002cab80(long param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  uint local_50;
  long local_48 [2];
  undefined4 local_38;
  
  local_48[0] = 0;
  local_48[1] = 0;
  local_38 = 0;
  FUN_10008d2d0(local_48,*(uint *)(*param_2 + 4) & 0xfffffff0,0x20);
  uVar4 = *(uint *)(local_48[0] + 8);
  local_50 = 0;
  uVar2 = uVar4 >> 0xf & 0xf;
  if ((uVar2 != 0) && (local_50 = uVar2 | 0x80, (uVar4 & 0xff) != 0x69)) {
    local_50 = uVar2;
  }
  uVar4 = uVar4 >> 8 & 0x7f;
  lVar5 = 0;
LAB_1002cac00:
  do {
    iVar3 = FUN_1002cb460(param_1,local_48);
    if (iVar3 == 0) goto LAB_1002caeea;
    if ((*(uint *)(local_48[0] + 4) & 0x800000) == 0) {
      if ((*(uint *)(local_48[0] + 4) & 0x1000000) != 0) {
        *(byte *)(param_1 + 0x470) = *(byte *)(param_1 + 0x470) | 4;
      }
      goto LAB_1002caeea;
    }
    if ((lVar5 == 0) && (lVar5 = FUN_1002c8420(param_1,uVar4,local_50), lVar5 == 0)) {
      *(uint *)(local_48[0] + 4) = *(uint *)(local_48[0] + 4) | 0x7ff;
      *(uint *)(local_48[0] + 4) = *(uint *)(local_48[0] + 4) | 0x400000;
      uVar4 = *(uint *)(param_1 + 0x470);
      if ((*(byte *)(local_48[0] + 7) & 1) != 0) {
        uVar4 = uVar4 | 4;
        *(uint *)(param_1 + 0x470) = uVar4;
      }
      *(uint *)(param_1 + 0x470) = uVar4 | 0x10;
LAB_1002caedf:
      *(uint *)(local_48[0] + 4) = *(uint *)(local_48[0] + 4) & 0xff7fffff;
      goto LAB_1002caeea;
    }
    *(undefined4 *)(lVar5 + 0xa4) = *(undefined4 *)(param_1 + 0x1488);
    if (*(long *)(lVar5 + 0x30) != lVar5 + 0x30) goto LAB_1002caeea;
    lVar7 = *(long *)(lVar5 + 0x18);
    if (lVar7 != lVar5 + 0x18) {
      if ((uint)*(byte *)(local_48[0] + 8) == *(uint *)(lVar7 + 0x450)) {
        bVar8 = true;
        if (*(byte *)(local_48[0] + 8) != 0x69) {
          uVar6 = 0xffffffffffffffff;
          if (*(uint *)(lVar7 + 0x434) < *(uint *)(lVar7 + 0x430)) {
            uVar6 = *(ulong *)(lVar7 + 0x10 + (ulong)*(uint *)(lVar7 + 0x434) * 8);
          }
          bVar8 = uVar6 == *(uint *)(*param_2 + 4);
        }
      }
      else {
        bVar8 = false;
      }
      if (*(int *)(lVar7 + 0x464) == 0) {
        if (!bVar8) {
          FUN_1002d94a0(lVar5);
        }
        goto LAB_1002caeea;
      }
      if (bVar8) {
        FUN_1002cb860(param_1,param_2,lVar7,local_48);
        if (((*(uint *)(*param_2 + 4) & 3) != 0) ||
           (uVar2 = *(uint *)(*param_2 + 4) & 0xfffffff0, uVar2 == 0)) goto LAB_1002caeea;
        uVar6 = DAT_1011c5640;
        if (0xb0000000 < DAT_1011c5640) {
          uVar6 = 0xb0000000;
        }
        if (uVar6 <= uVar2) goto LAB_1002caeea;
        FUN_10008d3f0(local_48);
        local_48[1] = 0;
        FUN_10008d2d0(local_48,(ulong)uVar2,0x20);
      }
      else {
        FUN_1002c8620(param_1,lVar5);
        FUN_1002c8930(lVar7);
      }
      goto LAB_1002cac00;
    }
    if (0x500 < ((*(uint *)(local_48[0] + 8) >> 0x15) + 1 & 0x7ff)) {
      *(uint *)(local_48[0] + 4) = *(uint *)(local_48[0] + 4) | 0x7ff;
      *(uint *)(local_48[0] + 4) = *(uint *)(local_48[0] + 4) | 0x400000;
      uVar4 = *(uint *)(param_1 + 0x470);
      if ((*(byte *)(local_48[0] + 7) & 1) != 0) {
        uVar4 = uVar4 | 4;
        *(uint *)(param_1 + 0x470) = uVar4;
      }
      *(uint *)(param_1 + 0x470) = uVar4 | 0x10;
      goto LAB_1002caedf;
    }
    lVar7 = FUN_1002c8da0(0);
    if (lVar7 == 0) goto LAB_1002caeea;
    *(uint *)(lVar7 + 0x448) = uVar4;
    *(uint *)(lVar7 + 0x450) = (uint)*(byte *)(local_48[0] + 8);
    *(uint *)(lVar7 + 0x44c) = local_50;
    *(long *)(lVar7 + 0x458) = lVar5;
    *(uint *)(lVar7 + 0x460) = *(byte *)(lVar5 + 0xcb) & 3;
    uVar2 = *(uint *)(lVar7 + 0x430);
    if ((ulong)uVar2 < 0x84) {
      uVar1 = *(uint *)(*param_2 + 4);
      *(uint *)(lVar7 + 0x430) = uVar2 + 1;
      *(ulong *)(lVar7 + 0x10 + (ulong)uVar2 * 8) = (ulong)uVar1;
    }
    FUN_1002cbe20();
    FUN_1002c8590(param_1,lVar7);
    if (*(int *)(lVar7 + 0x464) == 0) {
LAB_1002caeea:
      FUN_10008d3f0(local_48);
      return;
    }
  } while( true );
}


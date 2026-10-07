
undefined8 FUN_1008b9dd0(long param_1)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  int unaff_R14D;
  int iVar8;
  bool bVar9;
  long local_58;
  long local_50;
  long local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  uVar1 = *(ulong *)(*(long *)(param_1 + 0x28) + 0x18);
  if ((uVar1 & 4) != 0) {
    if ((uVar1 & 8) == 0) {
      iVar2 = 0;
      if (*(long *)(param_1 + 0xe0) != 0) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_100885600(*(undefined8 *)(param_1 + 0xa0));
      if (iVar2 < 1) {
        return 1;
      }
      iVar2 = iVar2 + -1;
    }
    iVar6 = 0;
    do {
      *(int *)(param_1 + 0xb4) = iVar6;
      local_58 = 0;
      uVar4 = FUN_100885620(*(undefined8 *)(param_1 + 0xa0));
      *(undefined8 *)(param_1 + 0xc0) = uVar4;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined8 *)(param_1 + 0xd8) = 0;
      iVar8 = 0;
      do {
        lVar7 = 0;
        if (iVar8 == 0x807f) goto LAB_1008ba0b0;
        if (*(code **)(param_1 + 0x60) == (code *)0x0) {
          local_38 = 0;
          local_3c = 0;
          local_48 = 0;
          local_50 = 0;
          uVar5 = FUN_1008b6ee0(uVar4);
          local_40 = *(undefined4 *)(param_1 + 0xdc);
          iVar3 = FUN_1008ba970(param_1,&local_48,&local_50,&local_38,&local_3c,&local_40,
                                *(undefined8 *)(param_1 + 0x20));
          if ((iVar3 == 0) &&
             ((lVar7 = (**(code **)(param_1 + 0x88))(param_1,uVar5), lVar7 != 0 || (local_48 == 0)))
             ) {
            FUN_1008ba970(param_1,&local_48,&local_50,&local_38,&local_3c,&local_40,lVar7);
            FUN_100885590(lVar7,FUN_1008a20a0);
          }
          iVar3 = 0;
          lVar7 = 0;
          if (local_48 != 0) {
            *(undefined8 *)(param_1 + 200) = local_38;
            *(undefined4 *)(param_1 + 0xd8) = local_3c;
            *(undefined4 *)(param_1 + 0xdc) = local_40;
            local_58 = local_48;
            iVar3 = 1;
            lVar7 = local_50;
          }
        }
        else {
          iVar3 = (**(code **)(param_1 + 0x60))(param_1,&local_58,uVar4);
          lVar7 = 0;
        }
        if (iVar3 == 0) {
          *(undefined4 *)(param_1 + 0xb8) = 3;
          unaff_R14D = (**(code **)(param_1 + 0x40))(0,param_1);
          goto LAB_1008ba0b0;
        }
        *(long *)(param_1 + 0xd0) = local_58;
        iVar3 = (**(code **)(param_1 + 0x68))(param_1);
        if (iVar3 == 0) {
          unaff_R14D = 0;
          goto LAB_1008ba0b0;
        }
        if (lVar7 == 0) {
LAB_1008ba020:
          unaff_R14D = (**(code **)(param_1 + 0x70))(param_1,local_58,uVar4);
          if (unaff_R14D == 0) {
            unaff_R14D = 0;
            goto LAB_1008ba0b0;
          }
        }
        else {
          iVar3 = (**(code **)(param_1 + 0x68))(param_1,lVar7);
          if (iVar3 == 0) {
            unaff_R14D = 0;
            goto LAB_1008ba0b0;
          }
          iVar3 = (**(code **)(param_1 + 0x70))(param_1,lVar7,uVar4);
          unaff_R14D = 2;
          if (iVar3 != 2) {
            if (iVar3 != 0) goto LAB_1008ba020;
            unaff_R14D = 0;
            goto LAB_1008ba0b0;
          }
        }
        FUN_1008a20a0(local_58);
        FUN_1008a20a0(lVar7);
        local_58 = 0;
        bVar9 = iVar8 != *(int *)(param_1 + 0xdc);
        iVar8 = *(int *)(param_1 + 0xdc);
      } while (bVar9);
      *(undefined4 *)(param_1 + 0xb8) = 3;
      unaff_R14D = (**(code **)(param_1 + 0x40))(0,param_1);
      lVar7 = 0;
LAB_1008ba0b0:
      FUN_1008a20a0(local_58);
      FUN_1008a20a0(lVar7);
      *(undefined8 *)(param_1 + 0xd0) = 0;
      if (unaff_R14D == 0) {
        return 0;
      }
      bVar9 = iVar6 < iVar2;
      iVar6 = iVar6 + 1;
    } while (bVar9);
  }
  return 1;
}


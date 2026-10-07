
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1003685c0(undefined8 param_1,int param_2,undefined4 param_3,char param_4,uint *param_5)

{
  ushort uVar1;
  long lVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint local_38 [6];
  long local_20;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_20 = lVar2;
  switch(param_3) {
  case 0x1400:
    local_6c = 0x7f000000;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        local_6c = (uint)*(byte *)((long)param_5 + 3) << 0x18;
      case 3:
        local_6c = (uint)CONCAT11(local_6c._3_1_,*(undefined1 *)((long)param_5 + 2)) << 0x10;
      case 2:
        local_6c = (uint)CONCAT21(local_6c._2_2_,*(undefined1 *)((long)param_5 + 1)) << 8;
      case 1:
        uVar3 = (undefined1)*param_5;
LAB_1003688f3:
        local_6c = CONCAT31(local_6c._1_3_,uVar3);
      }
    }
    else if (param_2 == 0x80e1) {
      local_6c = (uint)CONCAT21(CONCAT11(*(undefined1 *)((long)param_5 + 3),(char)*param_5),
                                *(undefined1 *)((long)param_5 + 1)) << 8;
      uVar3 = *(undefined1 *)((long)param_5 + 2);
      goto LAB_1003688f3;
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c7150;
      puVar11 = &local_6c;
    }
    else {
      puVar6 = &DAT_1011c70e0;
      puVar11 = &local_6c;
    }
    break;
  case 0x1401:
    local_70 = 0xff000000;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        local_70 = (uint)*(byte *)((long)param_5 + 3) << 0x18;
      case 3:
        local_70 = (uint)CONCAT11(local_70._3_1_,*(undefined1 *)((long)param_5 + 2)) << 0x10;
      case 2:
        local_70 = (uint)CONCAT21(local_70._2_2_,*(undefined1 *)((long)param_5 + 1)) << 8;
      case 1:
        uVar3 = (undefined1)*param_5;
LAB_10036892e:
        local_70 = CONCAT31(local_70._1_3_,uVar3);
      }
    }
    else if (param_2 == 0x80e1) {
      local_70 = (uint)CONCAT21(CONCAT11(*(undefined1 *)((long)param_5 + 3),(char)*param_5),
                                *(undefined1 *)((long)param_5 + 1)) << 8;
      uVar3 = *(undefined1 *)((long)param_5 + 2);
      goto LAB_10036892e;
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c71d0;
    }
    else {
      puVar6 = &DAT_1011c7120;
    }
    puVar11 = &local_70;
    break;
  case 0x1402:
    local_60 = 0x7fff000000000000;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        local_60 = (ulong)*(ushort *)((long)param_5 + 6) << 0x30;
      case 3:
        local_60 = (ulong)CONCAT22(local_60._6_2_,(short)param_5[1]) << 0x20;
      case 2:
        local_60 = (ulong)CONCAT42(local_60._4_4_,*(undefined2 *)((long)param_5 + 2)) << 0x10;
      case 1:
        uVar4 = (undefined2)*param_5;
LAB_10036896c:
        local_60 = CONCAT62(local_60._2_6_,uVar4);
      }
    }
    else if (param_2 == 0x80e1) {
      local_60 = (ulong)CONCAT42(CONCAT22(*(undefined2 *)((long)param_5 + 6),(short)*param_5),
                                 *(undefined2 *)((long)param_5 + 2)) << 0x10;
      uVar4 = (undefined2)param_5[1];
      goto LAB_10036896c;
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c71c0;
      puVar11 = (uint *)&local_60;
    }
    else {
      puVar6 = &DAT_1011c7100;
      puVar11 = (uint *)&local_60;
    }
    break;
  case 0x1403:
    local_68 = -0x1000000000000;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        local_68 = (ulong)*(ushort *)((long)param_5 + 6) << 0x30;
      case 3:
        local_68 = (ulong)CONCAT22(local_68._6_2_,(short)param_5[1]) << 0x20;
      case 2:
        local_68 = (ulong)CONCAT42(local_68._4_4_,*(undefined2 *)((long)param_5 + 2)) << 0x10;
      case 1:
        uVar4 = (undefined2)*param_5;
LAB_1003689af:
        local_68 = CONCAT62(local_68._2_6_,uVar4);
      }
    }
    else if (param_2 == 0x80e1) {
      local_68 = (ulong)CONCAT42(CONCAT22(*(undefined2 *)((long)param_5 + 6),(short)*param_5),
                                 *(undefined2 *)((long)param_5 + 2)) << 0x10;
      uVar4 = (undefined2)param_5[1];
      goto LAB_1003689af;
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c71f0;
      puVar11 = (uint *)&local_68;
    }
    else {
      puVar6 = &DAT_1011c7140;
      puVar11 = (uint *)&local_68;
    }
    break;
  case 0x1404:
    local_48 = _DAT_100b3cf60;
    uStack_44 = _UNK_100b3cf64;
    uStack_40 = _UNK_100b3cf68;
    uStack_3c = _UNK_100b3cf6c;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        uStack_3c = param_5[3];
      case 3:
        uStack_40 = param_5[2];
      case 2:
        uStack_44 = param_5[1];
      case 1:
        local_48 = *param_5;
      }
    }
    else if (param_2 == 0x80e1) {
      uStack_3c = param_5[3];
      uStack_40 = *param_5;
      uStack_44 = param_5[1];
      local_48 = param_5[2];
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c71a0;
      puVar11 = &local_48;
    }
    else {
      puVar6 = &DAT_1011c70f0;
      puVar11 = &local_48;
    }
    break;
  case 0x1405:
    local_58 = _DAT_100b3cf70;
    uStack_54 = _UNK_100b3cf74;
    uStack_50 = _UNK_100b3cf78;
    uStack_4c = _UNK_100b3cf7c;
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 4:
        uStack_4c = param_5[3];
      case 3:
        uStack_50 = param_5[2];
      case 2:
        uStack_54 = param_5[1];
      case 1:
        local_58 = *param_5;
      }
    }
    else if (param_2 == 0x80e1) {
      uStack_4c = param_5[3];
      uStack_50 = *param_5;
      uStack_54 = param_5[1];
      local_58 = param_5[2];
    }
    if (param_4 == '\0') {
      puVar6 = &DAT_1011c71e0;
      puVar11 = &local_58;
    }
    else {
      puVar6 = &DAT_1011c7130;
      puVar11 = &local_58;
    }
    break;
  case 0x1406:
    if (param_2 < 0x80e1) {
      switch(param_2) {
      case 1:
        puVar6 = &DAT_1011c6ff0;
        break;
      case 2:
        puVar6 = &DAT_1011c7050;
        break;
      case 3:
        puVar6 = &DAT_1011c70b0;
        break;
      case 4:
        puVar6 = &DAT_1011c7190;
        break;
      default:
        goto switchD_1003685f6_caseD_1407;
      }
                    /* WARNING: Could not recover jumptable at 0x000100368b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(param_1,param_5);
      return;
    }
    if (param_2 == 0x80e1) {
      local_38[2] = param_5[2];
      local_38[0] = *param_5;
      local_38[1] = param_5[1];
      local_38[3] = param_5[3];
LAB_100368aef:
      if (lVar2 == local_20) {
                    /* WARNING: Could not recover jumptable at 0x000100368afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_1011c7180)(local_38[2],local_38[1],local_38[0],local_38[3]);
        return;
      }
      goto LAB_100368b5e;
    }
  default:
    goto switchD_1003685f6_caseD_1407;
  case 0x140b:
    if (param_2 != 0) {
      lVar8 = 0;
      do {
        uVar1 = *(ushort *)((long)param_5 + lVar8 * 2);
        uVar5 = (uint)(uVar1 >> 0xf);
        uVar9 = uVar1 >> 10 & 0x1f;
        uVar10 = uVar1 & 0x3ff;
        if (uVar9 == 0x1f) {
          uVar5 = uVar5 << 0x1f | 0x7f800000;
          if ((uVar1 & 0x3ff) != 0) {
            uVar5 = uVar5 | uVar10 << 0xd;
          }
        }
        else {
          if ((uVar1 >> 10 & 0x1f) == 0) {
            uVar9 = 1;
            if ((uVar1 & 0x3ff) == 0) {
              uVar5 = uVar5 << 0x1f;
              goto LAB_100368890;
            }
            do {
              uVar10 = uVar10 * 2;
              uVar9 = uVar9 - 1;
            } while ((uVar10 & 0x400) == 0);
            uVar10 = uVar10 & 0xfffffbfe;
          }
          uVar5 = uVar9 * 0x800000 + 0x38000000 | uVar5 << 0x1f | uVar10 << 0xd;
        }
LAB_100368890:
        local_38[lVar8] = uVar5;
        iVar7 = (int)lVar8;
        lVar8 = lVar8 + 1;
      } while (iVar7 != param_2 + -1);
      if (param_2 < 0x80e1) {
        switch(param_2 + -1) {
        case 0:
          puVar6 = &DAT_1011c6ff0;
          puVar11 = local_38;
          break;
        case 1:
          puVar6 = &DAT_1011c7050;
          puVar11 = local_38;
          break;
        case 2:
          puVar6 = &DAT_1011c70b0;
          puVar11 = local_38;
          break;
        case 3:
          puVar6 = &DAT_1011c7190;
          puVar11 = local_38;
          break;
        default:
          goto switchD_1003685f6_caseD_1407;
        }
        break;
      }
      if (param_2 == 0x80e1) goto LAB_100368aef;
    }
    goto switchD_1003685f6_caseD_1407;
  }
  (*(code *)*puVar6)(param_1,puVar11);
switchD_1003685f6_caseD_1407:
  if (lVar2 == local_20) {
    return;
  }
LAB_100368b5e:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


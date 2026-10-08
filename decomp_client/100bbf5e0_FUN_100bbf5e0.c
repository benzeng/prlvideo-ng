
undefined8
FUN_100bbf5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,uint *param_5)

{
  byte bVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  undefined8 local_c8;
  undefined2 local_c0;
  byte local_be;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined2 local_a8;
  byte local_a6;
  ulong local_a0;
  undefined2 local_98;
  byte local_96;
  undefined1 local_90 [8];
  undefined4 local_88;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a6 = 0;
  local_a8 = 0;
  iVar2 = FUN_100bbf380(param_1,&local_b8,0x13);
  uVar3 = 5;
  if (4 < iVar2 - 0x92U) goto LAB_100bbfdd0;
  if ((local_b8 & 0x40) == 0) {
    uVar10 = (byte)local_b8 >> 6 & 2;
    *param_5 = uVar10;
  }
  else {
    uVar10 = (byte)local_b8 >> 6 | 1;
    *param_5 = uVar10;
    uVar3 = 0;
    if (uVar10 == 1) goto LAB_100bbfdd0;
  }
  uVar3 = 5;
  if ((local_a6 & 7) != 0) goto LAB_100bbfdd0;
  local_c0 = (undefined2)uStack_b0;
  local_c8 = local_b8;
  local_be = uStack_b0._2_1_ & 0xf8;
  local_98 = (undefined2)uStack_b0;
  local_a0 = local_b8;
  local_96 = local_be;
  FUN_100bbfe00(&local_a0,local_90);
  uVar3 = FUN_100baba00(param_2,param_3,local_88,&local_b8,&local_c8);
  if ((int)uVar3 != 0) goto LAB_100bbfdd0;
  if (uVar10 == 3) {
    local_c0 = CONCAT11(local_c0._1_1_ ^ local_c8._1_1_,(byte)local_c0);
    local_be = local_be ^ local_c8._2_1_;
    iVar2 = 2;
    lVar9 = 0;
    do {
      iVar4 = 7;
      uVar10 = 0;
      iVar6 = iVar2;
      do {
        uVar7 = 1 << ((byte)iVar4 & 0x1f);
        if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
          uVar10 = uVar10 & ~uVar7;
        }
        else {
          uVar10 = uVar10 | uVar7;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != -1);
      iVar2 = iVar2 + 8;
      local_90[lVar9] = (char)uVar10;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 8);
    FUN_100ba7630(local_90,&local_a0);
    iVar2 = 2;
    lVar9 = 0;
    do {
      bVar1 = *(byte *)((long)&local_a0 + lVar9);
      uVar10 = 7;
      iVar6 = iVar2;
      do {
        iVar4 = iVar6 >> 3;
        bVar5 = (byte)(1 << (~(byte)iVar6 & 7));
        if ((bVar1 >> (uVar10 & 0x1f) & 1) == 0) {
          bVar5 = *(byte *)((long)&local_c8 + (long)iVar4) & ~bVar5;
        }
        else {
          bVar5 = *(byte *)((long)&local_c8 + (long)iVar4) | bVar5;
        }
        *(byte *)((long)&local_c8 + (long)iVar4) = bVar5;
        iVar6 = iVar6 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0xffffffff);
      iVar2 = iVar2 + 8;
      lVar9 = lVar9 + 1;
    } while (lVar9 != 8);
    uVar10 = (byte)local_c8 >> 6 | 1;
    if ((local_c8 & 0x40) == 0) {
      uVar10 = (byte)local_c8 >> 6 & 2;
    }
    param_5[1] = uVar10;
    param_5[2] = (byte)local_c8 >> 4 & 3;
    uVar7 = 0;
    iVar2 = 0x1a;
    iVar6 = 4;
    do {
      uVar8 = 1 << ((byte)iVar2 & 0x1f);
      if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar8;
      }
      else {
        uVar7 = uVar7 | uVar8;
      }
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar2 != -1);
    param_5[3] = uVar7;
    uVar7 = (uint)(local_c8._4_1_ >> 4);
    param_5[4] = uVar7 & 1 | uVar7 & 2 | uVar7 & 4 | uVar7 & 8 | (local_c8._3_1_ & 1) << 4;
    param_5[5] = local_c8._4_1_ & 0xf;
    uVar7 = 0xffffffff;
    if (local_c8._5_1_ >> 4 != 0xf) {
      uVar7 = (local_c8._5_1_ >> 4) + 0x7d6;
    }
    param_5[6] = uVar7;
    uVar7 = local_c8._5_1_ >> 2 & 2;
    if ((local_c8 & 0x40000000000) == 0) {
LAB_100bbfca9:
      uVar8 = *(uint *)("0123456789ABCDEFGHJKMNPQRSTVWXYZ<" + (long)(int)uVar7 * 4 + 0x20);
    }
    else {
      uVar7 = uVar7 | 1;
      uVar8 = 900;
      if (uVar7 != 3) goto LAB_100bbfca9;
    }
    param_5[7] = uVar8;
    param_5[8] = (uint)(local_c8._6_1_ >> 7) | (uint)local_c8._5_1_ * 2 & 6;
    param_5[9] = local_c8._6_1_ >> 3 & 0xf;
    uVar7 = (uint)(local_c8._7_1_ >> 7) | (uint)local_c8._6_1_ * 2 & 0xe;
    if (uVar7 - 0xb < 5) {
      uVar7 = *(uint *)(&DAT_101da26c0 + (long)(int)(uVar7 - 0xb) * 4);
    }
    param_5[10] = uVar7;
    param_5[0xb] = (uint)(local_c8._7_1_ >> 6 & 1);
    param_5[0xc] = (uint)(local_c8._7_1_ >> 5 & 1);
    param_5[0xd] = (uint)(local_c8._7_1_ >> 4 & 1);
    uVar7 = 0;
    iVar2 = 0xf;
    iVar6 = 0x3c;
    do {
      uVar8 = 1 << ((byte)iVar2 & 0x1f);
      if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
        uVar7 = uVar7 & ~uVar8;
      }
      else {
        uVar7 = uVar7 | uVar8;
      }
      iVar2 = iVar2 + -1;
      iVar6 = iVar6 + 1;
    } while (iVar2 != -1);
    param_5[0xe] = uVar7;
    param_5[0xf] = local_c0._1_1_ & 0xf;
    uVar3 = 4;
    if (uVar10 != *param_5) goto LAB_100bbfdd0;
  }
  else if (uVar10 == 2) {
    if (param_4 == 1) {
      local_c0 = CONCAT11(local_c0._1_1_ ^ local_c8._1_1_,(byte)local_c0);
      local_be = local_be ^ local_c8._2_1_;
      iVar2 = 2;
      lVar9 = 0;
      do {
        iVar4 = 7;
        uVar10 = 0;
        iVar6 = iVar2;
        do {
          uVar7 = 1 << ((byte)iVar4 & 0x1f);
          if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
            uVar10 = uVar10 & ~uVar7;
          }
          else {
            uVar10 = uVar10 | uVar7;
          }
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + -1;
        } while (iVar4 != -1);
        iVar2 = iVar2 + 8;
        local_90[lVar9] = (char)uVar10;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      FUN_100ba7630(local_90,&local_a0);
      iVar2 = 2;
      lVar9 = 0;
      do {
        bVar1 = *(byte *)((long)&local_a0 + lVar9);
        uVar10 = 7;
        iVar6 = iVar2;
        do {
          iVar4 = iVar6 >> 3;
          bVar5 = (byte)(1 << (~(byte)iVar6 & 7));
          if ((bVar1 >> (uVar10 & 0x1f) & 1) == 0) {
            bVar5 = *(byte *)((long)&local_c8 + (long)iVar4) & ~bVar5;
          }
          else {
            bVar5 = *(byte *)((long)&local_c8 + (long)iVar4) | bVar5;
          }
          *(byte *)((long)&local_c8 + (long)iVar4) = bVar5;
          iVar6 = iVar6 + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0xffffffff);
        iVar2 = iVar2 + 8;
        lVar9 = lVar9 + 1;
      } while (lVar9 != 8);
      uVar10 = (byte)local_c8 >> 6 | 1;
      if ((local_c8 & 0x40) == 0) {
        uVar10 = (byte)local_c8 >> 6 & 2;
      }
      *param_5 = uVar10;
      uVar10 = 0;
      iVar2 = 0x12;
      iVar6 = 2;
      do {
        uVar7 = 1 << ((byte)iVar2 & 0x1f);
        if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
          uVar10 = uVar10 & ~uVar7;
        }
        else {
          uVar10 = uVar10 | uVar7;
        }
        iVar2 = iVar2 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar2 != -1);
      param_5[1] = uVar10;
      param_5[2] = (uint)(local_c8._3_1_ >> 7) | (uint)local_c8._2_1_ * 2 & 0xe;
      param_5[3] = local_c8._3_1_ >> 3 & 0xf;
      param_5[4] = local_c8._3_1_ & 7;
      uVar10 = 0;
      iVar2 = 0xb;
      iVar6 = 0x20;
      do {
        uVar7 = 1 << ((byte)iVar2 & 0x1f);
        if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
          uVar10 = uVar10 & ~uVar7;
        }
        else {
          uVar10 = uVar10 | uVar7;
        }
        iVar2 = iVar2 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar2 != -1);
      param_5[5] = uVar10;
      param_5[6] = local_c8._5_1_ >> 2 & 3;
      uVar10 = (uint)(local_c8._6_1_ >> 5);
      param_5[7] = uVar10 & 1 | uVar10 & 2 | ((uint)local_c8._5_1_ << 3 | uVar10) & 0x1c;
      param_5[8] = local_c8._6_1_ >> 1 & 0xf;
      uVar10 = (uint)(local_c8._7_1_ >> 4);
      param_5[9] = uVar10 & 1 | uVar10 & 2 | uVar10 & 4 | uVar10 & 8 | (local_c8._6_1_ & 1) << 4;
      uVar10 = (uint)((byte)local_c0 >> 5);
      param_5[10] = uVar10 & 1 | uVar10 & 2 | ((uint)local_c8._7_1_ << 3 | uVar10) & 0x7c;
      param_5[0xb] = (uint)((byte)local_c0 >> 4 & 1);
      param_5[0xc] = local_c0._1_1_ >> 6 & 1 |
                     ((uint)(byte)local_c0 << 2 | (uint)(local_c0._1_1_ >> 6)) & 0x3e;
      uVar10 = 0;
      iVar2 = 7;
      iVar6 = 0x4a;
      do {
        uVar7 = 1 << ((byte)iVar2 & 0x1f);
        if ((*(byte *)((long)&local_c8 + (long)(iVar6 >> 3)) >> (~(byte)iVar6 & 7) & 1) == 0) {
          uVar10 = uVar10 & ~uVar7;
        }
        else {
          uVar10 = uVar10 | uVar7;
        }
        iVar2 = iVar2 + -1;
        iVar6 = iVar6 + 1;
      } while (iVar2 != -1);
      param_5[0xd] = uVar10;
      param_5[0xe] = local_be >> 4 & 3;
      param_5[0xf] = (uint)(local_be >> 3 & 1);
    }
    else {
LAB_100bbfdb0:
      FUN_100bbfe00(&local_c8,param_5 + 1);
      uVar3 = 4;
      if (param_5[1] != *param_5) goto LAB_100bbfdd0;
    }
  }
  else if (uVar10 == 0) goto LAB_100bbfdb0;
  uVar3 = 0;
LAB_100bbfdd0:
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c61240(double param_1,long param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  long local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [48];
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar7;
  if (param_3 == 0) goto LAB_100c61754;
  if (DAT_102316378 == '\x01') {
    FUN_100bf2be0(local_a8);
    FUN_100bf2780(5,0x13,"md_rand.c",0xdf);
    iVar5 = FUN_100bf2c50(&DAT_102316368,local_a8);
    FUN_100bf2780(6,0x13,"md_rand.c",0xe1);
    bVar3 = true;
    if (iVar5 != 0) goto LAB_100c612f1;
  }
  else {
LAB_100c612f1:
    FUN_100bf2780(9,0x12,"md_rand.c",0xe6);
    bVar3 = false;
  }
  iVar5 = DAT_102316388;
  local_48 = DAT_102316390;
  local_40 = DAT_102316398;
  local_58 = DAT_1023163b0;
  local_68 = _DAT_1023163a0;
  uStack_64 = uRam00000001023163a4;
  uStack_60 = uRam00000001023163a8;
  uStack_5c = uRam00000001023163ac;
  DAT_102316388 = DAT_102316388 + param_3;
  if (DAT_102316388 < 0x3ff) {
    if ((DAT_10231638c < 0x3ff) && (DAT_10231638c < DAT_102316388)) {
      DAT_10231638c = DAT_102316388;
    }
  }
  else {
    DAT_102316388 = DAT_102316388 % 0x3ff;
    DAT_10231638c = 0x3ff;
  }
  DAT_102316398 = (int)((uint)(0 < param_3 % 0x14) + param_3 / 0x14) + DAT_102316398;
  if (!bVar3) {
    FUN_100bf2780(10,0x12,"md_rand.c");
  }
  FUN_100c65850(local_98);
  if (0 < param_3) {
    iVar12 = param_3 + 0x15;
    iVar14 = 0;
    iVar8 = 0;
    local_b8 = param_2;
    iVar13 = param_3;
    do {
      iVar10 = 0x14;
      if (0x13 < iVar13) {
        iVar10 = iVar13;
      }
      iVar11 = iVar14 * -0x14;
      iVar15 = param_3 + iVar11;
      if (param_3 + iVar11 < 0x14) {
        iVar15 = 0x14;
      }
      iVar2 = param_3 - iVar8;
      if (0x14 < param_3 - iVar8) {
        iVar2 = 0x14;
      }
      uVar6 = FUN_100c6ca00();
      FUN_100c65920(local_98,uVar6,0);
      FUN_100c65b10(local_98,&local_68,0x14);
      if (iVar2 + iVar5 < 0x400) {
        FUN_100c65b10(local_98,&DAT_1023163c0 + iVar5,(long)iVar2);
      }
      else {
        iVar16 = iVar2 + -0x3ff + iVar5;
        FUN_100c65b10(local_98,&DAT_1023163c0 + iVar5,(long)(iVar2 - iVar16));
        FUN_100c65b10(local_98,&DAT_1023163c0,(long)iVar16);
      }
      FUN_100c65b10(local_98,local_b8);
      FUN_100c65b10(local_98,&local_48,0x10);
      FUN_100c65bc0(local_98,&local_68,0);
      local_40 = local_40 + 1;
      if (0 < iVar2) {
        lVar7 = 0;
        if (((param_3 + 0x14 + iVar11) - iVar15 & 1U) != 0) {
          (&DAT_1023163c0)[iVar5] = (&DAT_1023163c0)[iVar5] ^ (byte)local_68;
          bVar1 = 0x3fd < iVar5;
          iVar5 = iVar5 + 1;
          if (bVar1) {
            iVar5 = 0;
          }
          lVar7 = 1;
        }
        if (iVar11 + param_3 + 0x13 != iVar15) {
          pbVar9 = (byte *)((long)&local_68 + lVar7 + 1);
          iVar10 = (iVar12 - iVar10) - ((int)lVar7 + 1);
          do {
            iVar15 = iVar5 + 1;
            (&DAT_1023163c0)[iVar5] = (&DAT_1023163c0)[iVar5] ^ pbVar9[-1];
            if (0x3fd < iVar5) {
              iVar15 = 0;
            }
            (&DAT_1023163c0)[iVar15] = (&DAT_1023163c0)[iVar15] ^ *pbVar9;
            iVar5 = iVar15 + 1;
            if (0x3fd < iVar15) {
              iVar5 = 0;
            }
            pbVar9 = pbVar9 + 2;
            iVar10 = iVar10 + -2;
          } while (iVar10 != 0);
        }
      }
      local_b8 = local_b8 + iVar2;
      iVar8 = iVar8 + 0x14;
      iVar14 = iVar14 + 1;
      iVar12 = iVar12 + -0x14;
      iVar13 = iVar13 + -0x14;
    } while (iVar8 < param_3);
  }
  FUN_100c65c50(local_98);
  if (!bVar3) {
    FUN_100bf2780(9,0x12,"md_rand.c",0x137);
  }
  uVar4 = DAT_1023163b0;
  _DAT_1023163a0 = _DAT_1023163a0 ^ local_68;
  uRam00000001023163a4 = uRam00000001023163a4 ^ uStack_64;
  uRam00000001023163a8 = uRam00000001023163a8 ^ uStack_60;
  uRam00000001023163ac = uRam00000001023163ac ^ uStack_5c;
  DAT_1023163b0._0_1_ = (byte)DAT_1023163b0 ^ (byte)local_58;
  DAT_1023163b0._1_1_ = SUB41(uVar4,1);
  DAT_1023163b0._1_1_ = DAT_1023163b0._1_1_ ^ local_58._1_1_;
  DAT_1023163b0._2_1_ = SUB41(uVar4,2);
  DAT_1023163b0._3_1_ = SUB41(uVar4,3);
  DAT_1023163b0._2_1_ = DAT_1023163b0._2_1_ ^ local_58._2_1_;
  DAT_1023163b0._3_1_ = DAT_1023163b0._3_1_ ^ local_58._3_1_;
  lVar7 = *(long *)PTR____stack_chk_guard_1021e1840;
  if (DAT_102316380 < DAT_100e11070) {
    DAT_102316380 = DAT_102316380 + param_1;
  }
  if (!bVar3) {
    FUN_100bf2780(10,0x12,"md_rand.c",0x144);
  }
LAB_100c61754:
  if (lVar7 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


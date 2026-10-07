
/* WARNING: Removing unreachable block (ram,0x0001002f590c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002f5830(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int iVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  long lVar19;
  ulong uVar20;
  int iVar21;
  int iVar24;
  int iVar25;
  ulong uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined1 local_978 [2368];
  long local_38;
  long lVar27;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar1;
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + 0x458);
    uVar4 = 0;
    if (*plVar2 != 0) {
      uVar4 = ___dynamic_cast(*plVar2,&PTR_vtable_100bb3b70,&PTR_vtable_100bb61d0);
    }
    *(int *)(param_1 + 0x46c) = param_2;
    if ((param_2 == -0x1ffffd19) || (param_2 == 0)) {
      if (*(int *)(param_1 + 0x460) == 1) {
        uVar3 = *(uint *)(param_1 + 0x490);
        uVar9 = (ulong)uVar3;
        if (uVar9 != 0) {
          uVar6 = 0;
          iVar10 = *(int *)(param_1 + 0x454);
          iVar14 = 0;
          iVar15 = 0;
          iVar16 = 0;
          iVar21 = 0;
          iVar24 = 0;
          iVar25 = 0;
          iVar28 = 0;
          if (uVar3 != (uVar3 & 7)) {
            uVar6 = uVar9 - (uVar3 & 7);
            iVar21 = 0;
            iVar24 = 0;
            iVar25 = 0;
            iVar28 = 0;
            lVar8 = 0;
            do {
              uVar13 = (undefined4)((ulong)lVar8 >> 0x20);
              auVar18._8_4_ = (int)lVar8;
              auVar18._0_8_ = lVar8;
              auVar18._12_4_ = uVar13;
              lVar27 = auVar18._8_8_;
              uVar26 = lVar27 + 1;
              lVar19 = lVar8 + _DAT_100b4afe0;
              uVar20 = lVar27 + _UNK_100b4afe8;
              auVar22._8_4_ = (int)lVar8;
              auVar22._0_8_ = uVar26;
              auVar22._12_4_ = uVar13;
              auVar11._8_4_ = (int)lVar19;
              auVar11._0_8_ = uVar20;
              auVar11._12_4_ = (int)((ulong)lVar19 >> 0x20);
              auVar12._8_8_ =
                   auVar11._8_8_ & 0xffff0000ffff0000 |
                   (ulong)*(ushort *)(param_1 + 0x49e + (lVar8 + _DAT_100b4afd0) * 8) |
                   (ulong)*(ushort *)(param_1 + 0x49e + (lVar27 + _UNK_100b4afd8) * 8) << 0x20;
              auVar12._0_8_ =
                   uVar20 & 0xffff0000ffff0000 | (ulong)*(ushort *)(param_1 + 0x49e + lVar8 * 8) |
                   (ulong)*(ushort *)(param_1 + 0x49e + uVar26 * 8) << 0x20;
              auVar23._8_8_ =
                   auVar22._8_8_ & 0xffff0000ffff0000 |
                   (ulong)*(ushort *)(param_1 + 0x49e + lVar19 * 8) |
                   (ulong)*(ushort *)(param_1 + 0x49e + uVar20 * 8) << 0x20;
              auVar23._0_8_ =
                   uVar26 & 0xffff0000ffff0000 |
                   (ulong)*(ushort *)(param_1 + 0x49e + (lVar8 + _DAT_100b4aff0) * 8) |
                   (ulong)*(ushort *)(param_1 + 0x49e + (lVar27 + _UNK_100b4aff8) * 8) << 0x20;
              auVar12 = auVar12 & _DAT_100b4add0;
              auVar23 = auVar23 & _DAT_100b4add0;
              iVar10 = auVar12._0_4_ + iVar10;
              iVar14 = auVar12._4_4_ + iVar14;
              iVar15 = auVar12._8_4_ + iVar15;
              iVar16 = auVar12._12_4_ + iVar16;
              iVar21 = auVar23._0_4_ + iVar21;
              iVar24 = auVar23._4_4_ + iVar24;
              iVar25 = auVar23._8_4_ + iVar25;
              iVar28 = auVar23._12_4_ + iVar28;
              lVar8 = lVar8 + 8;
            } while (uVar9 - (uVar9 & 7) != lVar8);
          }
          auVar17._0_4_ = iVar15 + iVar25 + iVar10 + iVar21;
          auVar17._4_4_ = iVar16 + iVar28 + iVar14 + iVar24;
          auVar17._8_4_ = iVar10 + iVar21 + iVar15 + iVar25;
          auVar17._12_4_ = iVar14 + iVar24 + iVar16 + iVar28;
          auVar18 = phaddd(auVar17,auVar17);
          iVar10 = auVar18._0_4_;
          if (uVar9 != uVar6) {
            do {
              iVar10 = iVar10 + (uint)*(ushort *)(param_1 + 0x49e + uVar6 * 8);
              uVar6 = uVar6 + 1;
            } while (uVar6 < uVar9);
          }
          *(int *)(param_1 + 0x454) = iVar10;
        }
        *(undefined4 *)(param_1 + 0x468) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 0x454) = param_3;
        *(undefined4 *)(param_1 + 0x468) = 0;
      }
    }
    else {
      FUN_1002f5c90(uVar4,param_1);
    }
    if (*(code **)(param_1 + 0x478) != (code *)0x0) {
      (**(code **)(param_1 + 0x478))(param_1);
    }
    if (DAT_1011c568c < 2) {
      iVar10 = *(int *)(param_1 + 0x44c);
    }
    else {
      uVar13 = *(undefined4 *)(param_1 + 0x10);
      uVar29 = *(undefined4 *)(param_1 + 0x454);
      uVar30 = *(undefined4 *)(param_1 + 0x43c);
      uVar31 = *(undefined4 *)(param_1 + 0x490);
      uVar32 = *(undefined4 *)(param_1 + 0x498);
      uVar33 = (undefined4)plVar2[1];
      uVar3 = (uint)*(ushort *)(param_1 + 0x49c);
      uVar7 = (uint)*(ushort *)(param_1 + 0x49e);
      FUN_1008e3970("","USB",0,
                    "[%s] COMPLETE PKT(tag[0/%d]:%08x sz:%u/%u iso[0/%u]=(sts:%08x sz:%u/%u)) -> syserr:%08x pend:%u"
                    ,(long)plVar2 + 0xcf,*(undefined4 *)(param_1 + 0x430),uVar13,uVar29,uVar30,
                    uVar31,uVar32,uVar7,uVar3,param_2,uVar33);
      iVar10 = *(int *)(param_1 + 0x44c);
      if ((iVar10 == 0) && (1 < DAT_1011c568c)) {
        uVar5 = 0x400;
        if (*(uint *)(param_1 + 0x454) < 0x400) {
          uVar5 = *(uint *)(param_1 + 0x454);
        }
        FUN_1002da020(local_978,0x940,param_1 + 0x4d8,uVar5);
        FUN_1008e3970("","USB",0,"[%s] Control Data:%s",(long)plVar2 + 0xcf,local_978,uVar13,uVar29,
                      uVar30,uVar31,uVar32,uVar7,uVar3,param_2,uVar33);
        iVar10 = *(int *)(param_1 + 0x44c);
      }
    }
    lVar8 = 0;
    if ((*(uint *)(param_1 + 0x470) & 4) == 0) {
      lVar8 = *(long *)(plVar2[0x18] + 0x28);
    }
    uVar13 = *(undefined4 *)(param_1 + 0x448);
    if ((1 < DAT_1011c568c) && (*(int *)(param_1 + 0x450) == 0x69)) {
      FUN_1002da980(2,param_1);
    }
    uVar3 = *(uint *)(param_1 + 0x470);
    *(undefined4 *)(param_1 + 0x464) = 1;
    LOCK();
    *(int *)(plVar2[0x18] + 8) = *(int *)(plVar2[0x18] + 8) + -1;
    UNLOCK();
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + -1;
    UNLOCK();
    if ((uVar3 & 4) != 0) {
      FUN_1002c9070(param_1);
    }
    if (lVar8 != 0) {
      FUN_1002c8a90(lVar8,uVar13,iVar10);
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


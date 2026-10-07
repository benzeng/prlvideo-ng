
int FUN_10027c460(long param_1,uint param_2,ushort *param_3,undefined2 *param_4,long *param_5,
                 uint param_6,undefined8 param_7)

{
  long *plVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  long lVar14;
  undefined2 uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  undefined2 uVar19;
  ulong uVar20;
  uint uVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  lVar6 = *(long *)(param_1 + 0x18);
  uVar21 = 0x4000;
  if (*(char *)(lVar6 + 0x27) == '\0') {
    uVar21 = 0x5f2;
  }
  lVar14 = lVar5;
  if (uVar21 < param_2) {
    iVar12 = -1;
    goto LAB_10027cb4d;
  }
  uVar3 = *(ushort *)(lVar6 + 0x2810);
  uVar21 = (uint)*(ushort *)(lVar6 + 0x2818);
  if (*(ushort *)(lVar6 + 0x2818) == param_6) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","LocalDevices",3,"e1000: workaround DOS-bug with invalid rdt");
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    uVar21 = param_6 - 1;
  }
  if ((param_6 <= uVar3) || (param_6 <= uVar21)) {
    if (((uVar3 != 0) || (uVar21 != 0 || param_6 != 0)) && (DAT_1011b89d4 == '\0')) {
      DAT_1011b89d4 = '\x01';
      FUN_1008e3970("","LocalDevices",0,
                    "E1000 Invalid queue pointers detected: head = 0x%x, tail = 0x%x, size = 0x%x",
                    (uint)uVar3,uVar21,param_6);
      lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
    }
    if (param_6 <= uVar3) {
      iVar12 = -1;
      goto LAB_10027cb4d;
    }
    if (uVar21 != param_6) {
      iVar12 = -1;
      goto LAB_10027cb4d;
    }
    uVar21 = param_6 - 1;
  }
  uVar16 = (uint)uVar3;
  iVar22 = 0;
  if (*(char *)(lVar6 + 0x23) == '\0') {
    iVar22 = 4;
  }
  if (param_2 < 0x3c) {
    iVar22 = iVar22 + (0x3c - param_2);
  }
  *param_3 = uVar3;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 10;
  *(long *)(param_1 + 0x30) = param_1 + 0x20;
  uVar3 = *(ushort *)(lVar6 + 0x1c);
  iVar12 = 0;
  if (uVar16 != uVar21) {
    param_2 = iVar22 + param_2;
    cVar2 = *(char *)(lVar6 + 0x1e);
    iVar22 = 1;
    bVar23 = true;
    do {
      lVar7 = *param_5;
      uVar20 = (ulong)uVar16 * 0x10;
      plVar1 = (long *)(lVar7 + uVar20);
      uVar15 = (undefined2)uVar16;
      uVar19 = (undefined2)param_2;
      if (cVar2 == '\x03') {
        lVar14 = plVar1[3];
        lVar8 = plVar1[2];
        lVar17 = *plVar1;
        lVar18 = plVar1[1];
        plVar1[3] = 0;
        plVar1[2] = 0;
        plVar1[1] = 0;
        *plVar1 = 0;
        if (bVar23) {
          if (lVar17 != 0) {
            uVar4 = *(ushort *)(lVar6 + 0x28);
            uVar9 = FUN_10008d820(param_7,lVar17,(ulong)uVar4,param_1 + 0x30 + (long)iVar22 * 0x10);
            if (uVar9 != uVar4) goto LAB_10027cb69;
            *(ulong *)(param_1 + 0x38 + (long)iVar22 * 0x10) = (ulong)uVar4;
            iVar22 = iVar22 + 1;
            bVar23 = uVar4 <= param_2;
            param_2 = param_2 - uVar4;
            if (bVar23) {
              *(ushort *)(lVar7 + (uVar20 | 0xc)) = uVar4;
              bVar23 = false;
              goto LAB_10027c770;
            }
            *(undefined2 *)(lVar7 + (uVar20 | 0xc)) = uVar19;
            *param_4 = uVar15;
LAB_10027cbc4:
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
            iVar12 = iVar22;
            break;
          }
          lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        else {
          iVar12 = FUN_1008e38f0(&DAT_101115cb4);
          if (iVar12 != 0) {
            FUN_1008e3970("","LocalDevices",0,"Net PS-Packet copied to several descriptors!");
          }
LAB_10027c770:
          if (lVar18 == 0) {
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
          else {
            lVar17 = (long)iVar22;
            uVar4 = *(ushort *)(lVar6 + 0x2a);
            uVar9 = FUN_10008d820(param_7,lVar18,(ulong)uVar4,param_1 + 0x30 + lVar17 * 0x10);
            if (uVar9 != uVar4) {
LAB_10027cb69:
              iVar22 = -1;
              goto LAB_10027cbc4;
            }
            *(ulong *)(param_1 + 0x38 + lVar17 * 0x10) = (ulong)uVar4;
            puVar13 = (ushort *)(uVar20 + 0x12 + lVar7);
            uVar9 = param_2 - uVar4;
            if (param_2 < uVar4) {
              iVar22 = iVar22 + 1;
              uVar10 = param_2;
LAB_10027cbe9:
              lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
              *puVar13 = (ushort)uVar10;
              *param_4 = uVar15;
              iVar12 = iVar22;
              break;
            }
            *puVar13 = uVar4;
            lVar18 = lVar17 + 1;
            param_2 = uVar9;
            if (lVar8 == 0) {
LAB_10027c919:
              iVar22 = (int)lVar18;
            }
            else {
              uVar4 = *(ushort *)(lVar6 + 0x2c);
              uVar10 = FUN_10008d820(param_7,lVar8,(ulong)uVar4,param_1 + 0x30 + lVar18 * 0x10);
              if (uVar10 != uVar4) goto LAB_10027cb69;
              *(ulong *)(param_1 + 0x38 + lVar18 * 0x10) = (ulong)uVar4;
              puVar13 = (ushort *)(uVar20 + 0x14 + lVar7);
              uVar10 = uVar9 - uVar4;
              if (uVar9 < uVar4) {
                iVar22 = iVar22 + 2;
                uVar10 = uVar9;
                goto LAB_10027cbe9;
              }
              *puVar13 = uVar4;
              lVar18 = lVar17 + 2;
              param_2 = uVar10;
              if (lVar14 == 0) goto LAB_10027c919;
              uVar4 = *(ushort *)(lVar6 + 0x2e);
              uVar9 = (uint)uVar4;
              uVar11 = FUN_10008d820(param_7,lVar14,(ulong)uVar9,param_1 + 0x30 + lVar18 * 0x10);
              if (uVar11 != uVar9) goto LAB_10027cb69;
              *(ulong *)(param_1 + 0x38 + lVar18 * 0x10) = (ulong)uVar9;
              iVar22 = iVar22 + 3;
              puVar13 = (ushort *)(uVar20 + 0x16 + lVar7);
              param_2 = uVar10 - uVar9;
              if (uVar10 < uVar9) goto LAB_10027cbe9;
              *puVar13 = uVar4;
            }
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
        }
      }
      else if (*plVar1 != 0) {
        uVar10 = (uint)uVar3;
        uVar9 = FUN_10008d820(param_7,*plVar1,(ulong)uVar3,param_1 + 0x30 + (long)iVar22 * 0x10);
        if (uVar9 != uVar10) {
          iVar12 = -1;
          lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
          break;
        }
        *(ulong *)(param_1 + 0x38 + (long)iVar22 * 0x10) = (ulong)uVar3;
        iVar22 = iVar22 + 1;
        bVar24 = param_2 < uVar10;
        param_2 = param_2 - uVar10;
        if (bVar24 || param_2 == 0) {
          cVar2 = *(char *)(lVar6 + 0x1e);
          if (cVar2 == '\x01') {
            *(undefined2 *)(lVar7 + (uVar20 | 8)) = uVar19;
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
          }
          else {
            lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
            if (cVar2 == '\x02') {
              uVar20 = uVar20 | 0xc;
            }
            else {
              if (cVar2 != '\0') goto LAB_10027cb40;
              uVar20 = uVar20 | 8;
            }
            *(undefined2 *)(lVar7 + uVar20) = uVar19;
          }
LAB_10027cb40:
          *param_4 = uVar15;
          iVar12 = iVar22;
          break;
        }
        cVar2 = *(char *)(lVar6 + 0x1e);
        if (cVar2 == '\x01') {
          *(ushort *)(lVar7 + (uVar20 | 8)) = uVar3;
          lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
        }
        else {
          lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
          if (cVar2 == '\x02') {
            uVar20 = uVar20 | 0xc;
          }
          else {
            if (cVar2 != '\0') goto LAB_10027c942;
            uVar20 = uVar20 | 8;
          }
          *(ushort *)(lVar7 + uVar20) = uVar3;
        }
      }
LAB_10027c942:
      uVar9 = uVar16 + 1;
      if (uVar16 + 1 == param_6) {
        uVar9 = 0;
      }
      cVar2 = *(char *)(lVar6 + 0x1e);
      uVar16 = uVar9;
      if ((cVar2 == '\x03') && (uVar16 = uVar9 + 1, uVar9 + 1 == param_6)) {
        uVar16 = 0;
      }
      iVar12 = 0;
    } while (uVar16 != uVar21);
  }
LAB_10027cb4d:
  if (lVar14 != lVar5) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}


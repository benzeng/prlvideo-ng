
void FUN_10008d470(long *param_1)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  long *plVar4;
  ulong *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  bool bVar17;
  bool bVar18;
  ulong local_68;
  long local_60;
  ulong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar15;
  if ((*param_1 != 0) && (*(long *)(*param_1 + 0x60) != 0)) {
    plVar1 = param_1 + 3;
    uVar12 = 0xffffffff;
    bVar17 = false;
    uVar14 = 0;
    plVar16 = plVar1;
    do {
      lVar15 = 0;
      bVar18 = bVar17;
      if (0 < (int)*plVar16) {
        do {
          uVar9 = *(uint *)((long)plVar16 + lVar15 * 4 + 0x10);
          if (uVar9 == 0xffffffff) {
            uVar9 = uVar12;
            uVar6 = uVar14 + 1;
          }
          else {
            uVar6 = uVar9;
            if (uVar12 != 0xffffffff) {
              if (param_1[1] == 0) {
                iVar13 = uVar14 - uVar12;
                lVar10 = *(long *)(*(long *)(*param_1 + 0x60) + 0x20);
                if ((lVar10 != 0) && (lVar10 = lVar10 + (ulong)uVar12 * 0x1000, lVar10 != 0)) {
                  local_68 = 0;
                  local_50 = 0;
                  local_48 = 0;
                  local_40 = 0;
                  local_60 = lVar10;
                  local_58 = (ulong)(iVar13 * 0x1000 + 0x1000);
                }
              }
              else {
                iVar13 = uVar14 - uVar12;
              }
              puVar5 = (ulong *)*param_1;
              if (*(char *)((long)puVar5 + 0xd9) != '\0') {
                iVar7 = (int)(*puVar5 >> 0xc);
                uVar8 = iVar7 - uVar12;
                if (iVar13 + 1U < uVar8) {
                  uVar8 = iVar13 + 1U;
                }
                if ((uVar8 != 0) && (uVar12 < uVar8 + uVar12)) {
                  uVar8 = (uVar12 - 1) - iVar7;
                  uVar14 = (uVar12 - 2) - uVar14;
                  if (uVar14 < uVar8) {
                    uVar14 = uVar8;
                  }
                  uVar11 = (ulong)uVar12;
LAB_10008d610:
                  do {
                    cVar3 = *(char *)(puVar5[0x1c] + uVar11);
                    if (cVar3 != -1) {
                      pcVar2 = (char *)(puVar5[0x1c] + uVar11);
                      LOCK();
                      bVar17 = cVar3 == *pcVar2;
                      if (bVar17) {
                        *pcVar2 = cVar3 + -1;
                      }
                      UNLOCK();
                      local_68 = CONCAT71(local_68._1_7_,bVar17);
                      if (!bVar17) goto LAB_10008d610;
                    }
                    iVar13 = (int)uVar11;
                    uVar11 = uVar11 + 1;
                  } while (iVar13 != (uVar12 - 2) - uVar14);
                }
              }
            }
          }
          uVar14 = uVar6;
          uVar12 = uVar9;
          local_68 = CONCAT44(local_68._4_4_,uVar14);
          lVar10 = *(long *)(*param_1 + 200);
          bVar17 = bVar18;
          if ((lVar10 != 0) &&
             ((*(uint *)(lVar10 + (ulong)(uVar14 >> 5) * 4) >> (uVar14 & 0x1f) & 1) != 0)) {
            iVar13 = FUN_1007d74c0(*(undefined8 *)(*param_1 + 0xd0),&local_68,4);
            bVar17 = true;
            if (iVar13 != 4) {
              FUN_1008e3970("","vm",0,"Ring buffer overflow; dropping %x",local_68 & 0xffffffff);
              bVar17 = bVar18;
            }
          }
          lVar15 = lVar15 + 1;
          bVar18 = bVar17;
        } while (lVar15 < (int)*plVar16);
      }
      plVar4 = (long *)plVar16[1];
      if (plVar16 != plVar1) {
        _free(plVar16);
      }
      plVar16 = plVar4;
    } while (plVar4 != (long *)0x0);
    if (uVar12 != 0xffffffff) {
      if (param_1[1] == 0) {
        iVar13 = uVar14 - uVar12;
        lVar15 = *(long *)(*(long *)(*param_1 + 0x60) + 0x20);
        if ((lVar15 != 0) && (lVar15 = lVar15 + (ulong)uVar12 * 0x1000, lVar15 != 0)) {
          local_68 = 0x4d430005;
          local_50 = 0;
          local_48 = 0;
          local_40 = 0;
          local_60 = lVar15;
          local_58 = (ulong)(iVar13 * 0x1000 + 0x1000);
        }
      }
      else {
        iVar13 = uVar14 - uVar12;
      }
      puVar5 = (ulong *)*param_1;
      if (*(char *)((long)puVar5 + 0xd9) != '\0') {
        iVar7 = (int)(*puVar5 >> 0xc);
        uVar9 = iVar7 - uVar12;
        if (iVar13 + 1U < uVar9) {
          uVar9 = iVar13 + 1U;
        }
        if ((uVar9 != 0) && (uVar12 < uVar9 + uVar12)) {
          uVar9 = (uVar12 - 1) - iVar7;
          uVar14 = (uVar12 - 2) - uVar14;
          if (uVar14 < uVar9) {
            uVar14 = uVar9;
          }
          uVar11 = (ulong)uVar12;
LAB_10008d780:
          do {
            cVar3 = *(char *)(puVar5[0x1c] + uVar11);
            if (cVar3 != -1) {
              pcVar2 = (char *)(puVar5[0x1c] + uVar11);
              LOCK();
              bVar18 = cVar3 == *pcVar2;
              if (bVar18) {
                *pcVar2 = cVar3 + -1;
              }
              UNLOCK();
              local_68 = CONCAT71(local_68._1_7_,bVar18);
              if (!bVar18) goto LAB_10008d780;
            }
            iVar13 = (int)uVar11;
            uVar11 = uVar11 + 1;
          } while (iVar13 != (uVar12 - 2) - uVar14);
        }
      }
    }
    if (bVar17) {
      FUN_1000ace70(DAT_1011c3698,*(undefined8 *)(*param_1 + 0xb0));
    }
    *(undefined4 *)(param_1 + 3) = 0;
    param_1[4] = 0;
    param_1[2] = (long)plVar1;
    lVar15 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  if (lVar15 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


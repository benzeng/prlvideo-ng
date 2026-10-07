
undefined4 FUN_1008e0dc0(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  size_t sVar16;
  long local_a30;
  undefined4 local_a0c;
  undefined1 local_a08 [2512];
  long local_38;
  
  lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar14;
  uVar8 = FUN_100884e10();
  uVar9 = FUN_10087ece0();
  lVar10 = FUN_10087d330(uVar9);
  local_a0c = 3;
  if (lVar10 != 0) {
    lVar11 = FUN_10087db60(lVar10,0x6c,3);
    local_a0c = 3;
    if (0 < lVar11) {
      lVar11 = FUN_1008d1770(lVar10,6);
      local_a0c = 1;
      if (lVar11 != 0) {
        local_a30 = 0;
        if (param_1[2] != 0) {
          plVar12 = (long *)FUN_1008e0bb0(0);
          local_a30 = *plVar12;
        }
        iVar5 = FUN_100885600(*(undefined8 *)(lVar11 + 8));
        if (0 < iVar5) {
          iVar5 = 0;
          local_a0c = 4;
          do {
            puVar13 = (undefined8 *)FUN_100885620(*(undefined8 *)(lVar11 + 8),iVar5);
            if (*(char *)*puVar13 != 'V') {
              if (*(char *)*puVar13 != 'I') goto LAB_1008e1120;
              plVar12 = (long *)FUN_10081ddd0(0x18,"srp_vfy.c",0x19c);
              if (plVar12 != (long *)0x0) {
                lVar14 = FUN_10087d050(puVar13[3]);
                *plVar12 = lVar14;
                if (lVar14 != 0) {
                  lVar14 = FUN_1008e1240(param_1[1],puVar13[1]);
                  plVar12[2] = lVar14;
                  if (lVar14 != 0) {
                    lVar14 = FUN_1008e1240(param_1[1],puVar13[2]);
                    plVar12[1] = lVar14;
                    if ((lVar14 != 0) && (iVar7 = FUN_100884ec0(uVar8,plVar12,0), iVar7 != 0)) {
                      if (param_1[2] != 0) {
                        local_a30 = puVar13[3];
                      }
                      goto LAB_1008e1120;
                    }
                  }
                }
                FUN_10081e1a0(*plVar12);
LAB_1008e11d7:
                FUN_10081e1a0(plVar12);
              }
              goto LAB_1008e11dc;
            }
            lVar14 = FUN_1008e1380(puVar13[4],uVar8);
            if (lVar14 != 0) {
              plVar12 = (long *)FUN_10081ddd0(0x30,"srp_vfy.c",0xc9);
              local_a0c = 4;
              if (plVar12 != (long *)0x0) {
                plVar12[5] = 0;
                plVar12[4] = 0;
                plVar12[3] = 0;
                plVar12[2] = 0;
                plVar12[1] = 0;
                *plVar12 = 0;
                uVar6 = *(undefined4 *)(lVar14 + 0xc);
                uVar3 = *(undefined4 *)(lVar14 + 0x10);
                uVar4 = *(undefined4 *)(lVar14 + 0x14);
                *(undefined4 *)(plVar12 + 3) = *(undefined4 *)(lVar14 + 8);
                *(undefined4 *)((long)plVar12 + 0x1c) = uVar6;
                *(undefined4 *)(plVar12 + 4) = uVar3;
                *(undefined4 *)((long)plVar12 + 0x24) = uVar4;
                lVar14 = puVar13[5];
                if (puVar13[3] == 0) {
LAB_1008e0f86:
                  if (lVar14 != 0) {
                    lVar14 = FUN_10087d050(lVar14);
                    plVar12[5] = lVar14;
                    local_a0c = 4;
                    if (lVar14 == 0) goto LAB_1008e11b1;
                  }
                  pcVar1 = (char *)puVar13[1];
                  pcVar2 = (char *)puVar13[2];
                  sVar16 = _strlen(pcVar2);
                  if ((sVar16 < 0x9c5) && (sVar16 = _strlen(pcVar1), sVar16 < 0x9c5)) {
                    uVar6 = FUN_1008e1d90(local_a08,pcVar1);
                    lVar14 = FUN_10084bc20(local_a08,uVar6,0);
                    plVar12[2] = lVar14;
                    if (lVar14 != 0) {
                      uVar6 = FUN_1008e1d90(local_a08,pcVar2);
                      lVar14 = FUN_10084bc20(local_a08,uVar6,0);
                      plVar12[1] = lVar14;
                      local_a0c = 2;
                      if (lVar14 != 0) {
                        iVar7 = FUN_100884ec0(*param_1,plVar12,0);
                        local_a0c = 2;
                        if (iVar7 != 0) goto LAB_1008e1120;
                      }
                      goto LAB_1008e11b1;
                    }
                  }
                  local_a0c = 2;
                }
                else {
                  lVar15 = FUN_10087d050();
                  *plVar12 = lVar15;
                  local_a0c = 4;
                  if (lVar15 != 0) goto LAB_1008e0f86;
                }
LAB_1008e11b1:
                FUN_10084b4b0(plVar12[1]);
                FUN_10084b440(plVar12[2]);
                FUN_10081e1a0(*plVar12);
                FUN_10081e1a0(plVar12[5]);
                goto LAB_1008e11d7;
              }
              goto LAB_1008e11dc;
            }
LAB_1008e1120:
            iVar5 = iVar5 + 1;
            iVar7 = FUN_100885600(*(undefined8 *)(lVar11 + 8));
          } while (iVar5 < iVar7);
        }
        if (local_a30 == 0) {
          local_a0c = 0;
        }
        else {
          lVar14 = FUN_1008e1380(local_a30,uVar8);
          local_a0c = 2;
          if (lVar14 != 0) {
            uVar6 = *(undefined4 *)(lVar14 + 0xc);
            uVar3 = *(undefined4 *)(lVar14 + 0x10);
            uVar4 = *(undefined4 *)(lVar14 + 0x14);
            *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar14 + 8);
            *(undefined4 *)((long)param_1 + 0x1c) = uVar6;
            *(undefined4 *)(param_1 + 4) = uVar3;
            *(undefined4 *)((long)param_1 + 0x24) = uVar4;
            local_a0c = 0;
          }
        }
LAB_1008e11dc:
        FUN_1008d2000(lVar11);
        lVar14 = *(long *)PTR____stack_chk_guard_100ba2320;
      }
    }
    FUN_10087e280(lVar10);
  }
  FUN_100884dd0(uVar8);
  if (lVar14 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_a0c;
}


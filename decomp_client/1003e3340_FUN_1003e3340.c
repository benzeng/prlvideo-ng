
void FUN_1003e3340(long param_1)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  Data *pDVar13;
  Data *pDVar14;
  bool bVar15;
  long lVar16;
  bool bVar17;
  bool bVar18;
  Data *local_c8;
  Data *local_c0;
  Data *local_b8;
  undefined4 local_b0;
  Data *local_a8;
  Data *local_a0;
  Data *local_98;
  Data *local_90;
  int local_88;
  Data *local_80;
  Data *local_78;
  Data *local_70;
  uint local_68;
  Data *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  uint local_40;
  undefined1 local_31;
  
  FUN_1003e71c0(&local_58,param_1 + 0x28);
  local_50 = local_58 + (long)local_58[2] * 2 + 4;
  local_48 = local_58 + (long)local_58[3] * 2 + 4;
  local_40 = 1;
  if (local_58[2] == local_58[3]) {
    bVar15 = false;
  }
  else {
    bVar15 = false;
    do {
      piVar1 = (int *)**(undefined8 **)local_50;
      lVar16 = (*(undefined8 **)local_50)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_40 != 0) {
        if (((piVar1 != (int *)0x0) && (lVar16 != 0)) && (piVar1[1] != 0)) {
          FUN_1003b0bd0(&local_60);
          lVar9 = 0;
          if (piVar1[1] != 0) {
            lVar9 = lVar16;
          }
          iVar4 = FUN_1003a4d50(lVar9);
          pDVar13 = local_60;
          iVar10 = *(int *)(local_60 + 8);
          iVar6 = *(int *)(local_60 + 0xc);
          if (iVar10 == iVar6) {
            bVar18 = false;
          }
          else {
            pDVar14 = local_60 + (long)iVar10 * 8 + 0x10;
            lVar9 = (long)iVar6 * 8 + (long)iVar10 * -8;
            do {
              bVar18 = true;
              if (**(int **)pDVar14 == iVar4) goto LAB_1003e3477;
              pDVar14 = pDVar14 + 8;
              lVar9 = lVar9 + -8;
            } while (lVar9 != 0);
            bVar18 = false;
          }
LAB_1003e3477:
          if (*(int *)local_60 != -1) {
            if (*(int *)local_60 != 0) {
              LOCK();
              *(int *)local_60 = *(int *)local_60 + -1;
              local_31 = *(int *)local_60 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1003e34e6;
              iVar10 = *(int *)(local_60 + 8);
              iVar6 = *(int *)(local_60 + 0xc);
            }
            if (iVar6 != iVar10) {
              lVar9 = (long)iVar10 * 8 + (long)iVar6 * -8;
              pDVar14 = local_60 + (long)iVar6 * 8 + 8;
              do {
                if (*(void **)pDVar14 != (void *)0x0) {
                  operator_delete(*(void **)pDVar14);
                }
                pDVar14 = pDVar14 + -8;
                lVar9 = lVar9 + 8;
              } while (lVar9 != 0);
            }
            QListData::dispose(pDVar13);
          }
LAB_1003e34e6:
          if (bVar18) {
            lVar9 = 0;
            if (piVar1[1] != 0) {
              lVar9 = lVar16;
            }
            uVar5 = FUN_1003a4d50(lVar9);
            uVar8 = FUN_1003b1cd0(uVar5);
            lVar9 = CVmConfiguration::getVmHardwareList();
            plVar2 = *(long **)(lVar9 + 0xa8 + (ulong)uVar8 * 8);
            local_80 = (Data *)*plVar2;
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 == 0) {
                QListData::detach((int)&local_80);
                lVar12 = (long)*(int *)(local_80 + 8);
                lVar9 = *plVar2;
                if (((Data *)(lVar9 + (long)*(int *)(lVar9 + 8) * 8) != local_80 + lVar12 * 8) &&
                   (lVar11 = *(int *)(local_80 + 0xc) - lVar12,
                   lVar11 != 0 && lVar12 <= *(int *)(local_80 + 0xc))) {
                  _memcpy(local_80 + lVar12 * 8 + 0x10,
                          (void *)(lVar9 + 0x10 + (long)*(int *)(lVar9 + 8) * 8),lVar11 * 8);
                }
              }
              else {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + 1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
              }
            }
            pDVar14 = local_80 + (long)*(int *)(local_80 + 8) * 8 + 0x10;
            local_70 = local_80 + (long)*(int *)(local_80 + 0xc) * 8 + 0x10;
            local_68 = 1;
            bVar18 = false;
            pDVar13 = pDVar14;
            local_78 = pDVar14;
            if (*(int *)(local_80 + 8) != *(int *)(local_80 + 0xc)) {
              do {
                if (local_68 == 0) {
LAB_1003e3627:
                  pDVar13 = local_78 + 8;
                  local_68 = 1;
                }
                else {
                  iVar10 = *(int *)(*(long *)pDVar14 + 0x68);
                  lVar9 = 0;
                  if (piVar1[1] != 0) {
                    lVar9 = lVar16;
                  }
                  iVar6 = FUN_1003a4db0(lVar9);
                  if (iVar10 != iVar6) goto LAB_1003e3627;
                  pDVar13 = local_78 + 8;
                  uVar8 = local_68 ^ 1;
                  bVar18 = true;
                  bVar17 = local_68 == 1;
                  local_68 = uVar8;
                  if (bVar17) break;
                }
                pDVar14 = local_78 + 8;
                local_78 = pDVar13;
              } while (pDVar13 != local_70);
            }
            local_78 = pDVar13;
            if (*(int *)local_80 != -1) {
              if (*(int *)local_80 != 0) {
                LOCK();
                *(int *)local_80 = *(int *)local_80 + -1;
                local_31 = *(int *)local_80 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1003e366f;
              }
              QListData::dispose(local_80);
            }
LAB_1003e366f:
            if (!bVar18) {
              lVar9 = 0;
              if (piVar1[1] != 0) {
                lVar9 = lVar16;
              }
              uVar5 = FUN_1003a4d50(lVar9);
              lVar9 = 0;
              if (piVar1[1] != 0) {
                lVar9 = lVar16;
              }
              uVar7 = FUN_1003a4db0(lVar9);
              cVar3 = FUN_1003e3cb0(param_1,uVar5,uVar7);
              if (cVar3 != '\0') {
                bVar15 = true;
                FUN_1003b55e0(uVar5,param_1 + 0x30,*(undefined8 *)(param_1 + 0x20));
              }
            }
          }
        }
        local_40 = 0;
      }
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      local_50 = local_50 + 2;
      uVar8 = local_40 ^ 1;
      bVar18 = local_40 != 1;
      local_40 = uVar8;
    } while ((bVar18) && (local_50 != local_48));
  }
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      local_31 = *local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e3743;
    }
    FUN_1003e63d0(&local_58,local_58);
  }
LAB_1003e3743:
  FUN_1003b0bd0(&local_a8);
  FUN_1003bd730(&local_a0,&local_a8);
  local_98 = local_a0 + (long)*(int *)(local_a0 + 8) * 8 + 0x10;
  local_90 = local_a0 + (long)*(int *)(local_a0 + 0xc) * 8 + 0x10;
  local_88 = 1;
  if (*(int *)local_a8 == -1) {
LAB_1003e381c:
    if (local_98 != local_90) {
      do {
        uVar5 = **(undefined4 **)local_98;
        uVar8 = FUN_1003b1cd0(uVar5);
        lVar16 = CVmConfiguration::getVmHardwareList();
        plVar2 = *(long **)(lVar16 + 0xa8 + (ulong)uVar8 * 8);
        local_c8 = (Data *)*plVar2;
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 == 0) {
            QListData::detach((int)&local_c8);
            lVar9 = (long)*(int *)(local_c8 + 8);
            lVar16 = *plVar2;
            if (((Data *)(lVar16 + (long)*(int *)(lVar16 + 8) * 8) != local_c8 + lVar9 * 8) &&
               (lVar12 = *(int *)(local_c8 + 0xc) - lVar9,
               lVar12 != 0 && lVar9 <= *(int *)(local_c8 + 0xc))) {
              _memcpy(local_c8 + lVar9 * 8 + 0x10,
                      (void *)(lVar16 + 0x10 + (long)*(int *)(lVar16 + 8) * 8),lVar12 * 8);
            }
          }
          else {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + 1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
          }
        }
        local_c0 = local_c8 + (long)*(int *)(local_c8 + 8) * 8 + 0x10;
        local_b8 = local_c8 + (long)*(int *)(local_c8 + 0xc) * 8 + 0x10;
        if (*(int *)(local_c8 + 8) != *(int *)(local_c8 + 0xc)) {
          do {
            local_b0 = 1;
            if ((*(long *)local_c0 != 0) &&
               (cVar3 = FUN_1003e3d50(param_1,uVar5,*(undefined4 *)(*(long *)local_c0 + 0x68)),
               cVar3 != '\0')) {
              bVar15 = true;
              FUN_1003b55d0(uVar5,param_1 + 0x30,*(undefined8 *)(param_1 + 0x20));
            }
            local_c0 = local_c0 + 8;
          } while (local_c0 != local_b8);
        }
        local_b0 = 1;
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003e3981;
          }
          QListData::dispose(local_c8);
        }
LAB_1003e3981:
        local_98 = local_98 + 8;
        local_88 = 1;
      } while (local_98 != local_90);
    }
  }
  else {
    if (*(int *)local_a8 == 0) {
LAB_1003e37ca:
      iVar10 = *(int *)(local_a8 + 0xc);
      if (iVar10 != *(int *)(local_a8 + 8)) {
        lVar16 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar10 * -8;
        pDVar13 = local_a8 + (long)iVar10 * 8 + 8;
        do {
          if (*(void **)pDVar13 != (void *)0x0) {
            operator_delete(*(void **)pDVar13);
          }
          pDVar13 = pDVar13 + -8;
          lVar16 = lVar16 + 8;
        } while (lVar16 != 0);
      }
      QListData::dispose(local_a8);
    }
    else {
      LOCK();
      *(int *)local_a8 = *(int *)local_a8 + -1;
      local_31 = *(int *)local_a8 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1003e37ca;
    }
    if (local_88 != 0) goto LAB_1003e381c;
  }
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_31 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e3a72;
    }
    iVar10 = *(int *)(local_a0 + 0xc);
    if (iVar10 != *(int *)(local_a0 + 8)) {
      lVar16 = (long)*(int *)(local_a0 + 8) * 8 + (long)iVar10 * -8;
      pDVar13 = local_a0 + (long)iVar10 * 8 + 8;
      do {
        if (*(void **)pDVar13 != (void *)0x0) {
          operator_delete(*(void **)pDVar13);
        }
        pDVar13 = pDVar13 + -8;
        lVar16 = lVar16 + 8;
      } while (lVar16 != 0);
    }
    QListData::dispose(local_a0);
  }
LAB_1003e3a72:
  if (bVar15) {
    FUN_1008378b0(*(undefined8 *)(param_1 + 0x10));
  }
  return;
}


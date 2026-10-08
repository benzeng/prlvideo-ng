
void FUN_1004e74e0(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data *pDVar4;
  QMapNodeBase *pQVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  QMapNodeBase *pQVar12;
  int *piVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  Data *pDVar17;
  int iVar18;
  undefined8 uVar19;
  QArrayData *pQVar20;
  QMapNodeBase *pQVar21;
  long lVar22;
  bool bVar23;
  undefined *local_b8;
  QArrayData *local_b0;
  Data *local_a8;
  undefined4 local_94;
  QArrayData *local_90;
  QArrayData *local_88;
  QString local_80;
  int local_74;
  QString local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  int *local_50;
  uint local_48;
  QMapNodeBase *local_40;
  undefined1 local_31;
  
  FUN_100524be0();
  FUN_100274820(param_1 + 0x40);
  if (((*(long *)(param_1 + 0x10) == 0) || (*(int *)(*(long *)(param_1 + 0x10) + 4) == 0)) ||
     (*(long *)(param_1 + 0x18) == 0)) {
    FUN_100df99c0("","prl_client_app",0,"VmEdData is NULL");
    return;
  }
  local_40 = (QMapNodeBase *)PTR_shared_null_1021e12f0;
  uVar11 = FUN_1003b0ad0();
  FUN_1003e5bc0(&local_68,uVar11);
  FUN_1003e71c0(&local_60,&local_68);
  local_58 = local_60 + (long)local_60[2] * 2 + 4;
  local_50 = local_60 + (long)local_60[3] * 2 + 4;
  local_48 = 1;
  if (*local_68 == -1) {
LAB_1004e7610:
    do {
      if (local_58 == local_50) break;
      piVar1 = (int *)**(undefined8 **)local_58;
      uVar11 = (*(undefined8 **)local_58)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_48 != 0) {
        uVar19 = 0;
        if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
          uVar19 = uVar11;
        }
        uVar7 = FUN_1003a4d50(uVar19);
        FUN_1003b4c00(&local_70,uVar7);
        if (*(int *)(local_70.field0_0x0 + 4) != 0) {
          uVar19 = 0;
          if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
            uVar19 = uVar11;
          }
          uVar7 = FUN_1003a4d50(uVar19);
          cVar6 = FUN_1003b1f00(uVar7);
          if (cVar6 != '\0') {
            uVar19 = 0;
            if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
              uVar19 = uVar11;
            }
            iVar8 = FUN_1003a4d50(uVar19);
            if (1 < *(uint *)local_40) {
              FUN_1004dd730(&local_40);
            }
            pQVar5 = *(QMapNodeBase **)(local_40 + 0x10);
            pQVar12 = (QMapNodeBase *)0x0;
            if (*(QMapNodeBase **)(local_40 + 0x10) == (QMapNodeBase *)0x0) {
LAB_1004e772d:
              pQVar21 = local_40 + 8;
            }
            else {
              do {
                while (pQVar21 = pQVar5, uVar10 = *(uint *)(pQVar21 + 0x18), (int)uVar10 < iVar8) {
                  pQVar5 = *(QMapNodeBase **)(pQVar21 + 0x10);
                  if (*(QMapNodeBase **)(pQVar21 + 0x10) == (QMapNodeBase *)0x0) {
                    if (pQVar12 == (QMapNodeBase *)0x0) goto LAB_1004e772d;
                    uVar10 = *(uint *)(pQVar12 + 0x18);
                    pQVar21 = pQVar12;
                    goto LAB_1004e7729;
                  }
                }
                pQVar5 = *(QMapNodeBase **)(pQVar21 + 8);
                pQVar12 = pQVar21;
              } while (*(QMapNodeBase **)(pQVar21 + 8) != (QMapNodeBase *)0x0);
LAB_1004e7729:
              if (iVar8 < (int)uVar10) goto LAB_1004e772d;
            }
            if (1 < *(uint *)local_40) {
              FUN_1004dd730(&local_40);
            }
            pQVar5 = local_40;
            iVar8 = 1;
            if (pQVar21 != local_40 + 8) {
              uVar19 = 0;
              if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
                uVar19 = uVar11;
              }
              iVar8 = FUN_1003a4d50(uVar19);
              local_74 = 0;
              lVar22 = *(long *)(pQVar5 + 0x10);
              lVar15 = 0;
              if (*(long *)(pQVar5 + 0x10) == 0) {
LAB_1004e77bf:
                lVar14 = 0;
              }
              else {
                do {
                  while (lVar14 = lVar22, iVar18 = *(int *)(lVar14 + 0x18), iVar18 < iVar8) {
                    lVar22 = *(long *)(lVar14 + 0x10);
                    if (*(long *)(lVar14 + 0x10) == 0) {
                      if (lVar15 == 0) goto LAB_1004e77bf;
                      iVar18 = *(int *)(lVar15 + 0x18);
                      lVar14 = lVar15;
                      goto LAB_1004e77bb;
                    }
                  }
                  lVar22 = *(long *)(lVar14 + 8);
                  lVar15 = lVar14;
                } while (*(long *)(lVar14 + 8) != 0);
LAB_1004e77bb:
                if (iVar8 < iVar18) goto LAB_1004e77bf;
              }
              piVar13 = (int *)(lVar14 + 0x1c);
              if (lVar14 == 0) {
                piVar13 = &local_74;
              }
              iVar8 = *piVar13 + 1;
            }
            local_90 = (QArrayData *)QString::fromAscii_helper("%1 %2",5);
            QString::arg(&local_88,&local_90,&local_70,0,0x20);
            QString::arg(&local_80,&local_88,iVar8,0,10,0x20);
            QString::operator=(&local_70,&local_80);
            if (*(int *)local_80.field0_0x0 != -1) {
              if (*(int *)local_80.field0_0x0 != 0) {
                LOCK();
                *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
                local_31 = *(int *)local_80.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e7862;
              }
              QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
            }
LAB_1004e7862:
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e7892;
              }
              QArrayData::deallocate(local_88,2,8);
            }
LAB_1004e7892:
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1004e78c8;
              }
              QArrayData::deallocate(local_90,2,8);
            }
LAB_1004e78c8:
            uVar19 = 0;
            if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
              uVar19 = uVar11;
            }
            local_94 = FUN_1003a4d50(uVar19);
            piVar13 = (int *)FUN_1004dd440(&local_40,&local_94);
            *piVar13 = iVar8;
          }
          uVar19 = 0;
          if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
            uVar19 = uVar11;
          }
          uVar7 = FUN_1003a4d50(uVar19);
          uVar19 = 0;
          if ((piVar1 != (int *)0x0) && (uVar19 = 0, piVar1[1] != 0)) {
            uVar19 = uVar11;
          }
          uVar9 = FUN_1003a4db0(uVar19);
          puVar2 = PTR_shared_null_1021e15e8;
          local_b8 = PTR_shared_null_1021e15e8;
          FUN_1004e72a0(&local_b0,uVar7,uVar9,&local_70,&local_b8);
          puVar3 = PTR_shared_null_1021e15e8;
          if (*(int *)puVar2 != -1) {
            if (*(int *)puVar2 != 0) {
              LOCK();
              *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
              local_31 = *(int *)puVar3 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004e7a01;
            }
            puVar2 = PTR_shared_null_1021e15e8;
            iVar8 = *(int *)(PTR_shared_null_1021e15e8 + 0xc);
            if (iVar8 != *(int *)(PTR_shared_null_1021e15e8 + 8)) {
              lVar22 = (long)*(int *)(PTR_shared_null_1021e15e8 + 8) * 8 + (long)iVar8 * -8;
              puVar16 = (undefined8 *)(PTR_shared_null_1021e15e8 + (long)iVar8 * 8 + 8);
              do {
                pQVar20 = (QArrayData *)*puVar16;
                if (*(int *)pQVar20 == 0) {
LAB_1004e79e0:
                  QArrayData::deallocate(pQVar20,2,8);
                }
                else if (*(int *)pQVar20 != -1) {
                  LOCK();
                  *(int *)pQVar20 = *(int *)pQVar20 + -1;
                  local_31 = *(int *)pQVar20 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar20 = (QArrayData *)*puVar16;
                    goto LAB_1004e79e0;
                  }
                }
                puVar16 = puVar16 + -1;
                lVar22 = lVar22 + 8;
              } while (lVar22 != 0);
            }
            QListData::dispose((Data *)puVar2);
          }
LAB_1004e7a01:
          FUN_1005251e0(param_1 + 0x38,&local_b0);
          FUN_1004e7fe0(param_1,&local_b0);
          pDVar4 = local_a8;
          if (*(int *)local_a8 != -1) {
            if (*(int *)local_a8 != 0) {
              LOCK();
              *(int *)local_a8 = *(int *)local_a8 + -1;
              local_31 = *(int *)local_a8 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004e7ac1;
            }
            iVar8 = *(int *)(local_a8 + 0xc);
            if (iVar8 != *(int *)(local_a8 + 8)) {
              lVar22 = (long)*(int *)(local_a8 + 8) * 8 + (long)iVar8 * -8;
              pDVar17 = local_a8 + (long)iVar8 * 8 + 8;
              do {
                pQVar20 = *(QArrayData **)pDVar17;
                if (*(int *)pQVar20 == 0) {
LAB_1004e7aa0:
                  QArrayData::deallocate(pQVar20,2,8);
                }
                else if (*(int *)pQVar20 != -1) {
                  LOCK();
                  *(int *)pQVar20 = *(int *)pQVar20 + -1;
                  local_31 = *(int *)pQVar20 != 0;
                  UNLOCK();
                  if (!(bool)local_31) {
                    pQVar20 = *(QArrayData **)pDVar17;
                    goto LAB_1004e7aa0;
                  }
                }
                pDVar17 = pDVar17 + -8;
                lVar22 = lVar22 + 8;
              } while (lVar22 != 0);
            }
            QListData::dispose(pDVar4);
          }
LAB_1004e7ac1:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1004e7af7;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_1004e7af7:
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1004e7b27;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_1004e7b27:
        local_48 = 0;
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
      local_58 = local_58 + 2;
      uVar10 = local_48 ^ 1;
      bVar23 = local_48 != 1;
      local_48 = uVar10;
    } while (bVar23);
  }
  else {
    if (*local_68 == 0) {
LAB_1004e75e6:
      FUN_1003e63d0(&local_68,local_68);
    }
    else {
      LOCK();
      *local_68 = *local_68 + -1;
      local_31 = *local_68 != 0;
      UNLOCK();
      if (!(bool)local_31) goto LAB_1004e75e6;
    }
    if (local_48 != 0) goto LAB_1004e7610;
  }
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1004e7b95;
    }
    FUN_1003e63d0(&local_60,local_60);
  }
LAB_1004e7b95:
  pQVar5 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return;
      }
    }
    if (*(long *)(local_40 + 0x10) != 0) {
      QMapDataBase::freeTree(local_40,(int)*(long *)(local_40 + 0x10));
    }
    QMapDataBase::freeData((QMapDataBase *)pQVar5);
  }
  return;
}



void FUN_1000fd580(long param_1,undefined8 *param_2)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  void *pvVar10;
  uint *puVar11;
  ulong uVar12;
  QArrayData *pQVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  uint uVar17;
  QArrayData *pQVar18;
  QArrayData *pQVar19;
  bool bVar20;
  QKeySequence local_b0 [8];
  QArrayData *local_a8;
  QString local_a0;
  QKeySequence local_98 [8];
  QKeySequence local_90 [8];
  int *local_88;
  int *local_80;
  int *local_78;
  uint local_70;
  undefined1 local_68 [8];
  undefined1 local_60 [16];
  undefined1 local_50 [8];
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  uVar8 = FUN_100152280();
  param_1 = param_1 + 0x10;
  lVar9 = FUN_1001548f0(uVar8,param_1);
  if (lVar9 != 0) {
    uVar4 = FUN_10018f860(lVar9);
    FUN_100719ad0(&local_48,param_1,uVar4,0);
    if (DAT_102310998 == (void *)0x0) {
      pvVar10 = operator_new(0x18);
      FUN_1006faf60(pvVar10);
      DAT_102274400 = 1;
      DAT_102310998 = pvVar10;
    }
    FUN_1006fb6d0(local_68,DAT_102310998);
    FUN_100714f80(local_60,local_68,&local_48);
    FUN_1000fe670(local_68);
    puVar11 = (uint *)*param_2;
    if (1 < *puVar11) {
      FUN_1000ff180(param_2);
      puVar11 = (uint *)*param_2;
    }
    if (*(long *)(puVar11 + 4) == 0) {
      puVar14 = puVar11 + 2;
    }
    else {
      puVar14 = *(uint **)(puVar11 + 8);
    }
    if (1 < *puVar11) {
      FUN_1000ff180(param_2);
      puVar11 = (uint *)*param_2;
    }
    if (puVar14 != puVar11 + 2) {
      do {
        lVar9 = *(long *)(puVar14 + 8);
        FUN_1000ff290(&local_88,local_50);
        local_80 = local_88 + (long)local_88[2] * 2 + 4;
        local_78 = local_88 + (long)local_88[3] * 2 + 4;
        local_70 = 1;
        bVar2 = true;
        if (local_88[2] != local_88[3]) {
          bVar2 = true;
          do {
            if (local_70 == 0) {
LAB_1000fdb93:
              local_80 = local_80 + 2;
              local_70 = 1;
            }
            else {
              uVar8 = *(undefined8 *)local_80;
              uVar12 = FUN_100714bb0(uVar8);
              if ((uVar12 & 2) == 0) goto LAB_1000fdb93;
              FUN_1007196e0(local_90,uVar8,param_1);
              FUN_100719970(local_98,uVar8,param_1);
              cVar3 = QKeySequence::isEmpty();
              iVar5 = 2;
              if (cVar3 == '\0') {
                uVar15 = (uint)local_90;
                uVar12 = QKeySequence::operator[](uVar15);
                if ((uVar12 & 0x1ffff00) == 0) {
                  uVar15 = QKeySequence::operator[](uVar15);
                  QString::QString(&local_a0,uVar15);
                  iVar5 = QString::compare((QString *)(lVar9 + 0x18),&local_a0,0);
                  if (iVar5 == 0) {
                    bVar20 = *(uint *)(lVar9 + 0x20) == (uVar15 & 0xfe000000);
                  }
                  else {
                    bVar20 = false;
                  }
                  if (*(int *)local_a0.field0_0x0 != -1) {
                    if (*(int *)local_a0.field0_0x0 != 0) {
                      LOCK();
                      *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
                      local_31 = *(int *)local_a0.field0_0x0 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_1000fd7de;
                    }
                    QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
                  }
LAB_1000fd7de:
                  iVar5 = -8;
                  if (bVar20) {
                    local_a8 = (QArrayData *)PTR_shared_null_1021e1288;
                    uVar15 = QKeySequence::operator[]((uint)local_98);
                    pQVar19 = (QArrayData *)PTR_shared_null_1021e1288;
                    if ((uVar15 & 0x2000000) != 0) {
                      uVar7 = *(uint *)(PTR_shared_null_1021e1288 + 4);
                      uVar6 = uVar7 + 1;
                      uVar17 = *(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff;
                      if ((*(uint *)PTR_shared_null_1021e1288 < 2) && (uVar6 <= uVar17)) {
                        *(undefined4 *)
                         (PTR_shared_null_1021e1288 +
                         (long)(int)uVar7 * 4 + *(long *)(PTR_shared_null_1021e1288 + 0x10)) = 0x32;
                      }
                      else {
                        uVar1 = uVar17;
                        if (uVar17 < uVar6) {
                          uVar1 = uVar6;
                        }
                        FUN_1000e7fd0(&local_a8,uVar7,uVar1,(ulong)(uVar17 < uVar6) << 3);
                        *(undefined4 *)
                         (local_a8 +
                         (long)(int)*(uint *)(local_a8 + 4) * 4 + *(long *)(local_a8 + 0x10)) = 0x32
                        ;
                        uVar7 = *(uint *)(local_a8 + 4);
                        pQVar19 = local_a8;
                      }
                      *(uint *)(pQVar19 + 4) = uVar7 + 1;
                    }
                    if ((uVar15 & 0x10000000) != 0) {
                      uVar7 = *(uint *)(pQVar19 + 4);
                      uVar6 = uVar7 + 1;
                      uVar17 = *(uint *)(pQVar19 + 8) & 0x7fffffff;
                      if ((*(uint *)pQVar19 < 2) && (uVar6 <= uVar17)) {
                        *(undefined4 *)(pQVar19 + (long)(int)uVar7 * 4 + *(long *)(pQVar19 + 0x10))
                             = 0x25;
                      }
                      else {
                        uVar1 = uVar17;
                        if (uVar17 < uVar6) {
                          uVar1 = uVar6;
                        }
                        FUN_1000e7fd0(&local_a8,uVar7,uVar1,(ulong)(uVar17 < uVar6) << 3);
                        *(undefined4 *)
                         (local_a8 +
                         (long)(int)*(uint *)(local_a8 + 4) * 4 + *(long *)(local_a8 + 0x10)) = 0x25
                        ;
                        uVar7 = *(uint *)(local_a8 + 4);
                        pQVar19 = local_a8;
                      }
                      *(uint *)(pQVar19 + 4) = uVar7 + 1;
                    }
                    if ((uVar15 & 0x8000000) != 0) {
                      uVar7 = *(uint *)(pQVar19 + 4);
                      uVar6 = uVar7 + 1;
                      uVar17 = *(uint *)(pQVar19 + 8) & 0x7fffffff;
                      if ((*(uint *)pQVar19 < 2) && (uVar6 <= uVar17)) {
                        *(undefined4 *)(pQVar19 + (long)(int)uVar7 * 4 + *(long *)(pQVar19 + 0x10))
                             = 0x40;
                      }
                      else {
                        uVar1 = uVar17;
                        if (uVar17 < uVar6) {
                          uVar1 = uVar6;
                        }
                        FUN_1000e7fd0(&local_a8,uVar7,uVar1,(ulong)(uVar17 < uVar6) << 3);
                        *(undefined4 *)
                         (local_a8 +
                         (long)(int)*(uint *)(local_a8 + 4) * 4 + *(long *)(local_a8 + 0x10)) = 0x40
                        ;
                        uVar7 = *(uint *)(local_a8 + 4);
                        pQVar19 = local_a8;
                      }
                      *(uint *)(pQVar19 + 4) = uVar7 + 1;
                    }
                    if ((uVar15 & 0x4000000) != 0) {
                      uVar7 = *(uint *)(pQVar19 + 4);
                      uVar6 = uVar7 + 1;
                      uVar17 = *(uint *)(pQVar19 + 8) & 0x7fffffff;
                      if ((*(uint *)pQVar19 < 2) && (uVar6 <= uVar17)) {
                        *(undefined4 *)(pQVar19 + (long)(int)uVar7 * 4 + *(long *)(pQVar19 + 0x10))
                             = 0x73;
                      }
                      else {
                        uVar1 = uVar17;
                        if (uVar17 < uVar6) {
                          uVar1 = uVar6;
                        }
                        FUN_1000e7fd0(&local_a8,uVar7,uVar1,(ulong)(uVar17 < uVar6) << 3);
                        *(undefined4 *)
                         (local_a8 +
                         (long)(int)*(uint *)(local_a8 + 4) * 4 + *(long *)(local_a8 + 0x10)) = 0x73
                        ;
                        uVar7 = *(uint *)(local_a8 + 4);
                        pQVar19 = local_a8;
                      }
                      *(uint *)(pQVar19 + 4) = uVar7 + 1;
                    }
                    QKeySequence::QKeySequence(local_b0,uVar15 & 0x1ffffff,0,0,0);
                    uVar4 = FUN_100722d60(local_b0,0);
                    uVar15 = *(uint *)(pQVar19 + 4);
                    uVar7 = uVar15 + 1;
                    uVar6 = *(uint *)(pQVar19 + 8) & 0x7fffffff;
                    if ((*(uint *)pQVar19 < 2) && (uVar7 <= uVar6)) {
                      *(undefined4 *)(pQVar19 + (long)(int)uVar15 * 4 + *(long *)(pQVar19 + 0x10)) =
                           uVar4;
                    }
                    else {
                      uVar17 = uVar6;
                      if (uVar6 < uVar7) {
                        uVar17 = uVar7;
                      }
                      FUN_1000e7fd0(&local_a8,uVar15,uVar17,(ulong)(uVar6 < uVar7) << 3);
                      *(undefined4 *)
                       (local_a8 +
                       (long)(int)*(uint *)(local_a8 + 4) * 4 + *(long *)(local_a8 + 0x10)) = uVar4;
                      uVar15 = *(uint *)(local_a8 + 4);
                      pQVar19 = local_a8;
                    }
                    *(uint *)(pQVar19 + 4) = uVar15 + 1;
                    QKeySequence::~QKeySequence(local_b0);
                    pQVar13 = *(QArrayData **)(lVar9 + 0x10);
                    iVar5 = 0;
                    bVar20 = false;
                    if ((pQVar19 != pQVar13) &&
                       (bVar20 = bVar2, *(int *)(pQVar19 + 4) == *(int *)(pQVar13 + 4))) {
                      lVar16 = (long)*(int *)(pQVar19 + 4) << 2;
                      if (lVar16 != 0) {
                        pQVar18 = pQVar19 + *(long *)(pQVar19 + 0x10);
                        pQVar13 = pQVar13 + *(long *)(pQVar13 + 0x10);
                        do {
                          if (*(int *)pQVar18 != *(int *)pQVar13) goto LAB_1000fdb20;
                          pQVar18 = pQVar18 + 4;
                          pQVar13 = pQVar13 + 4;
                          lVar16 = lVar16 + -4;
                        } while (lVar16 != 0);
                      }
                      bVar20 = false;
                    }
LAB_1000fdb20:
                    bVar2 = bVar20;
                    if (*(int *)pQVar19 != -1) {
                      if (*(int *)pQVar19 != 0) {
                        LOCK();
                        *(int *)pQVar19 = *(int *)pQVar19 + -1;
                        local_31 = *(int *)pQVar19 != 0;
                        UNLOCK();
                        if ((bool)local_31) goto LAB_1000fdb70;
                      }
                      QArrayData::deallocate(pQVar19,4,8);
                    }
                  }
                }
              }
LAB_1000fdb70:
              QKeySequence::~QKeySequence(local_98);
              QKeySequence::~QKeySequence(local_90);
              if (iVar5 != 0) goto LAB_1000fdb93;
              local_80 = local_80 + 2;
              uVar15 = local_70 ^ 1;
              bVar20 = local_70 == 1;
              local_70 = uVar15;
              if (bVar20) break;
            }
          } while (local_80 != local_78);
        }
        if (*local_88 != -1) {
          if (*local_88 != 0) {
            LOCK();
            *local_88 = *local_88 + -1;
            local_31 = *local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000fdc11;
          }
          FUN_1000feb90(&local_88,local_88);
        }
LAB_1000fdc11:
        if (bVar2) {
          QString::fromUtf8_helper((char *)&local_40,0x1e41978);
          QString::operator=((QString *)(lVar9 + 0x18),&local_40);
          if (*(int *)local_40.field0_0x0 != -1) {
            if (*(int *)local_40.field0_0x0 != 0) {
              LOCK();
              *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
              local_31 = *(int *)local_40.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1000fdc68;
            }
            QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
          }
LAB_1000fdc68:
          *(undefined4 *)(lVar9 + 0x20) = 0;
        }
        puVar14 = (uint *)QMapNodeBase::nextNode();
      } while (puVar14 != puVar11 + 2);
    }
    FUN_1000fec30(local_60);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        UNLOCK();
        if (*(int *)local_48 != 0) {
          return;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  return;
}


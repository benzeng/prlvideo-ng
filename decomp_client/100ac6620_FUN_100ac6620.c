
long * FUN_100ac6620(long *param_1,long *param_2)

{
  int *piVar1;
  double dVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar11;
  uint *puVar10;
  byte bVar12;
  char cVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  Data *pDVar19;
  Data *pDVar20;
  int *piVar21;
  uint uVar22;
  int iVar23;
  char cVar24;
  long lVar25;
  undefined8 uVar26;
  long lVar27;
  undefined1 auVar28 [16];
  QArrayData *local_88;
  undefined8 local_80;
  undefined8 local_78;
  QArrayData *local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  Data *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  FUN_100ad91a0();
  cVar6 = (**(code **)(*param_2 + 0x80))(param_2);
  bVar12 = 1;
  cVar24 = '\x01';
  if (cVar6 == '\0') {
    uVar7 = *(uint *)(param_2 + 0x14a);
    if ((uVar7 & 3) == 0) goto LAB_100ac6f1f;
    bVar12 = (byte)uVar7 & 1;
    cVar24 = (char)((uVar7 & 2) >> 1);
  }
  local_48 = 0;
  local_40 = 0xffffffffffffffff;
  iVar3 = *(int *)(*param_1 + 4);
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  uVar7 = FUN_100ae8080(&local_48,&local_50,0);
  uVar4 = local_40;
  uVar26 = local_48;
  lVar25 = param_2[0x136];
  iVar15 = *(int *)((long)param_2 + 0x9b4);
  iVar23 = local_48._4_4_;
  iVar8 = local_40._4_4_;
  if (1 < *(uint *)local_50) {
    FUN_100ae84c0(&local_50,*(uint *)(local_50 + 4));
  }
  iVar16 = (int)uVar26 - (int)lVar25;
  iVar23 = iVar23 - iVar15;
  iVar17 = (int)uVar4 - (int)lVar25;
  iVar8 = iVar8 - iVar15;
  pDVar19 = local_50 + (long)(int)*(uint *)(local_50 + 8) * 8 + 0x10;
  pDVar20 = local_50;
  while( true ) {
    if (1 < *(uint *)pDVar20) {
      FUN_100ae84c0(&local_50,*(uint *)(pDVar20 + 4));
      pDVar20 = local_50;
    }
    if (pDVar19 == pDVar20 + (long)(int)*(uint *)(pDVar20 + 0xc) * 8 + 0x10) break;
    piVar21 = *(int **)pDVar19;
    iVar15 = *(int *)((long)param_2 + 0x9b4);
    lVar25 = param_2[0x136];
    *piVar21 = *piVar21 - (int)lVar25;
    piVar21[1] = piVar21[1] - iVar15;
    piVar21[2] = piVar21[2] - (int)lVar25;
    piVar21[3] = piVar21[3] - iVar15;
    pDVar19 = pDVar19 + 8;
  }
  if ((cVar24 != '\0') &&
     (((iVar15 = iVar23, iVar14 = iVar8, uVar7 == 3 ||
       (iVar15 = iVar16, iVar14 = iVar17, (uVar7 & 0xfffffffd) == 0)) && ((1 - iVar15) + iVar14 < 2)
      ))) {
    cVar24 = '\0';
  }
  uVar9 = FUN_100ae6090();
  if (uVar9 != 0) {
    iVar15 = (1 - iVar16) + iVar17;
    uVar22 = 0;
    do {
      auVar28 = FUN_100ae60d0(param_2 + 0x132);
      local_60 = auVar28;
      if (cVar24 != '\0') {
        local_68 = CONCAT44((iVar8 + iVar23) / 2,(iVar17 + iVar16) / 2);
        cVar6 = QRect::contains((QPoint *)local_60,SUB81(&local_68,0));
        if (cVar6 != '\0') {
          FUN_100d7bed0(&local_70,&local_48);
          cVar6 = FUN_100ac3e30(param_2,&local_70);
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100ac6930;
            }
            QArrayData::deallocate(local_70,2,8);
          }
LAB_100ac6930:
          cVar13 = '\0';
          if (cVar6 != '\0') {
            cVar13 = cVar24;
          }
          cVar24 = cVar13;
          if (cVar6 == '\0' && 0 < iVar3) {
            puVar10 = (uint *)*param_1;
            lVar25 = 0;
            lVar27 = 0;
            do {
              uVar5 = local_60._0_4_;
              if (1 < *puVar10) {
                if ((puVar10[2] & 0x7fffffff) == 0) {
                  puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                  *param_1 = (long)puVar10;
                }
                else {
                  FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                  puVar10 = (uint *)*param_1;
                }
              }
              if (uVar5 == *(int *)((long)puVar10 + lVar25 + *(long *)(puVar10 + 4))) {
                uVar5 = local_60._4_4_;
                if (1 < *puVar10) {
                  if ((puVar10[2] & 0x7fffffff) == 0) {
                    puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                    *param_1 = (long)puVar10;
                  }
                  else {
                    FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                    puVar10 = (uint *)*param_1;
                  }
                }
                if (uVar5 == *(int *)((long)puVar10 + lVar25 + 4 + *(long *)(puVar10 + 4))) {
                  if (uVar7 == 3) {
                    if (1 < *puVar10) {
                      if ((puVar10[2] & 0x7fffffff) == 0) {
                        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                        *param_1 = (long)puVar10;
                      }
                      else {
                        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                        puVar10 = (uint *)*param_1;
                      }
                    }
                    *(int *)((long)puVar10 + lVar25 + *(long *)(puVar10 + 4) + 0x14) =
                         (1 - iVar23) + iVar8;
                  }
                  else if (uVar7 == 2) {
                    if (1 < *puVar10) {
                      if ((puVar10[2] & 0x7fffffff) == 0) {
                        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                        *param_1 = (long)puVar10;
                      }
                      else {
                        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                        puVar10 = (uint *)*param_1;
                      }
                    }
                    *(int *)((long)puVar10 + lVar25 + *(long *)(puVar10 + 4) + 0x10) = iVar15;
                  }
                  else if (uVar7 == 0) {
                    if (1 < *puVar10) {
                      if ((puVar10[2] & 0x7fffffff) == 0) {
                        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                        *param_1 = (long)puVar10;
                      }
                      else {
                        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                        puVar10 = (uint *)*param_1;
                      }
                    }
                    *(int *)((long)puVar10 + lVar25 + 8 + *(long *)(puVar10 + 4)) = iVar15;
                  }
                }
              }
              lVar27 = lVar27 + 1;
              lVar25 = lVar25 + 0x18;
            } while (lVar27 < iVar3);
            cVar24 = '\0';
          }
        }
      }
      if (bVar12 != 0) {
        uVar26 = 0xffffffffffffffff;
        if (*(uint *)(local_50 + 8) != *(uint *)(local_50 + 0xc)) {
          pDVar19 = local_50 + (long)(int)*(uint *)(local_50 + 8) * 8 + 0x10;
          pDVar20 = local_50;
          do {
            piVar21 = *(int **)pDVar19;
            if ((piVar21[2] != *piVar21 + -1) || (piVar21[3] != piVar21[1] + -1)) {
              cVar6 = QRect::contains((QRect *)local_60,SUB81(piVar21,0));
              pDVar20 = local_50;
              if (cVar6 != '\0') {
                uVar4 = **(undefined8 **)pDVar19;
                uVar26 = (*(undefined8 **)pDVar19)[1];
                iVar14 = (int)uVar4;
                iVar11 = (int)((ulong)uVar4 >> 0x20);
                goto LAB_100ac6c60;
              }
            }
            pDVar19 = pDVar19 + 8;
          } while (pDVar19 != pDVar20 + (long)(int)*(uint *)(pDVar20 + 0xc) * 8 + 0x10);
        }
        iVar11 = 0;
        iVar14 = 0;
LAB_100ac6c60:
        if (iVar14 <= (int)uVar26) {
          iVar18 = (int)((ulong)uVar26 >> 0x20);
          if (iVar11 <= iVar18) {
            local_80 = CONCAT44(iVar11 + *(int *)((long)param_2 + 0x9b4),
                                iVar14 + (int)param_2[0x136]);
            local_78 = CONCAT44(iVar18 + *(int *)((long)param_2 + 0x9b4),
                                (int)uVar26 + (int)param_2[0x136]);
            FUN_100d7bed0(&local_88,&local_80);
            cVar6 = FUN_100ac3e30(param_2,&local_88);
            if (*(int *)local_88 != -1) {
              if (*(int *)local_88 != 0) {
                LOCK();
                *(int *)local_88 = *(int *)local_88 + -1;
                local_31 = *(int *)local_88 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100ac6cfe;
              }
              QArrayData::deallocate(local_88,2,8);
            }
LAB_100ac6cfe:
            if (cVar6 == '\0' && 0 < iVar3) {
              puVar10 = (uint *)*param_1;
              lVar25 = 0;
              lVar27 = 0;
              do {
                uVar5 = local_60._0_4_;
                if (1 < *puVar10) {
                  if ((puVar10[2] & 0x7fffffff) == 0) {
                    puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                    *param_1 = (long)puVar10;
                  }
                  else {
                    FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                    puVar10 = (uint *)*param_1;
                  }
                }
                if (uVar5 == *(int *)((long)puVar10 + lVar25 + *(long *)(puVar10 + 4))) {
                  uVar5 = local_60._4_4_;
                  if (1 < *puVar10) {
                    if ((puVar10[2] & 0x7fffffff) == 0) {
                      puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                      *param_1 = (long)puVar10;
                    }
                    else {
                      FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                      puVar10 = (uint *)*param_1;
                    }
                  }
                  if (uVar5 == *(int *)((long)puVar10 + lVar25 + 4 + *(long *)(puVar10 + 4))) {
                    if (1 < *puVar10) {
                      if ((puVar10[2] & 0x7fffffff) == 0) {
                        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
                        *param_1 = (long)puVar10;
                      }
                      else {
                        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
                        puVar10 = (uint *)*param_1;
                      }
                    }
                    *(int *)((long)puVar10 + lVar25 + 0xc + *(long *)(puVar10 + 4)) =
                         iVar18 - iVar11;
                  }
                }
                lVar27 = lVar27 + 1;
                lVar25 = lVar25 + 0x18;
              } while (lVar27 < iVar3);
            }
          }
        }
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar9);
  }
  pDVar19 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100ac6f1f;
    }
    iVar3 = *(int *)(local_50 + 0xc);
    if (iVar3 != *(int *)(local_50 + 8)) {
      lVar25 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar3 * -8;
      pDVar20 = local_50 + (long)iVar3 * 8 + 8;
      do {
        if (*(void **)pDVar20 != (void *)0x0) {
          operator_delete(*(void **)pDVar20);
        }
        pDVar20 = pDVar20 + -8;
        lVar25 = lVar25 + 8;
      } while (lVar25 != 0);
    }
    QListData::dispose(pDVar19);
  }
LAB_100ac6f1f:
  if (DAT_100e11050 < (double)param_2[0x158]) {
    puVar10 = (uint *)*param_1;
    if (1 < *puVar10) {
      if ((puVar10[2] & 0x7fffffff) == 0) {
        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
        *param_1 = (long)puVar10;
      }
      else {
        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
        puVar10 = (uint *)*param_1;
      }
    }
    piVar21 = (int *)((long)puVar10 + *(long *)(puVar10 + 4));
    if (1 < *puVar10) {
      if ((puVar10[2] & 0x7fffffff) == 0) {
        puVar10 = (uint *)QArrayData::allocate(0x18,8,0,2);
        *param_1 = (long)puVar10;
      }
      else {
        FUN_10033d5b0(param_1,puVar10[1],puVar10[2] & 0x7fffffff,0);
        puVar10 = (uint *)*param_1;
      }
    }
    piVar1 = (int *)((long)puVar10 + (long)(int)puVar10[1] * 0x18 + *(long *)(puVar10 + 4));
    if (piVar21 != piVar1) {
      dVar2 = (double)param_2[0x158];
      do {
        *piVar21 = (int)((double)*piVar21 * dVar2);
        piVar21[1] = (int)((double)piVar21[1] * dVar2);
        piVar21[2] = (int)(long)((double)(uint)piVar21[2] * dVar2);
        piVar21[3] = (int)(long)((double)(uint)piVar21[3] * dVar2);
        piVar21[4] = (int)(long)((double)(uint)piVar21[4] * dVar2);
        piVar21[5] = (int)(long)((double)(uint)piVar21[5] * dVar2);
        piVar21 = piVar21 + 6;
      } while (piVar21 != piVar1);
    }
  }
  return param_1;
}


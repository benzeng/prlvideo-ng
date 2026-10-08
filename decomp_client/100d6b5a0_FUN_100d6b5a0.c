
int FUN_100d6b5a0(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  QArrayData *pQVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  Data *pDVar16;
  QArrayData *pQVar17;
  int local_9c;
  undefined4 local_90;
  undefined1 local_8c [4];
  QArrayData *local_88;
  QArrayData *local_80;
  undefined4 local_74;
  QArrayData *local_70;
  undefined4 local_64;
  QArrayData *local_60;
  Data *local_58;
  undefined4 local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar17 = (QArrayData *)PTR_shared_null_1021e1288;
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 == (long *)0x0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.09:");
    return 0x8158003;
  }
  if (*(int *)(*param_3 + 4) == 0) {
    FUN_100df99c0("","WinRegistry",0,"OA00005.10:");
    return 0x815800f;
  }
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar7 = (**(code **)(*plVar1 + 0x10))(plVar1,param_2,&local_4c,0xffffffff);
  if (iVar7 == 0x8000000) {
    iVar8 = QString::compare(param_2,param_3,0);
    uVar10 = local_4c;
    iVar7 = 0x815800e;
    if (iVar8 != 0) {
      iVar8 = *(int *)(pQVar17 + 4);
      uVar9 = iVar8 + 1;
      uVar13 = *(uint *)(pQVar17 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar17 < 2) && (uVar9 <= uVar13)) {
        *(undefined4 *)(pQVar17 + (long)iVar8 * 4 + *(long *)(pQVar17 + 0x10)) = local_4c;
      }
      else {
        uVar14 = uVar13;
        if (uVar13 < uVar9) {
          uVar14 = uVar9;
        }
        FUN_1000bf180(&local_40,(long)iVar8,uVar14,(ulong)(uVar13 < uVar9) << 3);
        *(undefined4 *)
         (local_40 + (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10)) = uVar10;
        pQVar17 = local_40;
      }
      *(uint *)(pQVar17 + 4) = *(uint *)(pQVar17 + 4) + 1;
      uVar9 = *(uint *)(pQVar17 + 4);
      uVar13 = uVar9 + 1;
      uVar14 = *(uint *)(pQVar17 + 8) & 0x7fffffff;
      if ((*(uint *)pQVar17 < 2) && (uVar13 <= uVar14)) {
        *(undefined4 *)(pQVar17 + (long)(int)uVar9 * 4 + *(long *)(pQVar17 + 0x10)) = 0;
      }
      else {
        uVar3 = uVar14;
        if (uVar14 < uVar13) {
          uVar3 = uVar13;
        }
        FUN_1000bf180(&local_40,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
        *(undefined4 *)
         (local_40 + (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10)) = 0;
        pQVar17 = local_40;
      }
      *(uint *)(pQVar17 + 4) = *(uint *)(pQVar17 + 4) + 1;
      iVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                        (*(long **)(param_1 + 0x10),param_3,&local_4c,0xffffffff);
      if (iVar8 != 0x8000000) {
        local_60 = (QArrayData *)QString::fromAscii_helper("\\",1);
        QString::split(&local_58,param_3,&local_60,0,1);
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6b7bb;
          }
          QArrayData::deallocate(local_60,2,8);
        }
LAB_100d6b7bb:
        local_64 = 0;
        uVar12 = (ulong)*(uint *)(local_58 + 8);
        lVar15 = 0;
        if ((int)*(uint *)(local_58 + 8) < *(int *)(local_58 + 0xc)) {
          uVar10 = 0xffffffff;
          do {
            iVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                              (*(long **)(param_1 + 0x10),
                               local_58 + ((int)uVar12 + lVar15) * 8 + 0x10,&local_64,uVar10);
            if ((iVar7 != 0x8000000) &&
               ((iVar7 != 0x815800d ||
                (iVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                                   (*(long **)(param_1 + 0x10),
                                    local_58 + (*(int *)(local_58 + 8) + lVar15) * 8 + 0x10,
                                    &local_64,uVar10), iVar7 != 0x8000000)))) goto LAB_100d6bf07;
            lVar15 = lVar15 + 1;
            uVar12 = (ulong)*(int *)(local_58 + 8);
            uVar10 = local_64;
          } while (lVar15 < (long)((long)*(int *)(local_58 + 0xc) - uVar12));
LAB_100d6b890:
          pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
          iVar7 = *(int *)(PTR_shared_null_1021e1288 + 4);
          uVar9 = iVar7 + 1;
          uVar13 = *(uint *)(PTR_shared_null_1021e1288 + 8) & 0x7fffffff;
          if ((*(uint *)PTR_shared_null_1021e1288 < 2) && (uVar9 <= uVar13)) {
            *(undefined4 *)
             (PTR_shared_null_1021e1288 +
             (long)iVar7 * 4 + *(long *)(PTR_shared_null_1021e1288 + 0x10)) = uVar10;
          }
          else {
            uVar14 = uVar13;
            if (uVar13 < uVar9) {
              uVar14 = uVar9;
            }
            FUN_1000bf180(&local_48,(long)iVar7,uVar14,(ulong)(uVar13 < uVar9) << 3);
            *(undefined4 *)
             (local_48 + (long)(int)*(uint *)(local_48 + 4) * 4 + *(long *)(local_48 + 0x10)) =
                 uVar10;
            pQVar11 = local_48;
          }
          *(uint *)(pQVar11 + 4) = *(uint *)(pQVar11 + 4) + 1;
          local_70 = (QArrayData *)QString::fromAscii_helper("",0);
          if (*(uint *)(pQVar17 + 4) != 0) {
            local_9c = (int)local_70;
            do {
              while( true ) {
                iVar8 = FUN_100d6c5f0(&local_40);
                uVar10 = FUN_100d6c5f0(&local_40);
                iVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x30))
                                  (*(long **)(param_1 + 0x10),uVar10,iVar8,&local_70,0);
                if (iVar7 == 0x8158017) break;
                if ((iVar7 != 0x8000000) ||
                   (iVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x10))
                                      (*(long **)(param_1 + 0x10),&local_70,&local_4c,uVar10),
                   iVar7 != 0x8000000)) goto LAB_100d6bed7;
                uVar9 = *(uint *)(local_40 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_40 + 8) & 0x7fffffff;
                if ((*(uint *)local_40 < 2) && (uVar13 <= uVar14)) {
                  *(undefined4 *)(local_40 + (long)(int)uVar9 * 4 + *(long *)(local_40 + 0x10)) =
                       uVar10;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_40,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(undefined4 *)
                   (local_40 + (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10))
                       = uVar10;
                }
                *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
                uVar9 = *(uint *)(local_40 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_40 + 8) & 0x7fffffff;
                if ((*(uint *)local_40 < 2) && (uVar13 <= uVar14)) {
                  *(int *)(local_40 + (long)(int)uVar9 * 4 + *(long *)(local_40 + 0x10)) = iVar8 + 1
                  ;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_40,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(int *)(local_40 +
                          (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10)) =
                       iVar8 + 1;
                }
                uVar10 = local_4c;
                *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
                uVar9 = *(uint *)(local_40 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_40 + 8) & 0x7fffffff;
                if ((*(uint *)local_40 < 2) && (uVar13 <= uVar14)) {
                  *(undefined4 *)(local_40 + (long)(int)uVar9 * 4 + *(long *)(local_40 + 0x10)) =
                       local_4c;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_40,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(undefined4 *)
                   (local_40 + (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10))
                       = uVar10;
                }
                *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
                uVar9 = *(uint *)(local_40 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_40 + 8) & 0x7fffffff;
                if ((*(uint *)local_40 < 2) && (uVar13 <= uVar14)) {
                  *(undefined4 *)(local_40 + (long)(int)uVar9 * 4 + *(long *)(local_40 + 0x10)) = 0;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_40,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(undefined4 *)
                   (local_40 + (long)(int)*(uint *)(local_40 + 4) * 4 + *(long *)(local_40 + 0x10))
                       = 0;
                }
                pQVar17 = local_40;
                *(uint *)(local_40 + 4) = *(uint *)(local_40 + 4) + 1;
                uVar10 = FUN_100d6c5f0(&local_48);
                iVar7 = (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
                                  (*(long **)(param_1 + 0x10),&local_70,&local_4c,uVar10);
                if (iVar7 != 0x8000000) goto LAB_100d6bed7;
                uVar9 = *(uint *)(local_48 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_48 + 8) & 0x7fffffff;
                if ((*(uint *)local_48 < 2) && (uVar13 <= uVar14)) {
                  *(undefined4 *)(local_48 + (long)(int)uVar9 * 4 + *(long *)(local_48 + 0x10)) =
                       uVar10;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_48,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(undefined4 *)
                   (local_48 + (long)(int)*(uint *)(local_48 + 4) * 4 + *(long *)(local_48 + 0x10))
                       = uVar10;
                }
                uVar10 = local_4c;
                *(uint *)(local_48 + 4) = *(uint *)(local_48 + 4) + 1;
                uVar9 = *(uint *)(local_48 + 4);
                uVar13 = uVar9 + 1;
                uVar14 = *(uint *)(local_48 + 8) & 0x7fffffff;
                if ((*(uint *)local_48 < 2) && (uVar13 <= uVar14)) {
                  *(undefined4 *)(local_48 + (long)(int)uVar9 * 4 + *(long *)(local_48 + 0x10)) =
                       local_4c;
                }
                else {
                  uVar3 = uVar14;
                  if (uVar14 < uVar13) {
                    uVar3 = uVar13;
                  }
                  FUN_1000bf180(&local_48,(long)(int)uVar9,uVar3,(ulong)(uVar14 < uVar13) << 3);
                  *(undefined4 *)
                   (local_48 + (long)(int)*(uint *)(local_48 + 4) * 4 + *(long *)(local_48 + 0x10))
                       = uVar10;
                }
                *(uint *)(local_48 + 4) = *(uint *)(local_48 + 4) + 1;
                if (*(uint *)(pQVar17 + 4) == 0) goto LAB_100d6beb8;
              }
              local_74 = 0;
              local_80 = (QArrayData *)QString::fromAscii_helper("",0);
              local_88 = (QArrayData *)PTR_shared_null_1021e1288;
              local_4c = FUN_100d6c5f0(&local_48);
              iVar7 = 0;
              do {
                local_74 = 0;
                iVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x58))
                                  (*(long **)(param_1 + 0x10),uVar10,iVar7,&local_80,&local_74,0,0);
                if (iVar8 != 0x8000000) {
                  bVar4 = false;
                  iVar8 = local_9c;
                  break;
                }
                QByteArray::resize((int)&local_88);
                uVar5 = local_74;
                plVar1 = *(long **)(param_1 + 0x10);
                pcVar2 = *(code **)(*plVar1 + 0x48);
                if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
                }
                iVar8 = (*pcVar2)(plVar1,uVar10,&local_80,uVar5,
                                  local_88 + *(long *)(local_88 + 0x10),1,&local_90,0);
                bVar4 = true;
                if ((iVar8 != 0x8000000) && (iVar8 != 0x8158016)) break;
                QByteArray::resize((int)&local_88);
                uVar5 = local_74;
                plVar1 = *(long **)(param_1 + 0x10);
                pcVar2 = *(code **)(*plVar1 + 0x48);
                if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
                }
                (*pcVar2)(plVar1,uVar10,&local_80,uVar5,local_88 + *(long *)(local_88 + 0x10),
                          local_90,local_8c,0);
                iVar8 = (**(code **)(**(long **)(param_1 + 0x10) + 0x38))
                                  (*(long **)(param_1 + 0x10),local_4c,&local_80,local_74);
                uVar6 = local_4c;
                uVar5 = local_74;
                if (iVar8 != 0x8000000) break;
                plVar1 = *(long **)(param_1 + 0x10);
                pcVar2 = *(code **)(*plVar1 + 0x50);
                if ((1 < *(uint *)local_88) || (*(long *)(local_88 + 0x10) != 0x18)) {
                  QByteArray::reallocData
                            (&local_88,*(uint *)(local_88 + 4) + 1,*(uint *)(local_88 + 8) >> 0x1f);
                }
                iVar8 = (*pcVar2)(plVar1,uVar6,&local_80,uVar5);
                iVar7 = iVar7 + 1;
              } while (iVar8 == 0x8000000);
              local_9c = iVar8;
              if (*(int *)local_88 != -1) {
                if (*(int *)local_88 != 0) {
                  LOCK();
                  *(int *)local_88 = *(int *)local_88 + -1;
                  local_31 = *(int *)local_88 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d6be6a;
                }
                QArrayData::deallocate(local_88,1,8);
              }
LAB_100d6be6a:
              if (*(int *)local_80 != -1) {
                if (*(int *)local_80 != 0) {
                  LOCK();
                  *(int *)local_80 = *(int *)local_80 + -1;
                  local_31 = *(int *)local_80 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100d6be9a;
                }
                QArrayData::deallocate(local_80,2,8);
              }
LAB_100d6be9a:
              iVar7 = local_9c;
              if (bVar4) goto LAB_100d6bed7;
            } while (*(uint *)(local_40 + 4) != 0);
          }
LAB_100d6beb8:
          (**(code **)(**(long **)(param_1 + 8) + 0x38))(*(long **)(param_1 + 8),1);
          iVar7 = 0x8000000;
LAB_100d6bed7:
          if (*(int *)local_70 != -1) {
            if (*(int *)local_70 != 0) {
              LOCK();
              *(int *)local_70 = *(int *)local_70 + -1;
              local_31 = *(int *)local_70 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d6bf07;
            }
            QArrayData::deallocate(local_70,2,8);
          }
        }
        else {
          uVar10 = 0xffffffff;
          iVar7 = iVar8;
          if (iVar8 == 0x8000000) goto LAB_100d6b890;
        }
LAB_100d6bf07:
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d6bf90;
          }
          iVar8 = *(int *)(local_58 + 0xc);
          if (iVar8 != *(int *)(local_58 + 8)) {
            lVar15 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar8 * -8;
            pDVar16 = local_58 + (long)iVar8 * 8 + 8;
            do {
              pQVar17 = *(QArrayData **)pDVar16;
              if (*(int *)pQVar17 == 0) {
LAB_100d6bf6f:
                QArrayData::deallocate(pQVar17,2,8);
              }
              else if (*(int *)pQVar17 != -1) {
                LOCK();
                *(int *)pQVar17 = *(int *)pQVar17 + -1;
                local_31 = *(int *)pQVar17 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar17 = *(QArrayData **)pDVar16;
                  goto LAB_100d6bf6f;
                }
              }
              pDVar16 = pDVar16 + -8;
              lVar15 = lVar15 + 8;
            } while (lVar15 != 0);
          }
          QListData::dispose(local_58);
        }
      }
    }
  }
LAB_100d6bf90:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d6bfbc;
    }
    QArrayData::deallocate(local_48,4,8);
  }
LAB_100d6bfbc:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) {
        return iVar7;
      }
    }
    QArrayData::deallocate(local_40,4,8);
  }
  return iVar7;
}


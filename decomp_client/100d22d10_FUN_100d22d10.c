
undefined8 * FUN_100d22d10(undefined8 *param_1,QString *param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  Data *pDVar5;
  byte bVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  QArrayData *pQVar13;
  Data *pDVar14;
  long *local_68;
  long *local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  Data *local_48;
  long *local_40;
  undefined1 local_31;
  
  *param_1 = PTR_shared_null_1021e15e8;
  QFileInfo::QFileInfo(local_58,param_2);
  QFileInfo::absoluteFilePath();
  QFileInfo::~QFileInfo(local_58);
  if ((*param_3 != 0) && (plVar7 = *(long **)(*param_3 + 0x10), plVar7 != (long *)0x0)) {
    plVar7 = (long *)(**(code **)(*plVar7 + 0x18))();
    lVar2 = *plVar7;
    if (*(long *)(lVar2 + 0x10) != 0) {
      lVar11 = *(long *)(lVar2 + 0x20);
      while (lVar11 != lVar2 + 8) {
        plVar7 = (long *)*param_3;
        if (plVar7 != (long *)0x0) {
          LOCK();
          *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
          UNLOCK();
        }
        local_68 = plVar7;
        plVar8 = (long *)FUN_100d21950(lVar11 + 0x20,&local_68);
        plVar9 = operator_new(0x18,(nothrow_t *)PTR_nothrow_1021e1620);
        if (plVar9 == (long *)0x0) {
          plVar9 = (long *)0x0;
          if (plVar8 != (long *)0x0) {
            (**(code **)(*plVar8 + 8))(plVar8);
            plVar9 = (long *)0x0;
          }
        }
        else {
          *(undefined4 *)(plVar9 + 1) = 1;
          plVar9[2] = (long)plVar8;
          *plVar9 = (long)&PTR_FUN_10230f598;
        }
        local_60 = plVar9;
        if (plVar7 != (long *)0x0) {
          LOCK();
          plVar8 = plVar7 + 1;
          lVar11 = *plVar8;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
        if (plVar9 != (long *)0x0) {
          if (((long *)plVar9[2] != (long *)0x0) &&
             ((**(code **)(*(long *)plVar9[2] + 0x40))(&local_40), local_40 != (long *)0x0)) {
            plVar7 = (long *)local_40[2];
            if (plVar7 == (long *)0x0) {
              bVar3 = false;
LAB_100d22fe8:
              LOCK();
              plVar7 = local_40 + 1;
              lVar11 = *plVar7;
              *(int *)plVar7 = (int)*plVar7 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)(*local_40 + 0x10))();
              }
            }
            else {
              uVar10 = (**(code **)(*plVar7 + 0x10))(plVar7);
              pDVar14 = (Data *)PTR_shared_null_1021e15e8;
              while ((uVar10 & 1) != 0) {
                plVar7 = (long *)0x0;
                if (local_40 != (long *)0x0) {
                  plVar7 = (long *)local_40[2];
                }
                lVar11 = (**(code **)(*plVar7 + 0x20))();
                if ((lVar11 != 0) && (plVar7 = *(long **)(lVar11 + 0x10), plVar7 != (long *)0x0)) {
                  local_48 = pDVar14;
                  (**(code **)(*plVar7 + 0x18))(plVar7,&local_48);
                  bVar6 = 4;
                  if (*(int *)(local_48 + 0xc) != *(int *)(local_48 + 8)) {
                    bVar6 = QtPrivate::QStringList_contains(&local_48,&local_50,1);
                  }
                  pDVar5 = local_48;
                  if (*(int *)local_48 != -1) {
                    if (*(int *)local_48 != 0) {
                      LOCK();
                      *(int *)local_48 = *(int *)local_48 + -1;
                      local_31 = *(int *)local_48 != 0;
                      UNLOCK();
                      if ((bool)local_31) goto LAB_100d22faf;
                    }
                    iVar1 = *(int *)(local_48 + 0xc);
                    if (iVar1 != *(int *)(local_48 + 8)) {
                      lVar11 = (long)*(int *)(local_48 + 8) * 8 + (long)iVar1 * -8;
                      pDVar14 = local_48 + (long)iVar1 * 8 + 8;
                      do {
                        pQVar13 = *(QArrayData **)pDVar14;
                        if (*(int *)pQVar13 == 0) {
LAB_100d22f80:
                          QArrayData::deallocate(pQVar13,2,8);
                        }
                        else if (*(int *)pQVar13 != -1) {
                          LOCK();
                          *(int *)pQVar13 = *(int *)pQVar13 + -1;
                          local_31 = *(int *)pQVar13 != 0;
                          UNLOCK();
                          if (!(bool)local_31) {
                            pQVar13 = *(QArrayData **)pDVar14;
                            goto LAB_100d22f80;
                          }
                        }
                        pDVar14 = pDVar14 + -8;
                        lVar11 = lVar11 + 8;
                      } while (lVar11 != 0);
                    }
                    pDVar14 = (Data *)PTR_shared_null_1021e15e8;
                    QListData::dispose(pDVar5);
                  }
LAB_100d22faf:
                  bVar3 = true;
                  if ((bVar6 | 4) != 4) goto LAB_100d22fdf;
                }
                plVar7 = (long *)0x0;
                if (local_40 != (long *)0x0) {
                  plVar7 = (long *)local_40[2];
                }
                uVar10 = (**(code **)(*plVar7 + 0x18))();
              }
              bVar3 = false;
LAB_100d22fdf:
              if (local_40 != (long *)0x0) goto LAB_100d22fe8;
            }
            if (bVar3) {
              FUN_100d23400(param_1,&local_60);
            }
            if (plVar9 == (long *)0x0) goto LAB_100d2303c;
          }
          LOCK();
          plVar7 = plVar9 + 1;
          lVar11 = *plVar7;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
LAB_100d2303c:
        lVar11 = QMapNodeBase::nextNode();
      }
    }
    puVar4 = PTR_shared_null_1021e15e8;
    if (*(int *)PTR_shared_null_1021e15e8 != -1) {
      if (*(int *)PTR_shared_null_1021e15e8 != 0) {
        LOCK();
        *(int *)PTR_shared_null_1021e15e8 = *(int *)PTR_shared_null_1021e15e8 + -1;
        local_31 = *(int *)puVar4 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d230f5;
      }
      lVar2 = *(long *)(puVar4 + 8);
      if ((int)((ulong)lVar2 >> 0x20) != (int)lVar2) {
        lVar11 = (long)(int)lVar2 * 8 + (lVar2 >> 0x20) * -8;
        puVar12 = (undefined8 *)(puVar4 + (lVar2 >> 0x20) * 8 + 8);
        do {
          pQVar13 = (QArrayData *)*puVar12;
          if (*(int *)pQVar13 == 0) {
LAB_100d230d0:
            QArrayData::deallocate(pQVar13,2,8);
          }
          else if (*(int *)pQVar13 != -1) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if (!(bool)local_31) {
              pQVar13 = (QArrayData *)*puVar12;
              goto LAB_100d230d0;
            }
          }
          puVar12 = puVar12 + -1;
          lVar11 = lVar11 + 8;
        } while (lVar11 != 0);
      }
      QListData::dispose((Data *)PTR_shared_null_1021e15e8);
    }
  }
LAB_100d230f5:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      UNLOCK();
      if (*(int *)local_50 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
  return param_1;
}


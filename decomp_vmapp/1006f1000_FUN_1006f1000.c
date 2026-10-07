
bool FUN_1006f1000(QString *param_1,long param_2)

{
  int *piVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  long lVar5;
  Data *pDVar6;
  Data *pDVar7;
  int iVar8;
  QArrayData *pQVar9;
  int iVar10;
  bool bVar11;
  QString local_b0;
  QDir local_a8 [8];
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  Data *local_58;
  Data *local_50;
  QArrayData *local_48;
  QDir local_40 [15];
  undefined1 local_31;
  
  if (param_2 == 0) {
    return false;
  }
  QDir::QDir(local_40,param_1);
  QDir::absolutePath();
  puVar2 = PTR_shared_null_100ba2188;
  local_50 = (Data *)PTR_shared_null_100ba2188;
  FUN_1006fca20(&local_50,&local_48);
  while (iVar10 = *(int *)(local_48 + 4), iVar8 = iVar10, iVar10 != 0) {
    do {
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) goto LAB_1006f10cc;
    } while ((iVar8 < iVar10) &&
            (*(short *)(local_48 + (long)iVar8 * 2 + *(long *)(local_48 + 0x10)) == 0x2f));
    while ((iVar10 <= iVar8 ||
           (*(short *)(local_48 + (long)iVar8 * 2 + *(long *)(local_48 + 0x10)) != 0x2f))) {
      iVar8 = iVar8 + -1;
      if (iVar8 == 0) goto LAB_1006f10cc;
    }
    QString::remove((int)&local_48,iVar8);
    FUN_1006fca20(&local_50,&local_48);
  }
LAB_1006f10cc:
  local_58 = (Data *)puVar2;
  local_78 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_78);
      iVar10 = *(int *)(local_78 + 8);
      if (iVar10 != *(int *)(local_78 + 0xc)) {
        pDVar6 = local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10;
        pDVar7 = local_78 + (long)iVar10 * 8 + 0x10;
        lVar5 = (long)*(int *)(local_78 + 0xc) * 8 + (long)iVar10 * -8;
        do {
          piVar1 = *(int **)pDVar6;
          *(int **)pDVar7 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          pDVar7 = pDVar7 + 8;
          pDVar6 = pDVar6 + 8;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  if (*(int *)(local_78 + 8) != *(int *)(local_78 + 0xc)) {
    do {
      local_80 = *(QArrayData **)local_70;
      if (1 < *(int *)local_80 + 1U) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + 1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
      }
      iVar10 = 7;
      if (local_60 != 0) {
        if (1 < *(int *)local_80 + 1U) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + 1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
        }
        local_88 = local_80;
        cVar3 = FUN_1006f00c0(&local_88,param_2);
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_31 = *(int *)local_88 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f1210;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1006f1210:
        if (cVar3 == '\0') {
          uVar4 = FUN_1006eec80(param_2,&local_80);
          if ((uVar4 & 0x40) != 0) {
            local_90 = local_80;
            if (1 < *(int *)local_80 + 1U) {
              LOCK();
              *(int *)local_80 = *(int *)local_80 + 1;
              local_31 = *(int *)local_80 != 0;
              UNLOCK();
            }
            cVar3 = FUN_1006f1b00(&local_90,param_2);
            if (*(int *)local_90 != -1) {
              if (*(int *)local_90 != 0) {
                LOCK();
                *(int *)local_90 = *(int *)local_90 + -1;
                local_31 = *(int *)local_90 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f1294;
              }
              QArrayData::deallocate(local_90,2,8);
            }
LAB_1006f1294:
            if (cVar3 != '\0') {
              FUN_10000c490(&local_58,&local_80);
              goto LAB_1006f12b0;
            }
          }
          if ((uVar4 & 0x10020) == 0) {
            QString::toUtf8();
            FUN_1008e3970("","cmn_utils",0,"CreateDirectoryPath() return error for path=\'%s\'",
                          local_a0 + *(long *)(local_a0 + 0x10));
            if (*(int *)local_a0 != -1) {
              if (*(int *)local_a0 != 0) {
                LOCK();
                *(int *)local_a0 = *(int *)local_a0 + -1;
                local_31 = *(int *)local_a0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f13d2;
              }
              QArrayData::deallocate(local_a0,1,8);
            }
          }
          else {
            QString::toUtf8();
            FUN_1008e3970("","cmn_utils",0,
                          "Unable to create directory by invalid mask =%d(err: perm=%d, other=%d ), path=\'%s\'"
                          ,uVar4,uVar4 & 0x20,uVar4 & 0x10000,local_98 + *(long *)(local_98 + 0x10))
            ;
            if (*(int *)local_98 != -1) {
              if (*(int *)local_98 != 0) {
                LOCK();
                *(int *)local_98 = *(int *)local_98 + -1;
                local_31 = *(int *)local_98 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f13d2;
              }
              QArrayData::deallocate(local_98,1,8);
            }
          }
LAB_1006f13d2:
          local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
          QDir::QDir(local_a8,&local_b0);
          if (*(int *)local_b0.field0_0x0 != -1) {
            if (*(int *)local_b0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
              local_31 = *(int *)local_b0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_1006f1425;
            }
            QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
          }
LAB_1006f1425:
          for (lVar5 = (long)(int)(*(uint *)(local_58 + 0xc) - *(uint *)(local_58 + 8)); 0 < lVar5;
              lVar5 = lVar5 + -1) {
            if (1 < *(uint *)local_58) {
              FUN_100022c80(&local_58,*(uint *)(local_58 + 4));
            }
            QDir::rmdir((QString *)local_a8);
          }
          iVar10 = 1;
          QDir::~QDir(local_a8);
        }
        else {
LAB_1006f12b0:
          local_60 = 0;
        }
      }
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_31 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f14d0;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1006f14d0:
      if (iVar10 != 7) goto LAB_1006f1502;
      local_70 = local_70 + 8;
      uVar4 = local_60 ^ 1;
      bVar11 = local_60 != 1;
      local_60 = uVar4;
    } while ((bVar11) && (local_70 != local_68));
  }
  iVar10 = 4;
LAB_1006f1502:
  pDVar6 = local_78;
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f1591;
    }
    iVar8 = *(int *)(local_78 + 0xc);
    if (iVar8 != *(int *)(local_78 + 8)) {
      lVar5 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar8 * -8;
      pDVar7 = local_78 + (long)iVar8 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1006f1570:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1006f1570;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1006f1591:
  pDVar6 = local_58;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f1621;
    }
    iVar8 = *(int *)(local_58 + 0xc);
    if (iVar8 != *(int *)(local_58 + 8)) {
      lVar5 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar8 * -8;
      pDVar7 = local_58 + (long)iVar8 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1006f1600:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1006f1600;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1006f1621:
  pDVar6 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f16b1;
    }
    iVar8 = *(int *)(local_50 + 0xc);
    if (iVar8 != *(int *)(local_50 + 8)) {
      lVar5 = (long)*(int *)(local_50 + 8) * 8 + (long)iVar8 * -8;
      pDVar7 = local_50 + (long)iVar8 * 8 + 8;
      do {
        pQVar9 = *(QArrayData **)pDVar7;
        if (*(int *)pQVar9 == 0) {
LAB_1006f1690:
          QArrayData::deallocate(pQVar9,2,8);
        }
        else if (*(int *)pQVar9 != -1) {
          LOCK();
          *(int *)pQVar9 = *(int *)pQVar9 + -1;
          local_31 = *(int *)pQVar9 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar9 = *(QArrayData **)pDVar7;
            goto LAB_1006f1690;
          }
        }
        pDVar7 = pDVar7 + -8;
        lVar5 = lVar5 + 8;
      } while (lVar5 != 0);
    }
    QListData::dispose(pDVar6);
  }
LAB_1006f16b1:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f16e1;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1006f16e1:
  QDir::~QDir(local_40);
  return iVar10 == 4;
}


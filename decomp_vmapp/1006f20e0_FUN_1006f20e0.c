
undefined8 * FUN_1006f20e0(undefined8 *param_1,QString *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  QArrayData *pQVar7;
  long lVar8;
  Data *pDVar9;
  Data *pDVar10;
  bool bVar11;
  QArrayData *local_1f0;
  QArrayData *local_1e8;
  int local_1e0;
  Data *local_148;
  Data *local_140;
  Data *local_138;
  uint local_130;
  QArrayData *local_128;
  QArrayData *local_120;
  QArrayData *local_118;
  QArrayData *local_110;
  QArrayData *local_108;
  QArrayData *local_100;
  QString local_f8;
  Data *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  int local_d8;
  QFileInfo local_48 [8];
  QFileInfo local_40 [15];
  undefined1 local_31;
  
  QFileInfo::QFileInfo(local_40,param_2);
  cVar1 = QFileInfo::isRelative();
  QFileInfo::~QFileInfo(local_40);
  if (cVar1 != '\0') {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "QFileInfo(sFilePath).isAbsolute()","CFileHelper.cpp",0x22b,"GetMountPoint");
  }
  QFileInfo::QFileInfo(local_48,param_2);
  cVar1 = QFileInfo::isRelative();
  QFileInfo::~QFileInfo(local_48);
  if (cVar1 != '\0') goto LAB_1006f227c;
  QString::toUtf8();
  iVar2 = _stat_INODE64(local_e0 + *(long *)(local_e0 + 0x10));
  if (*(int *)local_e0 != -1) {
    if (*(int *)local_e0 != 0) {
      LOCK();
      *(int *)local_e0 = *(int *)local_e0 + -1;
      local_31 = *(int *)local_e0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f21e8;
    }
    QArrayData::deallocate(local_e0,1,8);
  }
LAB_1006f21e8:
  if (iVar2 == 0) {
    local_f0 = (Data *)PTR_shared_null_100ba2188;
    QFileInfo::QFileInfo((QFileInfo *)&local_f8,param_2);
    cVar1 = QFileInfo::isDir();
    if (cVar1 == '\0') {
      QFileInfo::absolutePath();
      QFileInfo::setFile(&local_f8);
      if (*(int *)local_100 != -1) {
        if (*(int *)local_100 != 0) {
          LOCK();
          *(int *)local_100 = *(int *)local_100 + -1;
          local_31 = *(int *)local_100 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f2340;
        }
        QArrayData::deallocate(local_100,2,8);
      }
    }
LAB_1006f2340:
    do {
      cVar1 = QFileInfo::isRoot();
      if (cVar1 != '\0') goto LAB_1006f254e;
      QFileInfo::fileName();
      iVar2 = *(int *)(local_108 + 4);
      if (*(int *)local_108 != -1) {
        if (*(int *)local_108 != 0) {
          LOCK();
          *(int *)local_108 = *(int *)local_108 + -1;
          local_31 = *(int *)local_108 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f23a0;
        }
        QArrayData::deallocate(local_108,2,8);
      }
LAB_1006f23a0:
      if (iVar2 == 0) goto LAB_1006f254e;
      QFileInfo::canonicalFilePath();
      iVar2 = *(int *)(local_110 + 4);
      if (*(int *)local_110 != -1) {
        if (*(int *)local_110 != 0) {
          LOCK();
          *(int *)local_110 = *(int *)local_110 + -1;
          local_31 = *(int *)local_110 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f23f4;
        }
        QArrayData::deallocate(local_110,2,8);
      }
LAB_1006f23f4:
      if (iVar2 != 0) {
        QFileInfo::canonicalFilePath();
        FUN_1006fca20(&local_f0,&local_118);
        if (*(int *)local_118 != -1) {
          if (*(int *)local_118 != 0) {
            LOCK();
            *(int *)local_118 = *(int *)local_118 + -1;
            local_31 = *(int *)local_118 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f2454;
          }
          QArrayData::deallocate(local_118,2,8);
        }
      }
LAB_1006f2454:
      QFileInfo::canonicalPath();
      QFileInfo::setFile(&local_f8);
      if (*(int *)local_120 != -1) {
        if (*(int *)local_120 != 0) {
          LOCK();
          *(int *)local_120 = *(int *)local_120 + -1;
          local_31 = *(int *)local_120 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f2340;
        }
        QArrayData::deallocate(local_120,2,8);
      }
    } while( true );
  }
  if (0 < DAT_1011b55f8) {
    QString::toUtf8();
    pQVar7 = local_e8;
    lVar8 = *(long *)(local_e8 + 0x10);
    piVar5 = ___error();
    FUN_1008e3970("","cmn_utils",1,"stat() for %s failed by error %d",pQVar7 + lVar8,*piVar5);
    if (*(int *)local_e8 != -1) {
      if (*(int *)local_e8 != 0) {
        LOCK();
        *(int *)local_e8 = *(int *)local_e8 + -1;
        local_31 = *(int *)local_e8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006f227c;
      }
      QArrayData::deallocate(local_e8,1,8);
    }
  }
LAB_1006f227c:
  uVar6 = QString::fromAscii_helper("",0);
  *param_1 = uVar6;
  return param_1;
LAB_1006f254e:
  pQVar7 = (QArrayData *)QString::fromAscii_helper("/",1);
  local_128 = pQVar7;
  FUN_1006fca20(&local_f0,&local_128);
  if (*(int *)pQVar7 != -1) {
    if (*(int *)pQVar7 != 0) {
      LOCK();
      *(int *)pQVar7 = *(int *)pQVar7 + -1;
      local_31 = *(int *)pQVar7 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f25a7;
    }
    QArrayData::deallocate(pQVar7,2,8);
  }
LAB_1006f25a7:
  local_148 = local_f0;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 == 0) {
      QListData::detach((int)&local_148);
      iVar2 = *(int *)(local_148 + 8);
      if (iVar2 != *(int *)(local_148 + 0xc)) {
        pDVar9 = local_f0 + (long)*(int *)(local_f0 + 8) * 8 + 0x10;
        pDVar10 = local_148 + (long)iVar2 * 8 + 0x10;
        lVar8 = (long)*(int *)(local_148 + 0xc) * 8 + (long)iVar2 * -8;
        do {
          piVar5 = *(int **)pDVar9;
          *(int **)pDVar10 = piVar5;
          if (1 < *piVar5 + 1U) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            local_31 = *piVar5 != 0;
            UNLOCK();
          }
          pDVar10 = pDVar10 + 8;
          pDVar9 = pDVar9 + 8;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
    else {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + 1;
      local_31 = *(int *)local_f0 != 0;
      UNLOCK();
    }
  }
  local_140 = local_148 + (long)*(int *)(local_148 + 8) * 8 + 0x10;
  local_138 = local_148 + (long)*(int *)(local_148 + 0xc) * 8 + 0x10;
  local_130 = 1;
  if (*(int *)(local_148 + 8) != *(int *)(local_148 + 0xc)) {
    do {
      pQVar7 = *(QArrayData **)local_140;
      if (1 < *(int *)pQVar7 + 1U) {
        LOCK();
        *(int *)pQVar7 = *(int *)pQVar7 + 1;
        local_31 = *(int *)pQVar7 != 0;
        UNLOCK();
      }
      iVar2 = 0x10;
      if (local_130 != 0) {
        QString::toUtf8();
        iVar3 = _stat_INODE64(local_1e8 + *(long *)(local_1e8 + 0x10));
        if (*(int *)local_1e8 != -1) {
          if (*(int *)local_1e8 != 0) {
            LOCK();
            *(int *)local_1e8 = *(int *)local_1e8 + -1;
            local_31 = *(int *)local_1e8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1006f279e;
          }
          QArrayData::deallocate(local_1e8,1,8);
        }
LAB_1006f279e:
        if (iVar3 == 0) {
          if (local_1e0 == local_d8) {
            *param_1 = pQVar7;
            if (1 < *(int *)pQVar7 + 1U) {
              LOCK();
              *(int *)pQVar7 = *(int *)pQVar7 + 1;
              local_31 = *(int *)pQVar7 != 0;
              UNLOCK();
            }
            iVar2 = 1;
          }
          else {
            local_130 = 0;
          }
        }
        else {
          if (0 < DAT_1011b55f8) {
            QString::toUtf8();
            lVar8 = *(long *)(local_1f0 + 0x10);
            piVar5 = ___error();
            FUN_1008e3970("","cmn_utils",1,"stat() for %s failed by error %d",local_1f0 + lVar8,
                          *piVar5);
            if (*(int *)local_1f0 != -1) {
              if (*(int *)local_1f0 != 0) {
                LOCK();
                *(int *)local_1f0 = *(int *)local_1f0 + -1;
                local_31 = *(int *)local_1f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_1006f2831;
              }
              QArrayData::deallocate(local_1f0,1,8);
            }
          }
LAB_1006f2831:
          uVar6 = QString::fromAscii_helper("",0);
          *param_1 = uVar6;
          iVar2 = 1;
        }
      }
      if (*(int *)pQVar7 != -1) {
        if (*(int *)pQVar7 != 0) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1006f28b8;
        }
        QArrayData::deallocate(pQVar7,2,8);
      }
LAB_1006f28b8:
      if (iVar2 != 0x10) goto LAB_1006f28f9;
      local_140 = local_140 + 8;
      uVar4 = local_130 ^ 1;
      bVar11 = local_130 != 1;
      local_130 = uVar4;
    } while ((bVar11) && (local_140 != local_138));
  }
  iVar2 = 0xd;
LAB_1006f28f9:
  pDVar9 = local_148;
  if (*(int *)local_148 != -1) {
    if (*(int *)local_148 != 0) {
      LOCK();
      *(int *)local_148 = *(int *)local_148 + -1;
      local_31 = *(int *)local_148 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006f2983;
    }
    iVar3 = *(int *)(local_148 + 0xc);
    if (iVar3 != *(int *)(local_148 + 8)) {
      lVar8 = (long)*(int *)(local_148 + 8) * 8 + (long)iVar3 * -8;
      pDVar10 = local_148 + (long)iVar3 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar7 == 0) {
LAB_1006f2962:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar10;
            goto LAB_1006f2962;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar9);
  }
LAB_1006f2983:
  if (iVar2 == 0xd) {
    FUN_1008e3970("","cmn_utils",0,"ASSERT( %s ) occured in %s:%d [%s]","0","CFileHelper.cpp",0x255,
                  "GetMountPoint");
    uVar6 = QString::fromAscii_helper("",0);
    *param_1 = uVar6;
  }
  QFileInfo::~QFileInfo((QFileInfo *)&local_f8);
  pDVar9 = local_f0;
  if (*(int *)local_f0 != -1) {
    if (*(int *)local_f0 != 0) {
      LOCK();
      *(int *)local_f0 = *(int *)local_f0 + -1;
      UNLOCK();
      if (*(int *)local_f0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    iVar2 = *(int *)(local_f0 + 0xc);
    if (iVar2 != *(int *)(local_f0 + 8)) {
      lVar8 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar2 * -8;
      pDVar10 = local_f0 + (long)iVar2 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar10;
        if (*(int *)pQVar7 == 0) {
LAB_1006f2a5a:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar10;
            goto LAB_1006f2a5a;
          }
        }
        pDVar10 = pDVar10 + -8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0);
    }
    QListData::dispose(pDVar9);
  }
  return param_1;
}


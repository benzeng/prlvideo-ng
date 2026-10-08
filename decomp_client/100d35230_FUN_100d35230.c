
void FUN_100d35230(undefined8 *param_1,QString *param_2,QString *param_3)

{
  QArrayData *pQVar1;
  long lVar2;
  QArrayData *pQVar3;
  long lVar4;
  QArrayData *pQVar5;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  QArrayData *local_b8;
  QArrayData *local_a8;
  QArrayData *local_98;
  QString local_90;
  QString local_88;
  QArrayData *local_80;
  QString local_78;
  QFileInfo local_70 [8];
  QString local_68;
  QDir local_60 [8];
  QString local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_100d35d10(&local_58,param_1);
  QString::fromUtf8_helper((char *)&local_50,0x1e41978);
  QString::operator=(param_2,&local_50);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d352a7;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_100d352a7:
  QString::fromUtf8_helper((char *)&local_48,0x1e41978);
  QString::operator=(param_3,&local_48);
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d352f5;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100d352f5:
  do {
    QDir::QDir(local_60,&local_58);
    cVar6 = QDir::exists();
    iVar12 = 3;
    if (cVar6 == '\0') {
      uVar8 = QDir::separator();
      iVar9 = QString::lastIndexOf(&local_58,uVar8,0xffffffff,1);
      uVar11 = (uint)&local_58;
      if (iVar9 < 0) {
        uVar7 = QDir::separator();
        uVar10 = *(uint *)(local_58.field0_0x0 + 4);
        if ((1 < *(uint *)local_58.field0_0x0) ||
           ((*(uint *)(local_58.field0_0x0 + 8) & 0x7fffffff) < uVar10 + 2)) {
          QString::reallocData(uVar11,SUB41(uVar10 + 2,0));
          uVar10 = *(uint *)(local_58.field0_0x0 + 4);
        }
        *(uint *)(local_58.field0_0x0 + 4) = uVar10 + 1;
        *(undefined2 *)
         (local_58.field0_0x0 + (long)(int)uVar10 * 2 + *(long *)(local_58.field0_0x0 + 0x10)) =
             uVar7;
        *(undefined2 *)
         (local_58.field0_0x0 +
         (long)(int)*(uint *)(local_58.field0_0x0 + 4) * 2 + *(long *)(local_58.field0_0x0 + 0x10))
             = 0;
        QFileInfo::QFileInfo(local_70,&local_58);
        cVar6 = QFileInfo::isRoot();
        if (cVar6 == '\0') {
          local_78.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
          QString::operator=(&local_58,&local_78);
          if (*(int *)local_78.field0_0x0 != -1) {
            if (*(int *)local_78.field0_0x0 != 0) {
              LOCK();
              *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
              local_31 = *(int *)local_78.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100d354da;
            }
            QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
          }
        }
LAB_100d354da:
        QFileInfo::~QFileInfo(local_70);
      }
      else {
        QString::left((int)&local_68);
        QString::operator=(&local_58,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_31 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100d353ac;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_100d353ac:
        iVar12 = 0;
        if (*(uint *)(local_58.field0_0x0 + 4) == 0) {
          uVar7 = QDir::separator();
          uVar10 = *(uint *)(local_58.field0_0x0 + 4);
          if ((1 < *(uint *)local_58.field0_0x0) ||
             ((*(uint *)(local_58.field0_0x0 + 8) & 0x7fffffff) < uVar10 + 2)) {
            QString::reallocData(uVar11,SUB41(uVar10 + 2,0));
            uVar10 = *(uint *)(local_58.field0_0x0 + 4);
          }
          *(uint *)(local_58.field0_0x0 + 4) = uVar10 + 1;
          *(undefined2 *)
           (local_58.field0_0x0 + (long)(int)uVar10 * 2 + *(long *)(local_58.field0_0x0 + 0x10)) =
               uVar7;
          *(undefined2 *)
           (local_58.field0_0x0 +
           (long)(int)*(uint *)(local_58.field0_0x0 + 4) * 2 + *(long *)(local_58.field0_0x0 + 0x10)
           ) = 0;
          iVar12 = 0;
        }
      }
    }
    QDir::~QDir(local_60);
  } while (iVar12 == 0);
  QString::operator=(param_2,&local_58);
  FUN_100d35d10(&local_80,param_1);
  if (*(int *)(local_80 + 4) == *(int *)(param_2->field0_0x0 + 4) ||
      *(int *)(local_80 + 4) < *(int *)(param_2->field0_0x0 + 4)) {
    QString::fromUtf8_helper((char *)&local_40,0x1e41978);
    QString::operator=(param_3,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d35679;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
  }
  else {
    QString::right((int)&local_88);
    QString::operator=(param_3,&local_88);
    if (*(int *)local_88.field0_0x0 != -1) {
      if (*(int *)local_88.field0_0x0 != 0) {
        LOCK();
        *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
        local_31 = *(int *)local_88.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3558a;
      }
      QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
    }
LAB_100d3558a:
    uVar8 = QDir::separator();
    cVar6 = QString::endsWith(param_3,uVar8,1);
    if (cVar6 != '\0') {
      QString::chop((int)param_3);
    }
    uVar8 = QDir::separator();
    cVar6 = QString::startsWith(param_3,uVar8,1);
    if (cVar6 != '\0') {
      QString::mid((int)&local_90,(int)param_3);
      QString::operator=(param_3,&local_90);
      if (*(int *)local_90.field0_0x0 != -1) {
        if (*(int *)local_90.field0_0x0 != 0) {
          LOCK();
          *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
          local_31 = *(int *)local_90.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100d35679;
        }
        QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
      }
    }
  }
LAB_100d35679:
  if (2 < DAT_10230ffd0) {
    pQVar1 = (QArrayData *)*param_1;
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      local_31 = *(int *)pQVar1 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar2 = *(long *)(local_98 + 0x10);
    pQVar3 = (QArrayData *)param_2->field0_0x0;
    if (1 < *(int *)pQVar3 + 1U) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + 1;
      local_31 = *(int *)pQVar3 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    lVar4 = *(long *)(local_a8 + 0x10);
    pQVar5 = (QArrayData *)param_3->field0_0x0;
    if (1 < *(int *)pQVar5 + 1U) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + 1;
      local_31 = *(int *)pQVar5 != 0;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_100df99c0("","VIUtils",3,
                  "Founded:\nsFullPath = \'%s\'\nsExistingPath = \'%s\'\nsCreatingPanth = %s\n",
                  local_98 + lVar2,local_a8 + lVar4,local_b8 + *(long *)(local_b8 + 0x10));
    if (*(int *)local_b8 != -1) {
      if (*(int *)local_b8 != 0) {
        LOCK();
        *(int *)local_b8 = *(int *)local_b8 + -1;
        local_31 = *(int *)local_b8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d35795;
      }
      QArrayData::deallocate(local_b8,1,8);
    }
LAB_100d35795:
    if (*(int *)pQVar5 != -1) {
      if (*(int *)pQVar5 != 0) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + -1;
        local_31 = *(int *)pQVar5 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d357cb;
      }
      QArrayData::deallocate(pQVar5,2,8);
    }
LAB_100d357cb:
    if (*(int *)local_a8 != -1) {
      if (*(int *)local_a8 != 0) {
        LOCK();
        *(int *)local_a8 = *(int *)local_a8 + -1;
        local_31 = *(int *)local_a8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d35801;
      }
      QArrayData::deallocate(local_a8,1,8);
    }
LAB_100d35801:
    if (*(int *)pQVar3 != -1) {
      if (*(int *)pQVar3 != 0) {
        LOCK();
        *(int *)pQVar3 = *(int *)pQVar3 + -1;
        local_31 = *(int *)pQVar3 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d35837;
      }
      QArrayData::deallocate(pQVar3,2,8);
    }
LAB_100d35837:
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        local_31 = *(int *)local_98 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d3586d;
      }
      QArrayData::deallocate(local_98,1,8);
    }
LAB_100d3586d:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        local_31 = *(int *)pQVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100d358a3;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
LAB_100d358a3:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100d358d3;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100d358d3:
  if (*(int *)local_58.field0_0x0 != -1) {
    if (*(int *)local_58.field0_0x0 != 0) {
      LOCK();
      *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_58.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
  }
  return;
}


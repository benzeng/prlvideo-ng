
void FUN_100063450(undefined8 param_1,char param_2,char param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  QString *pQVar4;
  undefined8 uVar5;
  long lVar6;
  QObject *pQVar7;
  QEvent *pQVar8;
  Data *pDVar9;
  QArrayData *pQVar10;
  uint uVar11;
  QArrayData *local_100;
  QArrayData *local_f8;
  Data *local_f0;
  QArrayData *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QString local_c0;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QArrayData *local_a0;
  QFileInfo local_98 [8];
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QString local_78;
  QArrayData *local_70;
  QUrl local_68 [8];
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QString local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"Open \'%s\' document...",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063502;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_100063502:
  QDir::fromNativeSeparators(&local_48);
  QString::toUtf8();
  QByteArray::QByteArray((QByteArray *)&local_50,(char *)(local_58 + *(long *)(local_58 + 0x10)),-1)
  ;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063563;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100063563:
  QUrl::fromEncoded(local_68,&local_50,0);
  QUrl::toString(&local_60,local_68,0);
  QString::operator=(&local_48,&local_60);
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1000635be;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1000635be:
  QUrl::~QUrl(local_68);
LAB_1000635e0:
  do {
    local_70 = (QArrayData *)QString::fromAscii_helper("/",1);
    cVar1 = QString::endsWith(&local_48,&local_70,1);
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100063634;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_100063634:
    if (cVar1 == '\0') break;
    QString::left((int)&local_78);
    QString::operator=(&local_48,&local_78);
    if (*(int *)local_78.field0_0x0 != -1) {
      if (*(int *)local_78.field0_0x0 != 0) {
        LOCK();
        *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
        local_31 = *(int *)local_78.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000635e0;
      }
      QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
    }
  } while( true );
  local_80 = (QArrayData *)QString::fromAscii_helper("file://",7);
  cVar1 = QString::startsWith(&local_48,&local_80,1);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063732;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_100063732:
  if (cVar1 != '\0') {
    local_88 = (QArrayData *)QString::fromAscii_helper("file://",7);
    local_90 = (QArrayData *)QString::fromAscii_helper("",0);
    pQVar4 = (QString *)QString::replace(&local_48,&local_88,&local_90,1);
    QString::operator=(&local_48,pQVar4);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_31 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000637bf;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1000637bf:
    if (*(int *)local_88 != -1) {
      if (*(int *)local_88 != 0) {
        LOCK();
        *(int *)local_88 = *(int *)local_88 + -1;
        local_31 = *(int *)local_88 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1000637ef;
      }
      QArrayData::deallocate(local_88,2,8);
    }
  }
LAB_1000637ef:
  if (*(int *)(local_48.field0_0x0 + 4) != 0) {
    QFileInfo::QFileInfo(local_98,&local_48);
    cVar1 = QFileInfo::exists();
    QFileInfo::~QFileInfo(local_98);
    if (cVar1 != '\0') {
      local_a0 = (QArrayData *)QString::fromAscii_helper(".pvs",4);
      cVar1 = QString::endsWith(&local_48,&local_a0,0);
      cVar2 = '\x01';
      if (cVar1 == '\0') {
        local_a8 = (QArrayData *)QString::fromAscii_helper(".pvsz",5);
        cVar1 = QString::endsWith(&local_48,&local_a8,0);
        cVar2 = '\x01';
        if (cVar1 == '\0') {
          local_b0 = (QArrayData *)QString::fromAscii_helper(".pvm",4);
          cVar1 = QString::endsWith(&local_48,&local_b0,0);
          cVar2 = '\x01';
          if (cVar1 == '\0') {
            local_b8 = (QArrayData *)QString::fromAscii_helper(".pvmz",5);
            cVar1 = QString::endsWith(&local_48,&local_b8,0);
            cVar2 = '\x01';
            if (cVar1 == '\0') {
              cVar2 = FUN_1007507b0(&local_48);
            }
            if (*(int *)local_b8 != -1) {
              if (*(int *)local_b8 != 0) {
                LOCK();
                *(int *)local_b8 = *(int *)local_b8 + -1;
                local_31 = *(int *)local_b8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100063938;
              }
              QArrayData::deallocate(local_b8,2,8);
            }
          }
LAB_100063938:
          if (*(int *)local_b0 != -1) {
            if (*(int *)local_b0 != 0) {
              LOCK();
              *(int *)local_b0 = *(int *)local_b0 + -1;
              local_31 = *(int *)local_b0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_10006396e;
            }
            QArrayData::deallocate(local_b0,2,8);
          }
        }
LAB_10006396e:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_31 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1000639a4;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
LAB_1000639a4:
      if (*(int *)local_a0 != -1) {
        if (*(int *)local_a0 != 0) {
          LOCK();
          *(int *)local_a0 = *(int *)local_a0 + -1;
          local_31 = *(int *)local_a0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1000639da;
        }
        QArrayData::deallocate(local_a0,2,8);
      }
LAB_1000639da:
      if (cVar2 == '\0') {
        local_c8 = (QArrayData *)QString::fromAscii_helper(".iso",4);
        cVar1 = QString::endsWith(&local_48,&local_c8,0);
        cVar2 = '\x01';
        if (cVar1 == '\0') {
          local_d0 = (QArrayData *)QString::fromAscii_helper(".dmg",4);
          cVar1 = QString::endsWith(&local_48,&local_d0,0);
          cVar2 = '\x01';
          if (cVar1 == '\0') {
            local_d8 = (QArrayData *)QString::fromAscii_helper(".cdr",4);
            cVar1 = QString::endsWith(&local_48,&local_d8,0);
            cVar2 = '\x01';
            if (cVar1 == '\0') {
              local_e0 = (QArrayData *)QString::fromAscii_helper(".img",4);
              cVar1 = QString::endsWith(&local_48,&local_e0,0);
              cVar2 = '\x01';
              if (cVar1 == '\0') {
                local_e8 = (QArrayData *)QString::fromAscii_helper(".app",4);
                cVar2 = QString::endsWith(&local_48,&local_e8,0);
                if (*(int *)local_e8 != -1) {
                  if (*(int *)local_e8 != 0) {
                    LOCK();
                    *(int *)local_e8 = *(int *)local_e8 + -1;
                    local_31 = *(int *)local_e8 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100063bbc;
                  }
                  QArrayData::deallocate(local_e8,2,8);
                }
              }
LAB_100063bbc:
              if (*(int *)local_e0 != -1) {
                if (*(int *)local_e0 != 0) {
                  LOCK();
                  *(int *)local_e0 = *(int *)local_e0 + -1;
                  local_31 = *(int *)local_e0 != 0;
                  UNLOCK();
                  if ((bool)local_31) goto LAB_100063bf2;
                }
                QArrayData::deallocate(local_e0,2,8);
              }
            }
LAB_100063bf2:
            if (*(int *)local_d8 != -1) {
              if (*(int *)local_d8 != 0) {
                LOCK();
                *(int *)local_d8 = *(int *)local_d8 + -1;
                local_31 = *(int *)local_d8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100063c28;
              }
              QArrayData::deallocate(local_d8,2,8);
            }
          }
LAB_100063c28:
          if (*(int *)local_d0 != -1) {
            if (*(int *)local_d0 != 0) {
              LOCK();
              *(int *)local_d0 = *(int *)local_d0 + -1;
              local_31 = *(int *)local_d0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100063c5e;
            }
            QArrayData::deallocate(local_d0,2,8);
          }
        }
LAB_100063c5e:
        if (*(int *)local_c8 != -1) {
          if (*(int *)local_c8 != 0) {
            LOCK();
            *(int *)local_c8 = *(int *)local_c8 + -1;
            local_31 = *(int *)local_c8 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100063c94;
          }
          QArrayData::deallocate(local_c8,2,8);
        }
LAB_100063c94:
        uVar11 = 0x2715;
        if (cVar2 == '\0') {
          uVar5 = FUN_100152280();
          lVar6 = FUN_1001554a0(uVar5);
          if (lVar6 == 0) {
            cVar1 = '\0';
          }
          else {
            uVar5 = FUN_100152280();
            uVar5 = FUN_1001554a0(uVar5);
            uVar5 = FUN_10015a340(uVar5);
            local_f8 = (QArrayData *)PTR_shared_null_1021e1288;
            FUN_100122bf0(&local_f0,uVar5,&local_f8);
            cVar1 = QtPrivate::QStringList_contains(&local_f0,&local_48,1);
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                local_31 = *(int *)local_f0 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100063da0;
              }
              iVar3 = *(int *)(local_f0 + 0xc);
              if (iVar3 != *(int *)(local_f0 + 8)) {
                lVar6 = (long)*(int *)(local_f0 + 8) * 8 + (long)iVar3 * -8;
                pDVar9 = local_f0 + (long)iVar3 * 8 + 8;
                do {
                  pQVar10 = *(QArrayData **)pDVar9;
                  if (*(int *)pQVar10 == 0) {
LAB_100063d7f:
                    QArrayData::deallocate(pQVar10,2,8);
                  }
                  else if (*(int *)pQVar10 != -1) {
                    LOCK();
                    *(int *)pQVar10 = *(int *)pQVar10 + -1;
                    local_31 = *(int *)pQVar10 != 0;
                    UNLOCK();
                    if (!(bool)local_31) {
                      pQVar10 = *(QArrayData **)pDVar9;
                      goto LAB_100063d7f;
                    }
                  }
                  pDVar9 = pDVar9 + -8;
                  lVar6 = lVar6 + 8;
                } while (lVar6 != 0);
              }
              QListData::dispose(local_f0);
            }
LAB_100063da0:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                local_31 = *(int *)local_f8 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100063ddb;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
          }
LAB_100063ddb:
          uVar11 = 10000;
          if (cVar1 != '\0') {
            uVar11 = 0x2716;
          }
        }
      }
      else {
        uVar11 = param_2 == '\0' | 0x2712;
        if ((param_2 == '\0') && (param_3 == '\0')) {
          iVar3 = _GetCurrentKeyModifiers();
          uVar11 = (iVar3 == 0x100) + 0x2711 + (uint)(iVar3 == 0x100);
        }
        local_c0.field0_0x0 =
             (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMS]",5);
        SandboxFileAccessHelpers::saveBookmark(&local_48,&local_c0);
        if (*(int *)local_c0.field0_0x0 != -1) {
          if (*(int *)local_c0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_c0.field0_0x0 = *(int *)local_c0.field0_0x0 + -1;
            local_31 = *(int *)local_c0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100063ded;
          }
          QArrayData::deallocate((QArrayData *)local_c0.field0_0x0,2,8);
        }
      }
LAB_100063ded:
      if (1 < DAT_10230ffd0) {
        QString::toUtf8();
        if ((1 < *(uint *)local_100) || (*(long *)(local_100 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_100,*(uint *)(local_100 + 4) + 1,*(uint *)(local_100 + 8) >> 0x1f);
        }
        FUN_100df99c0("","prl_client_app",2,"Posting custom event %d has \'%s\' data.",uVar11,
                      local_100 + *(long *)(local_100 + 0x10));
        if (*(int *)local_100 != -1) {
          if (*(int *)local_100 != 0) {
            LOCK();
            *(int *)local_100 = *(int *)local_100 + -1;
            local_31 = *(int *)local_100 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100063e9f;
          }
          QArrayData::deallocate(local_100,1,8);
        }
      }
LAB_100063e9f:
      pQVar7 = (QObject *)FUN_1001d50a0();
      pQVar8 = operator_new(0x20);
      FUN_100066ae0(pQVar8,uVar11,&local_48);
      QCoreApplication::postEvent(pQVar7,pQVar8,0);
    }
  }
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100063f00;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100063f00:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return;
}


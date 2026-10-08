
void FUN_1005f6270(QObject *param_1,QEvent *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  QEvent *pQVar9;
  long lVar10;
  undefined8 uVar11;
  QMenu *this;
  size_t sVar12;
  QArrayData *pQVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  long lVar17;
  QUrl *pQVar18;
  bool bVar19;
  QKeySequence local_1c0 [8];
  QArrayData *local_1b8;
  QArrayData *local_1b0;
  QVariant local_1a8;
  QString local_198;
  Data *local_190;
  QString local_188;
  Data *local_180;
  QArrayData *local_178;
  QArrayData *local_170;
  QUrl local_168 [8];
  Data *local_160;
  Data *local_158;
  Data *local_150;
  Data *local_148;
  uint local_140;
  QArrayData *local_138;
  QArrayData *local_130;
  QArrayData *local_128;
  Data *local_120;
  QString local_118;
  QFileInfo local_110 [8];
  QArrayData *local_108;
  QArrayData *local_100;
  QArrayData *local_f8;
  QArrayData *local_f0;
  int *local_e8;
  Data *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  pQVar9 = (QEvent *)CDeclarativeWizardPage::pageContentItem();
  if ((pQVar9 != param_2) || (cVar5 = FUN_1005f3ea0(param_1), cVar5 != '\0')) {
    CAbstractWizardPage::wizardCtrl();
    lVar10 = CWizardController::parentWidget();
    if (lVar10 == 0) goto LAB_1005f725a;
    CAbstractWizardPage::wizardCtrl();
    CWizardController::parentWidget();
    pQVar9 = (QEvent *)QWidget::window();
    if (pQVar9 != param_2) goto LAB_1005f725a;
    lVar10 = CDeclarativeWizardPage::pageContentItem();
    if (((lVar10 != 0) && (cVar5 = FUN_1005f3ea0(param_1), cVar5 != '\0')) &&
       (*(short *)(param_3 + 0x10) == 0x18)) {
      uVar11 = CDeclarativeWizardPage::pageContentItem();
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_a8 = 0;
      uStack_a0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      QMetaObject::invokeMethod
                (uVar11,"updateFocus",0,0,0,param_6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    }
    if (*(short *)(param_3 + 0x10) != 0x52) goto LAB_1005f725a;
    CAbstractWizardPage::wizardModel();
    lVar10 = CAbstractWizardModel::currentPage();
    if (((lVar10 != *(long *)(param_1 + 0x10)) || (cVar5 = FUN_1005f3ea0(param_1), cVar5 != '\0'))
       || (lVar10 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38), *(int *)(lVar10 + 0x158) != 2))
    goto LAB_1005f725a;
    this = operator_new(0x30);
    QMenu::QMenu(this,(QWidget *)0x0);
    FontUtils::setMacContextMenuFont((QWidget *)this,false);
    QVariant::QVariant(&local_1a8,true);
    QObject::setProperty((char *)this,(QVariant *)"macNoSubpixelAA");
    QVariant::~QVariant(&local_1a8);
    puVar4 = PTR_s_QMenu___background_color___33343_102271058;
    iVar8 = -1;
    if (PTR_s_QMenu___background_color___33343_102271058 != (undefined *)0x0) {
      sVar12 = _strlen(PTR_s_QMenu___background_color___33343_102271058);
      iVar8 = (int)sVar12;
    }
    local_1b0 = (QArrayData *)QString::fromAscii_helper(puVar4,iVar8);
    QWidget::setStyleSheet((QString *)this);
    if (*(int *)local_1b0 != -1) {
      if (*(int *)local_1b0 != 0) {
        LOCK();
        *(int *)local_1b0 = *(int *)local_1b0 + -1;
        UNLOCK();
        local_48 = CONCAT71(local_48._1_7_,*(int *)local_1b0 != 0);
        if (*(int *)local_1b0 != 0) goto LAB_1005f656b;
      }
      QArrayData::deallocate(local_1b0,2,8);
    }
LAB_1005f656b:
    QWidget::setAttribute(this,0x37,1);
    QMetaObject::tr((char *)&local_1b8,PTR_staticMetaObject_1021e1520,0x1e06220);
    QKeySequence::QKeySequence(local_1c0,0,0,0,0);
    QMenu::addAction((QString *)this,(QObject *)&local_1b8,(char *)param_1,
                     (QKeySequence *)"1openFileName()");
    QKeySequence::~QKeySequence(local_1c0);
    if (*(int *)local_1b8 != -1) {
      if (*(int *)local_1b8 != 0) {
        LOCK();
        *(int *)local_1b8 = *(int *)local_1b8 + -1;
        UNLOCK();
        local_48 = CONCAT71(local_48._1_7_,*(int *)local_1b8 != 0);
        if (*(int *)local_1b8 != 0) goto LAB_1005f6616;
      }
      QArrayData::deallocate(local_1b8,2,8);
    }
LAB_1005f6616:
    QMenu::popup((QPoint *)this,(QAction *)(param_3 + 0x28));
    goto LAB_1005f725a;
  }
  sVar1 = *(short *)(param_3 + 0x10);
  if (sVar1 != 0xa7) {
    if (sVar1 != 0xa6) {
      if (sVar1 != 0xa4) goto LAB_1005f725a;
      lVar10 = ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1700,0);
      uVar6 = QGraphicsSceneDragDropEvent::proposedAction();
      if (lVar10 != 0) {
        QGraphicsSceneDragDropEvent::mimeData();
        QMimeData::urls();
        iVar8 = *(int *)(local_e0 + 0xc);
        iVar2 = *(int *)(local_e0 + 8);
        if (*(int *)local_e0 != -1) {
          iVar7 = iVar8;
          iVar14 = iVar2;
          if (*(int *)local_e0 != 0) {
            LOCK();
            *(int *)local_e0 = *(int *)local_e0 + -1;
            UNLOCK();
            local_48 = CONCAT71(local_48._1_7_,*(int *)local_e0 != 0);
            if (*(int *)local_e0 != 0) goto joined_r0x0001005f6c49;
            iVar7 = *(int *)(local_e0 + 0xc);
            iVar14 = *(int *)(local_e0 + 8);
          }
          if (iVar7 != iVar14) {
            lVar17 = (long)iVar14 * 8 + (long)iVar7 * -8;
            pQVar18 = (QUrl *)(local_e0 + (long)iVar7 * 8 + 8);
            do {
              QUrl::~QUrl(pQVar18);
              pQVar18 = pQVar18 + -8;
              lVar17 = lVar17 + 8;
            } while (lVar17 != 0);
          }
          QListData::dispose(local_e0);
        }
joined_r0x0001005f6c49:
        if (iVar8 != iVar2) {
          if ((DAT_102312300 == '\0') && (iVar8 = ___cxa_guard_acquire(&DAT_102312300), iVar8 != 0))
          {
            local_e8 = (int *)PTR_shared_null_1021e15e8;
            local_f0 = (QArrayData *)QString::fromAscii_helper("iso",3);
            FUN_1000341d0(&local_e8,&local_f0);
            local_f8 = (QArrayData *)QString::fromAscii_helper("dmg",3);
            FUN_1000341d0(&local_e8,&local_f8);
            local_100 = (QArrayData *)QString::fromAscii_helper("img",3);
            FUN_1000341d0(&local_e8,&local_100);
            pQVar13 = (QArrayData *)QString::fromAscii_helper("app",3);
            local_108 = pQVar13;
            FUN_1000341d0(&local_e8,&local_108);
            DAT_1023122f8 = local_e8;
            if (*local_e8 != -1) {
              if (*local_e8 == 0) {
                QListData::detach(0x23122f8);
                iVar8 = DAT_1023122f8[2];
                if (iVar8 != DAT_1023122f8[3]) {
                  piVar15 = local_e8 + (long)local_e8[2] * 2 + 4;
                  piVar16 = DAT_1023122f8 + (long)iVar8 * 2 + 4;
                  lVar17 = (long)DAT_1023122f8[3] * 8 + (long)iVar8 * -8;
                  do {
                    piVar3 = *(int **)piVar15;
                    *(int **)piVar16 = piVar3;
                    if (1 < *piVar3 + 1U) {
                      LOCK();
                      *piVar3 = *piVar3 + 1;
                      UNLOCK();
                      local_48 = CONCAT71(local_48._1_7_,*piVar3 != 0);
                    }
                    piVar16 = piVar16 + 2;
                    piVar15 = piVar15 + 2;
                    lVar17 = lVar17 + -8;
                    pQVar13 = local_108;
                  } while (lVar17 != 0);
                }
              }
              else {
                LOCK();
                *local_e8 = *local_e8 + 1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*local_e8 != 0);
              }
            }
            if (*(int *)pQVar13 != -1) {
              if (*(int *)pQVar13 != 0) {
                LOCK();
                *(int *)pQVar13 = *(int *)pQVar13 + -1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*(int *)pQVar13 != 0);
                if (*(int *)pQVar13 != 0) goto LAB_1005f6f64;
              }
              QArrayData::deallocate(pQVar13,2,8);
            }
LAB_1005f6f64:
            if (*(int *)local_100 != -1) {
              if (*(int *)local_100 != 0) {
                LOCK();
                *(int *)local_100 = *(int *)local_100 + -1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*(int *)local_100 != 0);
                if (*(int *)local_100 != 0) goto LAB_1005f6f93;
              }
              QArrayData::deallocate(local_100,2,8);
            }
LAB_1005f6f93:
            if (*(int *)local_f8 != -1) {
              if (*(int *)local_f8 != 0) {
                LOCK();
                *(int *)local_f8 = *(int *)local_f8 + -1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*(int *)local_f8 != 0);
                if (*(int *)local_f8 != 0) goto LAB_1005f6fc2;
              }
              QArrayData::deallocate(local_f8,2,8);
            }
LAB_1005f6fc2:
            if (*(int *)local_f0 != -1) {
              if (*(int *)local_f0 != 0) {
                LOCK();
                *(int *)local_f0 = *(int *)local_f0 + -1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*(int *)local_f0 != 0);
                if (*(int *)local_f0 != 0) goto LAB_1005f6ff1;
              }
              QArrayData::deallocate(local_f0,2,8);
            }
LAB_1005f6ff1:
            FUN_100039a80(&local_e8);
            ___cxa_atexit(FUN_1002b5b40,&DAT_1023122f8,0x100000000);
            ___cxa_guard_release(&DAT_102312300);
          }
          QGraphicsSceneDragDropEvent::mimeData();
          QMimeData::urls();
          MacUtils::localPathForUrl((QUrl *)&local_118);
          QFileInfo::QFileInfo(local_110,&local_118);
          if (*(int *)local_118.field0_0x0 != -1) {
            if (*(int *)local_118.field0_0x0 != 0) {
              LOCK();
              *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
              UNLOCK();
              local_48 = CONCAT71(local_48._1_7_,*(int *)local_118.field0_0x0 != 0);
              if (*(int *)local_118.field0_0x0 != 0) goto LAB_1005f709f;
            }
            QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
          }
LAB_1005f709f:
          if (*(int *)local_120 != -1) {
            if (*(int *)local_120 != 0) {
              LOCK();
              *(int *)local_120 = *(int *)local_120 + -1;
              UNLOCK();
              local_48 = CONCAT71(local_48._1_7_,*(int *)local_120 != 0);
              if (*(int *)local_120 != 0) goto LAB_1005f7135;
            }
            iVar8 = *(int *)(local_120 + 0xc);
            if (iVar8 != *(int *)(local_120 + 8)) {
              lVar17 = (long)*(int *)(local_120 + 8) * 8 + (long)iVar8 * -8;
              pQVar18 = (QUrl *)(local_120 + (long)iVar8 * 8 + 8);
              do {
                QUrl::~QUrl(pQVar18);
                pQVar18 = pQVar18 + -8;
                lVar17 = lVar17 + 8;
              } while (lVar17 != 0);
            }
            QListData::dispose(local_120);
          }
LAB_1005f7135:
          QFileInfo::suffix();
          cVar5 = QtPrivate::QStringList_contains(&DAT_1023122f8,&local_128,0);
          if (*(int *)local_128 != -1) {
            if (*(int *)local_128 != 0) {
              LOCK();
              *(int *)local_128 = *(int *)local_128 + -1;
              UNLOCK();
              local_48 = CONCAT71(local_48._1_7_,*(int *)local_128 != 0);
              if (*(int *)local_128 != 0) goto LAB_1005f7196;
            }
            QArrayData::deallocate(local_128,2,8);
          }
LAB_1005f7196:
          QFileInfo::~QFileInfo(local_110);
          if (((uVar6 & 7) != 0) && (cVar5 == '\x01')) {
            lVar17 = FUN_1005ec990(*(long *)(param_1 + 0x10) + 0x38);
            *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(lVar17 + 0x158);
            FUN_1005f4a80(&local_130,2);
            FUN_1005f49f0(param_1,&local_130);
            if (*(int *)local_130 != -1) {
              if (*(int *)local_130 != 0) {
                LOCK();
                *(int *)local_130 = *(int *)local_130 + -1;
                UNLOCK();
                local_48 = CONCAT71(local_48._1_7_,*(int *)local_130 != 0);
                if (*(int *)local_130 != 0) goto LAB_1005f722c;
              }
              QArrayData::deallocate(local_130,2,8);
            }
LAB_1005f722c:
            FUN_1005f5ae0(param_1,1);
            if ((uVar6 & 1) == 0) {
              QGraphicsSceneDragDropEvent::setDropAction(lVar10,1);
              *(byte *)(lVar10 + 0x12) = *(byte *)(lVar10 + 0x12) | 4;
            }
            else {
              QGraphicsSceneDragDropEvent::acceptProposedAction();
            }
            goto LAB_1005f725a;
          }
        }
      }
      *(byte *)(lVar10 + 0x12) = *(byte *)(lVar10 + 0x12) & 0xfb;
      goto LAB_1005f725a;
    }
    FUN_1005f4a80(&local_138,*(undefined4 *)(param_1 + 0x30));
    FUN_1005f49f0(param_1,&local_138);
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        UNLOCK();
        local_48 = CONCAT71(local_48._1_7_,*(int *)local_138 != 0);
        if (*(int *)local_138 != 0) goto LAB_1005f6698;
      }
      QArrayData::deallocate(local_138,2,8);
    }
LAB_1005f6698:
    FUN_1005f5ae0(param_1,0);
    *(byte *)(param_3 + 0x12) = *(byte *)(param_3 + 0x12) | 4;
    goto LAB_1005f725a;
  }
  FUN_1005f5ae0(param_1,0);
  ___dynamic_cast(param_3,PTR_typeinfo_1021e1710,PTR_typeinfo_1021e1700,0);
  QGraphicsSceneDragDropEvent::mimeData();
  QMimeData::urls();
  FUN_1005fa600(&local_158,&local_160);
  local_150 = local_158 + (long)*(int *)(local_158 + 8) * 8 + 0x10;
  local_148 = local_158 + (long)*(int *)(local_158 + 0xc) * 8 + 0x10;
  local_140 = 1;
  if (*(int *)local_160 == -1) {
LAB_1005f67b7:
    do {
      if (local_150 == local_148) break;
      QUrl::QUrl(local_168,(QUrl *)local_150);
      if (local_140 != 0) {
        QUrl::toString(&local_178,local_168,0);
        QString::toUtf8();
        FUN_100df99c0("","prl_client_app",0,"url =%s",local_170 + *(long *)(local_170 + 0x10));
        if (*(int *)local_170 != -1) {
          if (*(int *)local_170 != 0) {
            LOCK();
            *(int *)local_170 = *(int *)local_170 + -1;
            UNLOCK();
            local_48 = CONCAT71(local_48._1_7_,*(int *)local_170 != 0);
            if (*(int *)local_170 != 0) goto LAB_1005f6879;
          }
          QArrayData::deallocate(local_170,1,8);
        }
LAB_1005f6879:
        if (*(int *)local_178 != -1) {
          if (*(int *)local_178 != 0) {
            LOCK();
            *(int *)local_178 = *(int *)local_178 + -1;
            UNLOCK();
            local_48 = CONCAT71(local_48._1_7_,*(int *)local_178 != 0);
            if (*(int *)local_178 != 0) goto LAB_1005f68af;
          }
          QArrayData::deallocate(local_178,2,8);
        }
LAB_1005f68af:
        local_140 = 0;
      }
      QUrl::~QUrl(local_168);
      local_150 = local_150 + 8;
      uVar6 = local_140 ^ 1;
      bVar19 = local_140 != 1;
      local_140 = uVar6;
    } while (bVar19);
  }
  else {
    if (*(int *)local_160 == 0) {
LAB_1005f6762:
      iVar8 = *(int *)(local_160 + 0xc);
      if (iVar8 != *(int *)(local_160 + 8)) {
        lVar10 = (long)*(int *)(local_160 + 8) * 8 + (long)iVar8 * -8;
        pQVar18 = (QUrl *)(local_160 + (long)iVar8 * 8 + 8);
        do {
          QUrl::~QUrl(pQVar18);
          pQVar18 = pQVar18 + -8;
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0);
      }
      QListData::dispose(local_160);
    }
    else {
      LOCK();
      *(int *)local_160 = *(int *)local_160 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_160 != 0);
      if (*(int *)local_160 == 0) goto LAB_1005f6762;
    }
    if (local_140 != 0) goto LAB_1005f67b7;
  }
  if (*(int *)local_158 != -1) {
    if (*(int *)local_158 != 0) {
      LOCK();
      *(int *)local_158 = *(int *)local_158 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_158 != 0);
      if (*(int *)local_158 != 0) goto LAB_1005f6955;
    }
    iVar8 = *(int *)(local_158 + 0xc);
    if (iVar8 != *(int *)(local_158 + 8)) {
      lVar10 = (long)*(int *)(local_158 + 8) * 8 + (long)iVar8 * -8;
      pQVar18 = (QUrl *)(local_158 + (long)iVar8 * 8 + 8);
      do {
        QUrl::~QUrl(pQVar18);
        pQVar18 = pQVar18 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_158);
  }
LAB_1005f6955:
  QGraphicsSceneDragDropEvent::mimeData();
  QMimeData::urls();
  iVar8 = *(int *)(local_180 + 0xc);
  iVar2 = *(int *)(local_180 + 8);
  if (*(int *)local_180 != -1) {
    iVar7 = iVar8;
    iVar14 = iVar2;
    if (*(int *)local_180 != 0) {
      LOCK();
      *(int *)local_180 = *(int *)local_180 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_180 != 0);
      if (*(int *)local_180 != 0) goto LAB_1005f6abe;
      iVar7 = *(int *)(local_180 + 0xc);
      iVar14 = *(int *)(local_180 + 8);
    }
    if (iVar7 != iVar14) {
      lVar10 = (long)iVar14 * 8 + (long)iVar7 * -8;
      pQVar18 = (QUrl *)(local_180 + (long)iVar7 * 8 + 8);
      do {
        QUrl::~QUrl(pQVar18);
        pQVar18 = pQVar18 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_180);
  }
LAB_1005f6abe:
  if (iVar8 == iVar2) goto LAB_1005f725a;
  QGraphicsSceneDragDropEvent::mimeData();
  QMimeData::urls();
  MacUtils::localPathForUrl((QUrl *)&local_188);
  if (*(int *)local_190 != -1) {
    if (*(int *)local_190 != 0) {
      LOCK();
      *(int *)local_190 = *(int *)local_190 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_190 != 0);
      if (*(int *)local_190 != 0) goto LAB_1005f6b6c;
    }
    iVar8 = *(int *)(local_190 + 0xc);
    if (iVar8 != *(int *)(local_190 + 8)) {
      lVar10 = (long)*(int *)(local_190 + 8) * 8 + (long)iVar8 * -8;
      pQVar18 = (QUrl *)(local_190 + (long)iVar8 * 8 + 8);
      do {
        QUrl::~QUrl(pQVar18);
        pQVar18 = pQVar18 + -8;
        lVar10 = lVar10 + 8;
      } while (lVar10 != 0);
    }
    QListData::dispose(local_190);
  }
LAB_1005f6b6c:
  local_198.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("[VMIF]",6);
  SandboxFileAccessHelpers::saveBookmark(&local_188,&local_198);
  if (*(int *)local_198.field0_0x0 != -1) {
    if (*(int *)local_198.field0_0x0 != 0) {
      LOCK();
      *(int *)local_198.field0_0x0 = *(int *)local_198.field0_0x0 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_198.field0_0x0 != 0);
      if (*(int *)local_198.field0_0x0 != 0) goto LAB_1005f6bd4;
    }
    QArrayData::deallocate((QArrayData *)local_198.field0_0x0,2,8);
  }
LAB_1005f6bd4:
  FUN_1005f5b70(param_1,&local_188);
  if (*(int *)local_188.field0_0x0 != -1) {
    if (*(int *)local_188.field0_0x0 != 0) {
      LOCK();
      *(int *)local_188.field0_0x0 = *(int *)local_188.field0_0x0 + -1;
      UNLOCK();
      local_48 = CONCAT71(local_48._1_7_,*(int *)local_188.field0_0x0 != 0);
      if (*(int *)local_188.field0_0x0 != 0) goto LAB_1005f725a;
    }
    QArrayData::deallocate((QArrayData *)local_188.field0_0x0,2,8);
  }
LAB_1005f725a:
  QObject::eventFilter(param_1,param_2);
  return;
}


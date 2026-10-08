
void FUN_10053c6b0(long param_1)

{
  int iVar1;
  QString *pQVar2;
  QObject *pQVar3;
  char *pcVar4;
  undefined *puVar5;
  AnonymousUnion0 AVar6;
  char cVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  QArrayData *pQVar13;
  long lVar14;
  long lVar15;
  Data *pDVar16;
  int *local_1c0;
  int *local_1b8;
  QObject *local_1b0;
  QArrayData *local_1a8;
  AnonymousUnion0 local_1a0;
  QVariant local_198;
  QVariant local_188;
  Data *local_178;
  Data *local_170;
  Data *local_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  Data *local_138;
  int *local_130;
  QObject *local_128;
  int *local_120;
  QObject *local_118;
  int *local_110;
  QObject *local_108;
  int *local_100;
  QObject *local_f8;
  int *local_f0;
  QObject *local_e8;
  QArrayData *local_e0;
  QArrayData *local_d8;
  QLocale local_d0 [8];
  QArrayData *local_c8;
  QArrayData *local_c0;
  int *local_b8;
  QObject *local_b0;
  int *local_a8;
  QObject *local_a0;
  int *local_98;
  QObject *local_90;
  int *local_88;
  QObject *local_80;
  int *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QLocale local_60 [8];
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  FUN_10053fbb0(*(undefined8 *)(param_1 + 0x48),param_1);
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x48) + 0x68);
  local_40 = (QArrayData *)
             QString::fromAscii_helper("QLabel { margin-top: -3; padding-left: -4 }",0x2b);
  QWidget::setStyleSheet(pQVar2);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053c72c;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_10053c72c:
  local_48 = (QArrayData *)
             QString::fromAscii_helper
                       ("QFrame#m_frameLockdownConfig { padding-left: -6px; padding-right: -6px; padding-bottom: -6px; }"
                        ,0x5f);
  QWidget::setStyleSheet(*(QString **)(*(long *)(param_1 + 0x48) + 0x18));
  local_58 = (QArrayData *)
             QString::fromAscii_helper
                       ("http://www.parallels.com/products/desktop/pdfm12-learn-more-about-pdb-restrictions-via-massdeployment-@LOCALE@"
                        ,0x6e);
  QLocale::QLocale(local_60);
  FUN_100d3f730(&local_50,&local_58,local_60);
  QLocale::~QLocale(local_60);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053c7ba;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_10053c7ba:
  pQVar2 = *(QString **)(*(long *)(param_1 + 0x48) + 0x40);
  QLabel::text();
  QString::arg(&local_68,&local_70,&local_50,0,0x20);
  QLabel::setText(pQVar2);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053c823;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_10053c823:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053c853;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_10053c853:
  QWidget::setAttribute(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x40),0x5a,1);
  QWidget::adjustSize();
  local_78 = (int *)PTR_shared_null_1021e15e8;
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x38);
  if ((((lVar14 == 0) || (*(int *)(lVar14 + 4) == 0)) ||
      (lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x40), lVar14 == 0)) ||
     (cVar7 = FUN_1001754c0(lVar14,0x11), cVar7 == '\0')) {
    pQVar3 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x48);
    piVar8 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    local_88 = piVar8;
    local_80 = pQVar3;
    FUN_10007b8d0(&local_78,&local_88);
    local_90 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x58);
    piVar9 = (int *)0x0;
    if (local_90 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_90);
    }
    local_98 = piVar9;
    FUN_10007b8d0(&local_78,&local_98);
    local_a0 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x60);
    piVar10 = (int *)0x0;
    if (local_a0 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_a0);
    }
    local_a8 = piVar10;
    FUN_10007b8d0(&local_78,&local_a8);
    local_b0 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x68);
    piVar11 = (int *)0x0;
    if (local_b0 != (QObject *)0x0) {
      piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_b0);
    }
    local_b8 = piVar11;
    FUN_10007b8d0(&local_78,&local_b8);
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar11);
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
  else {
    local_c8 = (QArrayData *)
               QString::fromAscii_helper
                         ("http://www.parallels.com/products/pdfm12/encryption-plugins-@LOCALE@",
                          0x44);
    QLocale::QLocale(local_d0);
    FUN_100d3f730(&local_c0,&local_c8,local_d0);
    QLocale::~QLocale(local_d0);
    if (*(int *)local_c8 != -1) {
      if (*(int *)local_c8 != 0) {
        LOCK();
        *(int *)local_c8 = *(int *)local_c8 + -1;
        local_31 = *(int *)local_c8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053c93c;
      }
      QArrayData::deallocate(local_c8,2,8);
    }
LAB_10053c93c:
    QLabel::text();
    QString::arg(&local_d8,&local_e0,&local_c0,0,0x20);
    if (*(int *)local_e0 != -1) {
      if (*(int *)local_e0 != 0) {
        LOCK();
        *(int *)local_e0 = *(int *)local_e0 + -1;
        local_31 = *(int *)local_e0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053c9a8;
      }
      QArrayData::deallocate(local_e0,2,8);
    }
LAB_10053c9a8:
    QLabel::setText(*(QString **)(*(long *)(param_1 + 0x48) + 0x68));
    QWidget::setAttribute(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0x68),0x5a,1);
    QWidget::adjustSize();
    if (*(int *)local_d8 != -1) {
      if (*(int *)local_d8 != 0) {
        LOCK();
        *(int *)local_d8 = *(int *)local_d8 + -1;
        local_31 = *(int *)local_d8 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053ca16;
      }
      QArrayData::deallocate(local_d8,2,8);
    }
LAB_10053ca16:
    if (*(int *)local_c0 != -1) {
      if (*(int *)local_c0 != 0) {
        LOCK();
        *(int *)local_c0 = *(int *)local_c0 + -1;
        local_31 = *(int *)local_c0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053cbb7;
      }
      QArrayData::deallocate(local_c0,2,8);
    }
  }
LAB_10053cbb7:
  cVar7 = FUN_1001756c0(0x24);
  if (cVar7 == '\0') {
    pQVar3 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x10);
    piVar8 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    local_f0 = piVar8;
    local_e8 = pQVar3;
    FUN_10007b8d0(&local_78,&local_f0);
    local_f8 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x18);
    piVar9 = (int *)0x0;
    if (local_f8 != (QObject *)0x0) {
      piVar9 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_f8);
    }
    local_100 = piVar9;
    FUN_10007b8d0(&local_78,&local_100);
    local_108 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x90);
    piVar10 = (int *)0x0;
    if (local_108 != (QObject *)0x0) {
      piVar10 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_108);
    }
    local_110 = piVar10;
    FUN_10007b8d0(&local_78,&local_110);
    local_118 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x40);
    piVar11 = (int *)0x0;
    if (local_118 != (QObject *)0x0) {
      piVar11 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_118);
    }
    local_120 = piVar11;
    FUN_10007b8d0(&local_78,&local_120);
    local_128 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x50);
    piVar12 = (int *)0x0;
    if (local_128 != (QObject *)0x0) {
      piVar12 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(local_128);
    }
    local_130 = piVar12;
    FUN_10007b8d0(&local_78,&local_130);
    if (piVar12 != (int *)0x0) {
      LOCK();
      *piVar12 = *piVar12 + -1;
      local_31 = *piVar12 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar12);
      }
    }
    if (piVar11 != (int *)0x0) {
      LOCK();
      *piVar11 = *piVar11 + -1;
      local_31 = *piVar11 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar11);
      }
    }
    if (piVar10 != (int *)0x0) {
      LOCK();
      *piVar10 = *piVar10 + -1;
      local_31 = *piVar10 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar10);
      }
    }
    if (piVar9 != (int *)0x0) {
      LOCK();
      *piVar9 = *piVar9 + -1;
      local_31 = *piVar9 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar9);
      }
    }
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
    local_138 = (Data *)PTR_shared_null_1021e15e8;
    local_140 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x70);
    FUN_100359270(&local_138,&local_140);
    local_148 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x78);
    FUN_100359270(&local_138,&local_148);
    local_150 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x80);
    FUN_100359270(&local_138,&local_150);
    local_158 = *(undefined8 *)(*(long *)(param_1 + 0x48) + 0x88);
    FUN_100359270(&local_138,&local_158);
    local_178 = local_138;
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 == 0) {
        QListData::detach((int)&local_178);
        lVar14 = (long)*(int *)(local_178 + 8);
        if ((local_138 + (long)*(int *)(local_138 + 8) * 8 != local_178 + lVar14 * 8) &&
           (lVar15 = *(int *)(local_178 + 0xc) - lVar14,
           lVar15 != 0 && lVar14 <= *(int *)(local_178 + 0xc))) {
          _memcpy(local_178 + lVar14 * 8 + 0x10,local_138 + (long)*(int *)(local_138 + 8) * 8 + 0x10
                  ,lVar15 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + 1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
      }
    }
    local_170 = local_178 + (long)*(int *)(local_178 + 8) * 8 + 0x10;
    local_168 = local_178 + (long)*(int *)(local_178 + 0xc) * 8 + 0x10;
    if (*(int *)(local_178 + 8) != *(int *)(local_178 + 0xc)) {
      do {
        local_160 = 1;
        pcVar4 = *(char **)local_170;
        QVariant::QVariant(&local_188,false);
        QObject::setProperty(pcVar4,(QVariant *)"notRestorable");
        QVariant::~QVariant(&local_188);
        puVar5 = PTR_s_DispPreferences_102274488;
        local_1a0.field1 = (Data *)PTR_shared_null_1021e15e8;
        pQVar13 = (QArrayData *)
                  QString::fromAscii_helper("LockedOperationsList.LockedOperation",0x24);
        local_1a8 = pQVar13;
        FUN_1000341d0(&local_1a0,&local_1a8);
        QVariant::QVariant(&local_198,(QStringList *)&local_1a0.field0);
        QObject::setProperty(pcVar4,(QVariant *)puVar5);
        QVariant::~QVariant(&local_198);
        if (*(int *)pQVar13 != -1) {
          if (*(int *)pQVar13 != 0) {
            LOCK();
            *(int *)pQVar13 = *(int *)pQVar13 + -1;
            local_31 = *(int *)pQVar13 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10053d011;
          }
          QArrayData::deallocate(pQVar13,2,8);
        }
LAB_10053d011:
        AVar6 = local_1a0;
        if (*(int *)local_1a0.field1 != -1) {
          if (*(int *)local_1a0.field1 != 0) {
            LOCK();
            *(int *)local_1a0.field1 = *(int *)local_1a0.field1 + -1;
            local_31 = *(int *)local_1a0.field1 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10053d0a1;
          }
          iVar1 = *(int *)(local_1a0.field1 + 0xc);
          if (iVar1 != *(int *)(local_1a0.field1 + 8)) {
            lVar14 = (long)*(int *)(local_1a0.field1 + 8) * 8 + (long)iVar1 * -8;
            pDVar16 = (Data *)(local_1a0.field1 + (long)iVar1 * 8 + 8);
            do {
              pQVar13 = *(QArrayData **)pDVar16;
              if (*(int *)pQVar13 == 0) {
LAB_10053d080:
                QArrayData::deallocate(pQVar13,2,8);
              }
              else if (*(int *)pQVar13 != -1) {
                LOCK();
                *(int *)pQVar13 = *(int *)pQVar13 + -1;
                local_31 = *(int *)pQVar13 != 0;
                UNLOCK();
                if (!(bool)local_31) {
                  pQVar13 = *(QArrayData **)pDVar16;
                  goto LAB_10053d080;
                }
              }
              pDVar16 = pDVar16 + -8;
              lVar14 = lVar14 + 8;
            } while (lVar14 != 0);
          }
          QListData::dispose((Data *)AVar6.field1);
        }
LAB_10053d0a1:
        local_170 = local_170 + 8;
      } while (local_170 != local_168);
    }
    local_160 = 1;
    if (*(int *)local_178 != -1) {
      if (*(int *)local_178 != 0) {
        LOCK();
        *(int *)local_178 = *(int *)local_178 + -1;
        local_31 = *(int *)local_178 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053d0fd;
      }
      QListData::dispose(local_178);
    }
LAB_10053d0fd:
    if (*(int *)local_138 != -1) {
      if (*(int *)local_138 != 0) {
        LOCK();
        *(int *)local_138 = *(int *)local_138 + -1;
        local_31 = *(int *)local_138 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10053d129;
      }
      QListData::dispose(local_138);
    }
  }
  else {
    pQVar3 = *(QObject **)(*(long *)(param_1 + 0x48) + 0x98);
    piVar8 = (int *)0x0;
    if (pQVar3 != (QObject *)0x0) {
      piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar3);
    }
    local_1b8 = piVar8;
    local_1b0 = pQVar3;
    FUN_10007b8d0(&local_78,&local_1b8);
    if (piVar8 != (int *)0x0) {
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_31 = *piVar8 != 0;
      UNLOCK();
      if (!(bool)local_31) {
        operator_delete(piVar8);
      }
    }
  }
LAB_10053d129:
  FUN_10006b440(&local_1c0,&local_78);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_1c0);
  if (*local_1c0 != -1) {
    if (*local_1c0 != 0) {
      LOCK();
      *local_1c0 = *local_1c0 + -1;
      local_31 = *local_1c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053d17b;
    }
    FUN_10006b5d0(&local_1c0,local_1c0);
  }
LAB_10053d17b:
  FUN_10053dd40(param_1);
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053d1ad;
    }
    FUN_10006b5d0(&local_78,local_78);
  }
LAB_10053d1ad:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10053d1dd;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10053d1dd:
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
  return;
}


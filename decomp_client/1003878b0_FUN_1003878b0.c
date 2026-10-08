
void FUN_1003878b0(long param_1,int *param_2,int *param_3)

{
  int *piVar1;
  long *plVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  bool bVar11;
  double dVar12;
  QVariant local_178;
  QColor local_168 [16];
  QColor local_158 [16];
  QVariant local_148;
  QVariant local_138;
  QArrayData *local_128;
  QVariant local_120;
  QArrayData *local_110;
  QPixmap local_108 [32];
  QPixmap local_e8 [32];
  QVariant local_c8;
  QIcon local_b8 [8];
  QVariant local_b0;
  QString local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  uint local_80;
  QVariant local_78;
  QString local_68;
  undefined1 local_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_31;
  
  if (*param_3 < *param_2) {
    return;
  }
  iVar5 = *param_2;
  while( true ) {
    (**(code **)(**(long **)(param_1 + 0x10) + 0x60))
              (local_60,*(long **)(param_1 + 0x10),iVar5,0,param_1 + 0x20);
    (**(code **)(**(long **)(param_1 + 0x10) + 0x90))(&local_78,*(long **)(param_1 + 0x10),local_60)
    ;
    QVariant::toString();
    QVariant::~QVariant(&local_78);
    if (*(int *)(local_68.field0_0x0 + 4) != 0) break;
    if (*(int *)local_68.field0_0x0 != -1) {
      if (*(int *)local_68.field0_0x0 != 0) {
        LOCK();
        *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
        local_31 = *(int *)local_68.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10038797a;
      }
      QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
    }
LAB_10038797a:
    bVar11 = *param_3 <= iVar5;
    iVar5 = iVar5 + 1;
    if (bVar11) {
      return;
    }
  }
  FUN_1003895f0(&local_98,param_1 + 0x40);
  local_90 = local_98 + (long)local_98[2] * 2 + 4;
  local_88 = local_98 + (long)local_98[3] * 2 + 4;
  local_80 = 1;
  if (local_98[2] != local_98[3]) {
    do {
      piVar1 = (int *)**(undefined8 **)local_90;
      plVar2 = (long *)(*(undefined8 **)local_90)[1];
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + 1;
        local_31 = *piVar1 != 0;
        UNLOCK();
      }
      if (local_80 != 0) {
        if (((piVar1 != (int *)0x0) && (plVar2 != (long *)0x0)) && (piVar1[1] != 0)) {
          QObject::property((char *)&local_b0);
          QVariant::toString();
          cVar3 = operator==(&local_a0,&local_68);
          if (*(int *)local_a0.field0_0x0 != -1) {
            if (*(int *)local_a0.field0_0x0 != 0) {
              LOCK();
              *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
              local_31 = *(int *)local_a0.field0_0x0 != 0;
              UNLOCK();
              if ((bool)local_31) goto LAB_100387a9d;
            }
            QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
          }
LAB_100387a9d:
          QVariant::~QVariant(&local_b0);
          if (cVar3 != '\0') {
            (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
                      (&local_c8,*(long **)(param_1 + 0x10),local_60,1);
            FUN_10014c530(local_b8,&local_c8);
            QVariant::~QVariant(&local_c8);
            local_48 = 0x8000000080;
            QIcon::pixmap(local_108,local_b8,&local_48,0,1);
            local_40 = 0x8000000080;
            QPixmap::scaled(local_e8,local_108,&local_40,2,1);
            QPixmap::~QPixmap(local_108);
            plVar6 = (long *)0x0;
            if (piVar1[1] != 0) {
              plVar6 = plVar2;
            }
            plVar9 = (long *)plVar6[7];
            QPixmap::operator=((QPixmap *)(plVar9 + 6),local_e8);
            (**(code **)(*plVar9 + 0xa8))(plVar9);
            cVar3 = QPixmap::isNull();
            dVar12 = 0.0;
            if (cVar3 == '\0') {
              dVar12 = DAT_100e19928;
            }
            QGraphicsLinearLayout::setSpacing(dVar12);
            (**(code **)(*plVar6 + 0xa8))(plVar6);
            plVar6 = (long *)0x0;
            if (piVar1[1] != 0) {
              plVar6 = plVar2;
            }
            (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
                      (&local_120,*(long **)(param_1 + 0x10),local_60,0);
            QVariant::toString();
            (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
                      (&local_138,*(long **)(param_1 + 0x10),local_60,0x101);
            uVar4 = QVariant::toInt((bool *)&local_138);
            FUN_10038a010(&local_128,uVar4);
            FUN_100383870(plVar6,&local_110,&local_128);
            if (*(int *)local_128 != -1) {
              if (*(int *)local_128 != 0) {
                LOCK();
                *(int *)local_128 = *(int *)local_128 + -1;
                local_31 = *(int *)local_128 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100387c97;
              }
              QArrayData::deallocate(local_128,2,8);
            }
LAB_100387c97:
            QVariant::~QVariant(&local_138);
            if (*(int *)local_110 != -1) {
              if (*(int *)local_110 != 0) {
                LOCK();
                *(int *)local_110 = *(int *)local_110 + -1;
                local_31 = *(int *)local_110 != 0;
                UNLOCK();
                if ((bool)local_31) goto LAB_100387cd5;
              }
              QArrayData::deallocate(local_110,2,8);
            }
LAB_100387cd5:
            QVariant::~QVariant(&local_120);
            (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
                      (&local_148,*(long **)(param_1 + 0x10),local_60,0x101);
            iVar5 = QVariant::toInt((bool *)&local_148);
            QVariant::~QVariant(&local_148);
            plVar6 = (long *)0x0;
            if (piVar1[1] != 0) {
              plVar6 = plVar2;
            }
            QColor::QColor(local_158,3);
            if (iVar5 == 2) {
              QColor::setRgb((int)local_168,0xfe,0x9f,0x39);
            }
            else {
              QColor::QColor(local_168,8);
            }
            FUN_100383a20(plVar6,local_158,local_168);
            plVar6 = (long *)0x0;
            if (piVar1[1] != 0) {
              plVar6 = plVar2;
            }
            plVar9 = (long *)0x0;
            if ((*(long *)(param_1 + 0x48) != 0) &&
               (plVar9 = (long *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
              plVar9 = *(long **)(param_1 + 0x50);
            }
            if (plVar6 == plVar9) {
              QGraphicsWidget::adjustSize();
              lVar7 = 0;
              if ((*(long *)(param_1 + 0x48) != 0) &&
                 (lVar7 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
                lVar7 = *(long *)(param_1 + 0x50);
              }
              lVar10 = lVar7 + 0x10;
              if (lVar7 == 0) {
                lVar10 = 0;
              }
              FUN_100384cb0(*(undefined8 *)(param_1 + 0x90),lVar10,1);
            }
            else {
              (**(code **)(**(long **)(param_1 + 0x10) + 0x90))
                        (&local_178,*(long **)(param_1 + 0x10),local_60,0x102);
              cVar3 = QVariant::toBool();
              QVariant::~QVariant(&local_178);
              if (cVar3 != '\0') {
                plVar6 = (long *)0x0;
                if (piVar1[1] != 0) {
                  plVar6 = plVar2;
                }
                FUN_100387190(param_1,plVar6);
              }
            }
            plVar6 = (long *)0x0;
            if (piVar1[1] != 0) {
              plVar6 = plVar2;
            }
            QGraphicsItem::update((QRectF *)(plVar6 + 2));
            QPixmap::~QPixmap(local_e8);
            QIcon::~QIcon(local_b8);
            goto LAB_100387d77;
          }
        }
        local_80 = 0;
      }
LAB_100387d77:
      if (piVar1 != (int *)0x0) {
        LOCK();
        *piVar1 = *piVar1 + -1;
        local_31 = *piVar1 != 0;
        UNLOCK();
        if (!(bool)local_31) {
          operator_delete(piVar1);
        }
      }
      local_90 = local_90 + 2;
      uVar8 = local_80 ^ 1;
      bVar11 = local_80 != 1;
      local_80 = uVar8;
    } while ((bVar11) && (local_90 != local_88));
  }
  if (*local_98 != -1) {
    if (*local_98 != 0) {
      LOCK();
      *local_98 = *local_98 + -1;
      local_31 = *local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100387f7d;
    }
    FUN_100389550(&local_98,local_98);
  }
LAB_100387f7d:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_68.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
  return;
}



void FUN_100525c10(long *param_1)

{
  int iVar1;
  QWidget *pQVar2;
  Data *pDVar3;
  char cVar4;
  QObject *pQVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  QArrayData *pQVar9;
  Data *pDVar10;
  int *local_b0;
  int *local_a8;
  QWidget *local_a0;
  QVariant local_98;
  QVariant local_88;
  Data *local_78;
  QArrayData *local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  int local_48;
  int *local_40;
  undefined1 local_31;
  
  local_40 = (int *)PTR_shared_null_1021e15e8;
  local_70 = (QArrayData *)PTR_shared_null_1021e1288;
  local_68 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(param_1,&local_70,PTR_staticMetaObject_1021e1540,&local_68,1);
  local_60 = local_68;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      if ((local_68 + (long)*(int *)(local_68 + 8) * 8 != local_60 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + 1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100525d0f;
    }
    QListData::dispose(local_68);
  }
LAB_100525d0f:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_31 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100525d3f;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_100525d3f:
  if ((local_48 != 0) && (local_58 != local_50)) {
    do {
      pQVar2 = *(QWidget **)local_58;
      QObject::property((char *)&local_88);
      QVariant::toStringList();
      cVar4 = FUN_100526250(&local_78);
      pDVar3 = local_78;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100525e28;
        }
        iVar1 = *(int *)(local_78 + 0xc);
        if (iVar1 != *(int *)(local_78 + 8)) {
          lVar6 = (long)*(int *)(local_78 + 8) * 8 + (long)iVar1 * -8;
          pDVar10 = local_78 + (long)iVar1 * 8 + 8;
          do {
            pQVar9 = *(QArrayData **)pDVar10;
            if (*(int *)pQVar9 == 0) {
LAB_100525e00:
              QArrayData::deallocate(pQVar9,2,8);
            }
            else if (*(int *)pQVar9 != -1) {
              LOCK();
              *(int *)pQVar9 = *(int *)pQVar9 + -1;
              local_31 = *(int *)pQVar9 != 0;
              UNLOCK();
              if (!(bool)local_31) {
                pQVar9 = *(QArrayData **)pDVar10;
                goto LAB_100525e00;
              }
            }
            pDVar10 = pDVar10 + -8;
            lVar6 = lVar6 + 8;
          } while (lVar6 != 0);
        }
        QListData::dispose(pDVar3);
      }
LAB_100525e28:
      QVariant::~QVariant(&local_88);
      if (cVar4 != '\0') {
        (**(code **)(*param_1 + 0x1c8))(param_1,pQVar2);
        CWidgetMapper::addMapping((QWidget *)param_1[7]);
      }
      QObject::property((char *)&local_98);
      cVar4 = QVariant::toBool();
      QVariant::~QVariant(&local_98);
      if (cVar4 != '\0') {
        pQVar5 = (QObject *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1350);
        QObject::installEventFilter(pQVar5);
      }
      WidgetUtils::Adjuster::adjustWidget(pQVar2,-1,-1);
      cVar4 = WidgetUtils::isVisibleForCurrentProduct(pQVar2);
      if (cVar4 == '\0') {
        piVar8 = (int *)0x0;
        if (pQVar2 != (QWidget *)0x0) {
          piVar8 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef((QObject *)pQVar2);
        }
        local_a8 = piVar8;
        local_a0 = pQVar2;
        FUN_10007b8d0(&local_40,&local_a8);
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
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
  }
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100525f63;
    }
    QListData::dispose(local_60);
  }
LAB_100525f63:
  FUN_10006b440(&local_b0,&local_40);
  WidgetUtils::hideWidgetsAndRemoveFromFormLayouts(param_1,&local_b0);
  if (*local_b0 != -1) {
    if (*local_b0 != 0) {
      LOCK();
      *local_b0 = *local_b0 + -1;
      local_31 = *local_b0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100525fb5;
    }
    FUN_10006b5d0(&local_b0,local_b0);
  }
LAB_100525fb5:
  (**(code **)(*param_1 + 0x1d0))(param_1);
  if (*local_40 != -1) {
    if (*local_40 != 0) {
      LOCK();
      *local_40 = *local_40 + -1;
      UNLOCK();
      if (*local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_10006b5d0(&local_40,local_40);
  }
  return;
}


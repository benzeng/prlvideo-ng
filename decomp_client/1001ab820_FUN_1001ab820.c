
void FUN_1001ab820(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  long *plVar5;
  QObject *pQVar6;
  int *piVar7;
  int *piVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  QWidget *pQVar12;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  int *local_100;
  Connection local_f8 [8];
  QArrayData *local_f0;
  QPixmap local_e8 [32];
  QArrayData *local_c8;
  Connection local_c0 [8];
  Data *local_b8;
  Data *local_b0;
  Data *local_a8;
  Data *local_a0;
  int local_98;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  QString local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  QString local_38;
  bool local_29;
  
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  cVar2 = FUN_1001a97c0(param_1);
  if (cVar2 == '\0') {
    return;
  }
  QApplication::topLevelWidgets();
  local_b0 = local_b8;
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 == 0) {
      QListData::detach((int)&local_b0);
      lVar10 = (long)*(int *)(local_b0 + 8);
      if ((local_b8 + (long)*(int *)(local_b8 + 8) * 8 != local_b0 + lVar10 * 8) &&
         (lVar11 = *(int *)(local_b0 + 0xc) - lVar10,
         lVar11 != 0 && lVar10 <= *(int *)(local_b0 + 0xc))) {
        _memcpy(local_b0 + lVar10 * 8 + 0x10,local_b8 + (long)*(int *)(local_b8 + 8) * 8 + 0x10,
                lVar11 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + 1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
    }
  }
  local_a8 = local_b0 + (long)*(int *)(local_b0 + 8) * 8 + 0x10;
  local_a0 = local_b0 + (long)*(int *)(local_b0 + 0xc) * 8 + 0x10;
  local_98 = 1;
  if (*(int *)local_b8 == -1) {
LAB_1001ab950:
    puVar1 = PTR_staticMetaObject_1021e1508;
    if (local_a8 != local_a0) {
      do {
        lVar10 = QMetaObject::cast((QObject *)puVar1);
        if (((lVar10 != 0) && ((*(byte *)(*(long *)(lVar10 + 0x28) + 9) & 0x80) != 0)) &&
           (iVar3 = QWidget::windowModality(), iVar3 == 2)) {
          QObject::connect(local_c0,lVar10,"2finished(int)",param_1,"1updateUsbDevices()",0x80);
          QMetaObject::Connection::~Connection(local_c0);
          if (*(int *)local_b0 == -1) {
            return;
          }
          if (*(int *)local_b0 != 0) {
            LOCK();
            *(int *)local_b0 = *(int *)local_b0 + -1;
            UNLOCK();
            if (*(int *)local_b0 != 0) {
              return;
            }
            local_29 = false;
          }
          QListData::dispose(local_b0);
          return;
        }
        local_a8 = local_a8 + 8;
        local_98 = 1;
      } while (local_a8 != local_a0);
    }
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        iVar3 = *(int *)local_b0;
        UNLOCK();
LAB_1001ab9f9:
        local_29 = iVar3 != 0;
        if (local_29) goto LAB_1001aba0b;
      }
LAB_1001aba06:
      QListData::dispose(local_b0);
    }
  }
  else {
    if (*(int *)local_b8 == 0) {
LAB_1001ab93e:
      QListData::dispose(local_b8);
    }
    else {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_29 = *(int *)local_b8 != 0;
      UNLOCK();
      if (!local_29) goto LAB_1001ab93e;
    }
    if (local_98 != 0) goto LAB_1001ab950;
    if (*(int *)local_b0 != -1) {
      if (*(int *)local_b0 != 0) {
        LOCK();
        *(int *)local_b0 = *(int *)local_b0 + -1;
        iVar3 = *(int *)local_b0;
        UNLOCK();
        goto LAB_1001ab9f9;
      }
      goto LAB_1001aba06;
    }
  }
LAB_1001aba0b:
  lVar10 = *(long *)(param_1 + 0x40);
  if (*(int *)(lVar10 + 8) < *(int *)(lVar10 + 0xc)) {
    local_c8 = *(QArrayData **)(lVar10 + 0x10 + (long)*(int *)(lVar10 + 8) * 8);
    if (1 < *(int *)local_c8 + 1U) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + 1;
      local_29 = *(int *)local_c8 != 0;
      UNLOCK();
    }
  }
  else {
    local_c8 = (QArrayData *)PTR_shared_null_1021e1288;
  }
  plVar5 = (long *)FUN_1001a9960(param_1,&local_c8);
  lVar10 = *(long *)(param_1 + 0x48);
  if (plVar5 == (long *)0x0) {
    if (lVar10 == 0) goto LAB_1001ac255;
  }
  else if (((lVar10 == 0) || (*(int *)(lVar10 + 4) == 0)) || (*(long *)(param_1 + 0x50) == 0)) {
    pQVar6 = operator_new(0x38);
    FUN_100382400(pQVar6,0);
    piVar7 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(pQVar6);
    piVar8 = *(int **)(param_1 + 0x48);
    if (piVar8 != piVar7) {
      if (piVar7 != (int *)0x0) {
        LOCK();
        *piVar7 = *piVar7 + 1;
        local_29 = *piVar7 != 0;
        UNLOCK();
        piVar8 = *(int **)(param_1 + 0x48);
      }
      if (piVar8 != (int *)0x0) {
        LOCK();
        *piVar8 = *piVar8 + -1;
        local_29 = *piVar8 != 0;
        UNLOCK();
        if ((!local_29) && (*(void **)(param_1 + 0x48) != (void *)0x0)) {
          operator_delete(*(void **)(param_1 + 0x48));
        }
      }
      *(int **)(param_1 + 0x48) = piVar7;
      *(QObject **)(param_1 + 0x50) = pQVar6;
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!local_29) {
        operator_delete(piVar7);
      }
    }
    QPixmap::QPixmap(local_e8);
    lVar10 = ___dynamic_cast(plVar5,PTR_typeinfo_1021e16d8,PTR_typeinfo_1021e1668,0);
    if (lVar10 != 0) {
      local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
      (**(code **)(*plVar5 + 0xb8))(&local_40,plVar5);
      cVar2 = FUN_1001b36b0(&local_40);
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          local_29 = *(int *)local_40 != 0;
          UNLOCK();
          if (local_29) goto LAB_1001abb8b;
        }
        QArrayData::deallocate(local_40,2,8);
      }
LAB_1001abb8b:
      if (cVar2 != '\0') {
        (**(code **)(*plVar5 + 0xb8))(&local_50,plVar5);
        FUN_1001b3760(&local_48,&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_29 = *(int *)local_50 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abbe3;
          }
          QArrayData::deallocate(local_50,2,8);
        }
LAB_1001abbe3:
        cVar2 = FUN_100da2a00(&local_48);
        if (cVar2 == '\0') {
          cVar2 = FUN_100da4850(&local_48);
          if (cVar2 != '\0') {
            local_60.field0_0x0 =
                 (QTypedArrayData<unsigned_short> *)
                 QString::fromAscii_helper(":/pixmaps/VirtualDisks/thunderbolt.png",0x26);
            QString::operator=(&local_38,&local_60);
            if (*(int *)local_60.field0_0x0 != -1) {
              if (*(int *)local_60.field0_0x0 != 0) {
                LOCK();
                *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
                local_29 = *(int *)local_60.field0_0x0 != 0;
                UNLOCK();
                if (local_29) goto LAB_1001abd59;
              }
              QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
            }
          }
        }
        else {
          local_58.field0_0x0 =
               (QTypedArrayData<unsigned_short> *)
               QString::fromAscii_helper(":/pixmaps/VirtualDisks/fireware.png",0x23);
          QString::operator=(&local_38,&local_58);
          if (*(int *)local_58.field0_0x0 != -1) {
            if (*(int *)local_58.field0_0x0 != 0) {
              LOCK();
              *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
              local_29 = *(int *)local_58.field0_0x0 != 0;
              UNLOCK();
              if (local_29) goto LAB_1001abd59;
            }
            QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
          }
        }
LAB_1001abd59:
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_29 = *(int *)local_48 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abd89;
          }
          QArrayData::deallocate(local_48,2,8);
        }
      }
LAB_1001abd89:
      if (*(int *)(local_38.field0_0x0 + 4) == 0) {
        local_70 = (QArrayData *)QString::fromAscii_helper(":/usb_device/%1.png",0x13);
        uVar4 = CHwUsbDevice::getUsbType();
        FUN_100da8850(&local_88,uVar4);
        QString::mid((int)&local_80,(int)&local_88);
        QString::toLower();
        QString::arg(&local_68,&local_70,&local_78,0,0x20);
        QString::operator=(&local_38,&local_68);
        if (*(int *)local_68.field0_0x0 != -1) {
          if (*(int *)local_68.field0_0x0 != 0) {
            LOCK();
            *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
            local_29 = *(int *)local_68.field0_0x0 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abe39;
          }
          QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
        }
LAB_1001abe39:
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_29 = *(int *)local_78 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abe69;
          }
          QArrayData::deallocate(local_78,2,8);
        }
LAB_1001abe69:
        if (*(int *)local_80 != -1) {
          if (*(int *)local_80 != 0) {
            LOCK();
            *(int *)local_80 = *(int *)local_80 + -1;
            local_29 = *(int *)local_80 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abe99;
          }
          QArrayData::deallocate(local_80,2,8);
        }
LAB_1001abe99:
        if (*(int *)local_88 != -1) {
          if (*(int *)local_88 != 0) {
            LOCK();
            *(int *)local_88 = *(int *)local_88 + -1;
            local_29 = *(int *)local_88 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abec9;
          }
          QArrayData::deallocate(local_88,2,8);
        }
LAB_1001abec9:
        if (*(int *)local_70 != -1) {
          if (*(int *)local_70 != 0) {
            LOCK();
            *(int *)local_70 = *(int *)local_70 + -1;
            local_29 = *(int *)local_70 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abef9;
          }
          QArrayData::deallocate(local_70,2,8);
        }
      }
LAB_1001abef9:
      cVar2 = QPixmap::load(local_e8,&local_38,0,0);
      if (cVar2 == '\0') {
        FUN_100df99c0("","prl_client_app",0,"can\'t find icon for usb device");
        local_90 = (QArrayData *)QString::fromAscii_helper(":/usb_device/other.png",0x16);
        QPixmap::load(local_e8,&local_90,0,0);
        if (*(int *)local_90 != -1) {
          if (*(int *)local_90 != 0) {
            LOCK();
            *(int *)local_90 = *(int *)local_90 + -1;
            local_29 = *(int *)local_90 != 0;
            UNLOCK();
            if (local_29) goto LAB_1001abf98;
          }
          QArrayData::deallocate(local_90,2,8);
        }
      }
LAB_1001abf98:
      if (*(int *)local_38.field0_0x0 != -1) {
        if (*(int *)local_38.field0_0x0 != 0) {
          LOCK();
          *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
          local_29 = *(int *)local_38.field0_0x0 != 0;
          UNLOCK();
          if (local_29) goto LAB_1001abfc8;
        }
        QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
      }
    }
LAB_1001abfc8:
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    (**(code **)(*plVar5 + 0xa8))(&local_f0,plVar5);
    FUN_100382690(uVar9,&local_c8,&local_f0,local_e8);
    if (*(int *)local_f0 != -1) {
      if (*(int *)local_f0 != 0) {
        LOCK();
        *(int *)local_f0 = *(int *)local_f0 + -1;
        local_29 = *(int *)local_f0 != 0;
        UNLOCK();
        if (local_29) goto LAB_1001ac04a;
      }
      QArrayData::deallocate(local_f0,2,8);
    }
LAB_1001ac04a:
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    QWidget::setAttribute(uVar9,0x37,1);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    QWidget::setWindowModality(uVar9,1);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    QObject::connect(local_f8,uVar9,"2vmSelected(QString,bool)",param_1,
                     "1onVmSelected(QString,bool)",0);
    QMetaObject::Connection::~Connection(local_f8);
    FUN_1001aa010(param_1);
    uVar9 = 0;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (uVar9 = 0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
      uVar9 = *(undefined8 *)(param_1 + 0x50);
    }
    local_108 = *(undefined8 *)(param_1 + 0x28);
    local_100 = *(int **)(param_1 + 0x30);
    if (local_100 != (int *)0x0) {
      LOCK();
      *local_100 = *local_100 + 1;
      UNLOCK();
      LOCK();
      piVar8 = local_100 + 1;
      *piVar8 = *piVar8 + 1;
      local_29 = *piVar8 != 0;
      UNLOCK();
    }
    local_120 = 0xffffffff;
    local_11c = 0xffffffff;
    local_110 = 0;
    local_118 = 0;
    FUN_1003825b0(uVar9,&local_108,&local_120);
    piVar8 = local_100;
    if (local_100 != (int *)0x0) {
      LOCK();
      piVar7 = local_100 + 1;
      *piVar7 = *piVar7 + -1;
      local_29 = *piVar7 != 0;
      UNLOCK();
      if (!local_29) {
        (**(code **)(local_100 + 2))(local_100);
      }
      LOCK();
      *piVar8 = *piVar8 + -1;
      local_29 = *piVar8 != 0;
      UNLOCK();
      if (!local_29) {
        operator_delete(piVar8);
      }
    }
    uVar9 = FUN_1001d50a0();
    FUN_1001d50d0(uVar9);
    FUN_1001e1740();
    QWidget::show();
    QWidget::raise();
    QWidget::activateWindow();
    cVar2 = MacUtils::isFrontProcess();
    if (cVar2 == '\0') {
      pQVar12 = (QWidget *)0x0;
      if ((*(long *)(param_1 + 0x48) != 0) &&
         (pQVar12 = (QWidget *)0x0, *(int *)(*(long *)(param_1 + 0x48) + 4) != 0)) {
        pQVar12 = *(QWidget **)(param_1 + 0x50);
      }
      QApplication::alert(pQVar12,0);
      MacUtils::bringProcessToFront();
    }
    QPixmap::~QPixmap(local_e8);
    goto LAB_1001ac255;
  }
  if (((*(int *)(lVar10 + 4) != 0) && (*(long *)(param_1 + 0x50) != 0)) &&
     ((*(byte *)(*(long *)(*(long *)(param_1 + 0x50) + 0x28) + 9) & 0x80) != 0)) {
    FUN_1001a9c70(param_1);
  }
LAB_1001ac255:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      UNLOCK();
      if (*(int *)local_c8 != 0) {
        return;
      }
      local_29 = false;
    }
    QArrayData::deallocate(local_c8,2,8);
  }
  return;
}



void FUN_10075d2b0(QObject *param_1,QObject *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  QString *pQVar8;
  QString *pQVar9;
  QString *pQVar10;
  QObject *pQVar11;
  long lVar12;
  long lVar13;
  QArrayData *local_d0;
  QArrayData *local_c8;
  QArrayData *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  _func_void_Node_ptr *local_98;
  Data *local_90;
  Data *local_88;
  Data *local_80;
  Data *local_78;
  int local_70;
  _func_void_Node_ptr *local_68;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  Data *local_48;
  int local_40;
  undefined1 local_31;
  
  lVar12 = *(long *)(param_1 + 0x18);
  pQVar11 = (QObject *)0x0;
  if ((lVar12 != 0) && (pQVar11 = (QObject *)0x0, *(int *)(lVar12 + 4) != 0)) {
    pQVar11 = *(QObject **)(param_1 + 0x20);
  }
  if (pQVar11 == param_2) {
    return;
  }
  if (((lVar12 != 0) && (*(int *)(lVar12 + 4) != 0)) && (*(long *)(param_1 + 0x20) != 0)) {
    FUN_100763790(&local_68);
    FUN_100761de0(&local_60);
    local_58 = local_60;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 == 0) {
        QListData::detach((int)&local_58);
        lVar12 = (long)*(int *)(local_58 + 8);
        if ((local_60 + (long)*(int *)(local_60 + 8) * 8 != local_58 + lVar12 * 8) &&
           (lVar13 = *(int *)(local_58 + 0xc) - lVar12,
           lVar13 != 0 && lVar12 <= *(int *)(local_58 + 0xc))) {
          _memcpy(local_58 + lVar12 * 8 + 0x10,local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10,
                  lVar13 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + 1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
      }
    }
    local_50 = local_58 + (long)*(int *)(local_58 + 8) * 8 + 0x10;
    local_48 = local_58 + (long)*(int *)(local_58 + 0xc) * 8 + 0x10;
    local_40 = 1;
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_31 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10075d3e1;
      }
      QListData::dispose(local_60);
    }
LAB_10075d3e1:
    if (*(int *)(local_68 + 0x10) != -1) {
      if (*(int *)(local_68 + 0x10) != 0) {
        LOCK();
        pcVar1 = local_68 + 0x10;
        *(int *)pcVar1 = *(int *)pcVar1 + -1;
        local_31 = *(int *)pcVar1 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10075d410;
      }
      QHashData::free_helper(local_68);
    }
LAB_10075d410:
    if (local_40 != 0) {
      for (; local_50 != local_48; local_50 = local_50 + 8) {
        QObject::disconnect(*(QObject **)local_50,(char *)0x0,param_1,(char *)0x0);
        local_40 = 1;
      }
    }
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_31 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10075d4aa;
      }
      QListData::dispose(local_58);
    }
  }
LAB_10075d4aa:
  piVar6 = (int *)0x0;
  if (param_2 != (QObject *)0x0) {
    piVar6 = (int *)QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  }
  piVar7 = *(int **)(param_1 + 0x18);
  if (piVar7 != piVar6) {
    if (piVar6 != (int *)0x0) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      local_31 = *piVar6 != 0;
      UNLOCK();
      piVar7 = *(int **)(param_1 + 0x18);
    }
    if (piVar7 != (int *)0x0) {
      LOCK();
      *piVar7 = *piVar7 + -1;
      local_31 = *piVar7 != 0;
      UNLOCK();
      if ((!(bool)local_31) && (*(void **)(param_1 + 0x18) != (void *)0x0)) {
        operator_delete(*(void **)(param_1 + 0x18));
      }
    }
    *(int **)(param_1 + 0x18) = piVar6;
    *(QObject **)(param_1 + 0x20) = param_2;
  }
  if (piVar6 != (int *)0x0) {
    LOCK();
    *piVar6 = *piVar6 + -1;
    local_31 = *piVar6 != 0;
    UNLOCK();
    if (!(bool)local_31) {
      operator_delete(piVar6);
    }
  }
  if (*(long *)(param_1 + 0x18) == 0) {
    return;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 4) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_100763790(&local_98);
  FUN_100761de0(&local_90,&local_98);
  local_88 = local_90;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 == 0) {
      QListData::detach((int)&local_88);
      lVar12 = (long)*(int *)(local_88 + 8);
      if ((local_90 + (long)*(int *)(local_90 + 8) * 8 != local_88 + lVar12 * 8) &&
         (lVar13 = *(int *)(local_88 + 0xc) - lVar12,
         lVar13 != 0 && lVar12 <= *(int *)(local_88 + 0xc))) {
        _memcpy(local_88 + lVar12 * 8 + 0x10,local_90 + (long)*(int *)(local_90 + 8) * 8 + 0x10,
                lVar13 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + 1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
    }
  }
  local_80 = local_88 + (long)*(int *)(local_88 + 8) * 8 + 0x10;
  local_78 = local_88 + (long)*(int *)(local_88 + 0xc) * 8 + 0x10;
  local_70 = 1;
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075d63f;
    }
    QListData::dispose(local_90);
  }
LAB_10075d63f:
  if (*(int *)(local_98 + 0x10) != -1) {
    if (*(int *)(local_98 + 0x10) != 0) {
      LOCK();
      pcVar1 = local_98 + 0x10;
      *(int *)pcVar1 = *(int *)pcVar1 + -1;
      local_31 = *(int *)pcVar1 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10075d674;
    }
    QHashData::free_helper(local_98);
  }
LAB_10075d674:
  if (local_70 != 0) {
    for (; local_80 != local_78; local_80 = local_80 + 8) {
      uVar2 = *(undefined8 *)local_80;
      uVar5 = FUN_100762f60(uVar2);
      pQVar8 = (QString *)FUN_10075dbe0(param_1,uVar5);
      uVar5 = FUN_100762f60(uVar2);
      pQVar9 = (QString *)FUN_10075ddb0(param_1,uVar5);
      uVar5 = FUN_100762f60(uVar2);
      pQVar10 = (QString *)FUN_10075d060(param_1,uVar5);
      QObject::connect(&local_a0,uVar2,"2titleChanged(QString)",pQVar8,"1setText(QString)",0);
      if (local_a0 == 0) {
        cVar3 = '\0';
      }
      else {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a0);
      QObject::connect(&local_a8,uVar2,"2descriptionChanged(QString)",pQVar9,"1setText(QString)",0);
      cVar4 = '\0';
      if ((local_a8 != 0) && (cVar3 == '\x01')) {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_a8);
      QObject::connect(&local_b0,uVar2,"2actionTitleChanged(QString)",param_1,
                       "1onActionTitleChanged(QString)",0);
      cVar3 = '\0';
      if ((local_b0 != 0) && (cVar4 == '\x01')) {
        cVar3 = QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b0);
      QObject::connect(&local_b8,uVar2,"2actionEnabledChanged(bool)",pQVar10,"1setEnabled(bool)",0);
      if ((local_b8 != 0) && (cVar3 == '\x01')) {
        QMetaObject::Connection::isConnected_helper();
      }
      QMetaObject::Connection::~Connection((Connection *)&local_b8);
      FUN_100762f70(&local_c0,uVar2);
      QLabel::setText(pQVar8);
      if (*(int *)local_c0 != -1) {
        if (*(int *)local_c0 != 0) {
          LOCK();
          *(int *)local_c0 = *(int *)local_c0 + -1;
          local_31 = *(int *)local_c0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10075d89a;
        }
        QArrayData::deallocate(local_c0,2,8);
      }
LAB_10075d89a:
      FUN_100762fa0(&local_c8,uVar2);
      QLabel::setText(pQVar9);
      if (*(int *)local_c8 != -1) {
        if (*(int *)local_c8 != 0) {
          LOCK();
          *(int *)local_c8 = *(int *)local_c8 + -1;
          local_31 = *(int *)local_c8 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10075d8f2;
        }
        QArrayData::deallocate(local_c8,2,8);
      }
LAB_10075d8f2:
      FUN_100762fd0(&local_d0,uVar2);
      QAbstractButton::setText(pQVar10);
      if (*(int *)local_d0 != -1) {
        if (*(int *)local_d0 != 0) {
          LOCK();
          *(int *)local_d0 = *(int *)local_d0 + -1;
          local_31 = *(int *)local_d0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10075d690;
        }
        QArrayData::deallocate(local_d0,2,8);
      }
LAB_10075d690:
      FUN_100763000(uVar2);
      QWidget::setEnabled(SUB81(pQVar10,0));
      local_70 = 1;
    }
  }
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      UNLOCK();
      if (*(int *)local_88 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_88);
  }
  return;
}


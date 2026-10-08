
QAction * FUN_10068e430(undefined8 *param_1,QObject *param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  undefined *puVar2;
  QArrayData *pQVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  QAction *this;
  long lVar7;
  QObject *this_00;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  undefined1 auVar11 [16];
  long local_d8;
  QArrayData *local_d0;
  QString local_c8;
  QVariant local_c0;
  QArrayData *local_b0;
  int *local_a8;
  int *local_a0;
  int *local_98;
  uint local_90;
  int *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  undefined1 local_70 [32];
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  undefined1 local_31;
  
  this = operator_new(0x10);
  QAction::text();
  QAction::QAction(this,&local_40,param_2);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068e4af;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10068e4af:
  if (3 < DAT_10230ffd0) {
    QAction::text();
    QString::toUtf8();
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",4,"Copy static properties for action %s",
                  local_48 + *(long *)(local_48 + 0x10));
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068e536;
      }
      QArrayData::deallocate(local_48,1,8);
    }
LAB_10068e536:
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068e566;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_10068e566:
  (**(code **)*param_1)(param_1);
  iVar5 = QMetaObject::propertyCount();
  if (1 < iVar5) {
    iVar5 = 1;
    do {
      QMetaObject::property((int)local_70);
      FUN_10068e130(this,param_1,local_70,param_3);
      iVar5 = iVar5 + 1;
      iVar6 = QMetaObject::propertyCount();
    } while (iVar5 < iVar6);
  }
  if (3 < DAT_10230ffd0) {
    QAction::text();
    QString::toUtf8();
    FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",4,"Copy dynamic properties for action %s",
                  local_78 + *(long *)(local_78 + 0x10));
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_31 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068e658;
      }
      QArrayData::deallocate(local_78,1,8);
    }
LAB_10068e658:
    if (*(int *)local_80 != -1) {
      if (*(int *)local_80 != 0) {
        LOCK();
        *(int *)local_80 = *(int *)local_80 + -1;
        local_31 = *(int *)local_80 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10068e688;
      }
      QArrayData::deallocate(local_80,2,8);
    }
  }
LAB_10068e688:
  QObject::dynamicPropertyNames();
  local_a8 = local_88;
  if (*local_88 != -1) {
    if (*local_88 == 0) {
      QListData::detach((int)&local_a8);
      iVar5 = local_a8[2];
      if (iVar5 != local_a8[3]) {
        local_88 = local_88 + (long)local_88[2] * 2 + 4;
        piVar9 = local_a8 + (long)iVar5 * 2 + 4;
        lVar7 = (long)local_a8[3] * 8 + (long)iVar5 * -8;
        do {
          piVar1 = *(int **)local_88;
          *(int **)piVar9 = piVar1;
          if (1 < *piVar1 + 1U) {
            LOCK();
            *piVar1 = *piVar1 + 1;
            local_31 = *piVar1 != 0;
            UNLOCK();
          }
          piVar9 = piVar9 + 2;
          local_88 = local_88 + 2;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
    else {
      LOCK();
      *local_88 = *local_88 + 1;
      local_31 = *local_88 != 0;
      UNLOCK();
    }
  }
  local_a0 = local_a8 + (long)local_a8[2] * 2 + 4;
  local_98 = local_a8 + (long)local_a8[3] * 2 + 4;
  local_90 = 1;
  if (local_a8[2] != local_a8[3]) {
    do {
      local_b0 = *(QArrayData **)local_a0;
      if (1 < *(uint *)local_b0 + 1) {
        LOCK();
        *(uint *)local_b0 = *(uint *)local_b0 + 1;
        local_31 = *(uint *)local_b0 != 0;
        UNLOCK();
      }
      if (local_90 != 0) {
        if (3 < DAT_10230ffd0) {
          FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",4,"%s",
                        local_b0 + *(long *)(local_b0 + 0x10));
        }
        if ((1 < *(uint *)local_b0) || (*(long *)(local_b0 + 0x10) != 0x18)) {
          QByteArray::reallocData
                    (&local_b0,*(uint *)(local_b0 + 4) + 1,*(uint *)(local_b0 + 8) >> 0x1f);
        }
        pQVar3 = local_b0;
        lVar7 = *(long *)(local_b0 + 0x10);
        QObject::property((char *)&local_c0);
        QObject::setProperty((char *)this,(QVariant *)(pQVar3 + lVar7));
        QVariant::~QVariant(&local_c0);
        local_90 = 0;
      }
      if (*(int *)local_b0 != -1) {
        if (*(int *)local_b0 != 0) {
          LOCK();
          *(int *)local_b0 = *(int *)local_b0 + -1;
          local_31 = *(int *)local_b0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10068e875;
        }
        QArrayData::deallocate(local_b0,1,8);
      }
LAB_10068e875:
      local_a0 = local_a0 + 2;
      uVar8 = local_90 ^ 1;
      bVar10 = local_90 != 1;
      local_90 = uVar8;
    } while ((bVar10) && (local_a0 != local_98));
  }
  FUN_1000ee530(&local_a8);
  FUN_100694760(&local_d0,param_1);
  QString::fromUtf8_helper((char *)&local_c8,0x1e05c52);
  QString::append(&local_c8);
  QObject::setObjectName((QString *)this);
  if (*(int *)local_c8.field0_0x0 != -1) {
    if (*(int *)local_c8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_c8.field0_0x0 = *(int *)local_c8.field0_0x0 + -1;
      local_31 = *(int *)local_c8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068e942;
    }
    QArrayData::deallocate((QArrayData *)local_c8.field0_0x0,2,8);
  }
LAB_10068e942:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_31 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10068e978;
    }
    QArrayData::deallocate(local_d0,2,8);
  }
LAB_10068e978:
  QAction::isSeparator();
  QAction::setSeparator(SUB81(this,0));
  if ((param_3 & 1) != 0) {
    QObject::connect(&local_d8,this,"2triggered()",param_1,"1trigger()",0);
    bVar4 = 1;
    if (local_d8 != 0) {
      bVar4 = QMetaObject::Connection::isConnected_helper();
      bVar4 = bVar4 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_d8);
    if (bVar4 != 0) {
      FUN_100df99c0("[ACTION_HELPERS]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]",
                    "connected","ActionManager/ActionHelpers.cpp",0xe0,"cloneAction");
    }
  }
  if (DAT_102310960 == (QObject *)0x0) {
    this_00 = operator_new(0x28);
    QObject::QObject(this_00,(QObject *)0x0);
    *(undefined ***)this_00 = &PTR_FUN_1021f5390;
    puVar2 = PTR_shared_null_1021e15d0;
    auVar11._8_4_ = (int)PTR_shared_null_1021e15d0;
    auVar11._0_8_ = PTR_shared_null_1021e15d0;
    auVar11._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
    *(undefined1 (*) [16])(this_00 + 0x10) = auVar11;
    *(undefined **)(this_00 + 0x20) = puVar2;
    DAT_102310960 = this_00;
  }
  FUN_10068d3d0(DAT_102310960,param_1,this,param_4,param_3);
  FUN_1000ee530(&local_88);
  return this;
}


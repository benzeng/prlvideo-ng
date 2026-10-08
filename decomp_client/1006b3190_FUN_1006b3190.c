
void FUN_1006b3190(QAction *param_1,QObject *param_2,long param_3,QString *param_4)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  Connection local_90 [8];
  QVariant local_88;
  Data *local_78;
  Data *local_70;
  Data *local_68;
  uint local_60;
  QArrayData *local_58;
  Data *local_50;
  Connection local_48 [8];
  QArrayData *local_40;
  undefined1 local_31;
  
  QAction::QAction(param_1,param_2);
  *(undefined ***)param_1 = &PTR_FUN_1022254d0;
  param_1[0x10] = (QAction)0x0;
  uVar1 = FUN_100370280();
  lVar2 = FUN_1003704b0(uVar1,param_4,DAT_100e152b8);
  if (lVar2 == 0) {
    lVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Error: can\'t create window action. Wrong window uuid was passed.");
  }
  else {
    FUN_10036d240(&local_40,lVar2);
    QAction::setText((QString *)param_1);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_31 = *(int *)local_40 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006b322f;
      }
      QArrayData::deallocate(local_40,2,8);
    }
LAB_1006b322f:
    QObject::connect(local_48,lVar2,"2windowMenuTitleChanged(const QString&)",param_1,
                     "1onWindowTitleUpdated(const QString&)",0);
    QMetaObject::Connection::~Connection(local_48);
    if ((param_3 != 0) && (lVar2 == param_3)) goto LAB_1006b3422;
  }
  local_58 = (QArrayData *)PTR_shared_null_1021e1288;
  local_50 = (Data *)PTR_shared_null_1021e15e8;
  qt_qFindChildren_helper(lVar2,&local_58,PTR_staticMetaObject_1021e1508,&local_50,1);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b32f7;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006b32f7:
  local_78 = local_50;
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 == 0) {
      QListData::detach((int)&local_78);
      lVar2 = (long)*(int *)(local_78 + 8);
      if ((local_50 + (long)*(int *)(local_50 + 8) * 8 != local_78 + lVar2 * 8) &&
         (lVar4 = *(int *)(local_78 + 0xc) - lVar2, lVar4 != 0 && lVar2 <= *(int *)(local_78 + 0xc))
         ) {
        _memcpy(local_78 + lVar2 * 8 + 0x10,local_50 + (long)*(int *)(local_50 + 8) * 8 + 0x10,
                lVar4 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + 1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
    }
  }
  local_70 = local_78 + (long)*(int *)(local_78 + 8) * 8 + 0x10;
  local_68 = local_78 + (long)*(int *)(local_78 + 0xc) * 8 + 0x10;
  local_60 = 1;
  while (uVar3 = local_60, local_70 != local_68) {
    while ((uVar3 == 0 || (*(long *)local_70 != param_3))) {
      local_70 = local_70 + 8;
      local_60 = 1;
      uVar3 = 1;
      if (local_68 == local_70) goto LAB_1006b33da;
    }
    local_70 = local_70 + 8;
    local_60 = uVar3 ^ 1;
    if (uVar3 == 1) break;
  }
LAB_1006b33da:
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_31 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b33fc;
    }
    QListData::dispose(local_78);
  }
LAB_1006b33fc:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006b3422;
    }
    QListData::dispose(local_50);
  }
LAB_1006b3422:
  QVariant::QVariant(&local_88,param_4);
  QAction::setData((QVariant *)param_1);
  QVariant::~QVariant(&local_88);
  QAction::setCheckable(SUB81(param_1,0));
  QAction::setChecked(SUB81(param_1,0));
  QObject::connect(local_90,param_1,"2triggered()",param_1,"1onShowWindow()",2);
  QMetaObject::Connection::~Connection(local_90);
  return;
}


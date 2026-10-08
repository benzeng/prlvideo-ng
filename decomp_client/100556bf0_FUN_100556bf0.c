
void FUN_100556bf0(long param_1,int param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *plVar4;
  QKeySequence *this;
  QKeySequence local_e0 [8];
  QKeySequence local_d8 [16];
  undefined1 local_c8 [24];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  QKeySequence local_98 [8];
  QKeySequence local_90 [16];
  QVariant local_80;
  QKeySequence local_70 [8];
  QKeySequence local_68 [16];
  QKeySequence local_58 [8];
  QKeySequence local_50 [16];
  QVariant local_40;
  
  QObject::sender();
  lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_10221cc70);
  if ((param_2 != 0) && (lVar3 != 0)) {
    QObject::property((char *)&local_40);
    QVariant::~QVariant(&local_40);
    lVar1 = param_1 + 0x20;
    if ((local_40.field0_0x0.field1_0x8.bitField0_30 & 0x3fffffff) == 0) {
      FUN_1005870a0(local_98,lVar3);
      if (*(long *)(param_1 + 0x30) == 0) {
        local_b0 = 0xffffffff;
        local_ac = 0xffffffff;
        local_a0 = 0;
        local_a8 = 0;
      }
      else {
        FUN_100559c70(*(long *)(param_1 + 0x30) + 0x10,local_98);
        QAbstractItemModel::beginResetModel();
        QAbstractItemModel::endResetModel();
        FUN_100552350(&local_b0,lVar1,local_98);
      }
      QKeySequence::~QKeySequence(local_90);
      this = local_98;
    }
    else {
      FUN_1005870a0(local_58,lVar3);
      QObject::property((char *)&local_80);
      FUN_10055a180(local_70,&local_80);
      FUN_1005529c0(lVar1,local_58,local_70);
      QKeySequence::~QKeySequence(local_68);
      QKeySequence::~QKeySequence(local_70);
      QVariant::~QVariant(&local_80);
      QKeySequence::~QKeySequence(local_50);
      this = local_58;
    }
    QKeySequence::~QKeySequence(this);
    FUN_10083d2c0(*(undefined8 *)(param_1 + 0x10));
    plVar4 = (long *)QAbstractItemView::selectionModel();
    pcVar2 = *(code **)(*plVar4 + 0x60);
    FUN_1005870a0(local_e0,lVar3);
    FUN_100552350(local_c8,lVar1,local_e0);
    (*pcVar2)(plVar4,local_c8,0x22);
    QKeySequence::~QKeySequence(local_d8);
    QKeySequence::~QKeySequence(local_e0);
  }
  return;
}


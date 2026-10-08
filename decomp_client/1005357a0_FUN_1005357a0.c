
void FUN_1005357a0(undefined8 param_1,undefined8 param_2,long *param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  QVariant local_148;
  QVariant local_138;
  QVariant local_128;
  QString local_118;
  QVariant local_110;
  QString local_100;
  QVariant local_f8;
  QString local_e8;
  QString local_e0;
  QString *local_d8;
  char *local_d0;
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
  QString *local_58;
  char *local_50;
  long local_48;
  char *local_40;
  undefined1 local_31;
  
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15c8);
  if (lVar4 == 0) {
    return;
  }
  iVar3 = QComboBox::currentIndex();
  if (iVar3 == -1) {
    return;
  }
  QComboBox::itemText((int)&local_e0);
  QComboBox::itemData((int)&local_f8,(int)lVar4);
  QVariant::toString();
  QVariant::~QVariant(&local_f8);
  (**(code **)(*param_3 + 0x90))(&local_110,param_3,param_4,0x100);
  QVariant::toString();
  QVariant::~QVariant(&local_110);
  (**(code **)(*param_3 + 0x90))(&local_128,param_3,param_4,0);
  QVariant::toString();
  QVariant::~QVariant(&local_128);
  cVar2 = operator==(&local_118,&local_e0);
  if ((cVar2 == '\0') || (cVar2 = operator==(&local_100,&local_e8), cVar2 == '\0')) {
    pcVar1 = *(code **)(*param_3 + 0x98);
    QVariant::QVariant(&local_138,&local_e0);
    (*pcVar1)(param_3,param_4,&local_138,0);
    QVariant::~QVariant(&local_138);
    pcVar1 = *(code **)(*param_3 + 0x98);
    QVariant::QVariant(&local_148,&local_e8);
    (*pcVar1)(param_3,param_4,&local_148,0x100);
    QVariant::~QVariant(&local_148);
    if (*(int *)(param_4 + 4) == 1) {
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
      local_d0 = "QString";
      local_40 = "QModelIndex";
      local_50 = "QString";
      local_d8 = &local_118;
      local_58 = &local_100;
      local_48 = param_4;
      QMetaObject::invokeMethod
                (param_1,"userChooseConnectTo",0,0,0,param_6,param_4,"QModelIndex",&local_100,
                 "QString",&local_118,"QString",0,0,0,0,0,0,0,0,0,0,0,0,0,0);
    }
  }
  if (*(int *)local_118.field0_0x0 != -1) {
    if (*(int *)local_118.field0_0x0 != 0) {
      LOCK();
      *(int *)local_118.field0_0x0 = *(int *)local_118.field0_0x0 + -1;
      local_31 = *(int *)local_118.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100535af2;
    }
    QArrayData::deallocate((QArrayData *)local_118.field0_0x0,2,8);
  }
LAB_100535af2:
  if (*(int *)local_100.field0_0x0 != -1) {
    if (*(int *)local_100.field0_0x0 != 0) {
      LOCK();
      *(int *)local_100.field0_0x0 = *(int *)local_100.field0_0x0 + -1;
      local_31 = *(int *)local_100.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100535b28;
    }
    QArrayData::deallocate((QArrayData *)local_100.field0_0x0,2,8);
  }
LAB_100535b28:
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_31 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100535b5e;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_100535b5e:
  if (*(int *)local_e0.field0_0x0 != -1) {
    if (*(int *)local_e0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e0.field0_0x0 = *(int *)local_e0.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_e0.field0_0x0 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_e0.field0_0x0,2,8);
  }
  return;
}


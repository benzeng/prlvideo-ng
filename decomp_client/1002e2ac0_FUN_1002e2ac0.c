
byte FUN_1002e2ac0(long param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  bool bVar6;
  QVariant local_d8;
  QVariant local_c8;
  QArrayData *local_b8;
  QString local_b0;
  QVariant local_a8;
  QVariant local_98;
  QVariant local_88;
  QVariant local_78;
  QVariant local_68;
  QVariant local_58;
  QVariant local_48;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001554a0(uVar4);
  if (lVar5 == 0) {
    return false;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x1c) == 0) {
    return false;
  }
  uVar4 = FUN_100152280();
  uVar4 = FUN_1001554a0(uVar4);
  uVar4 = FUN_10016f500(uVar4);
  if (*(int *)(*(long *)(param_1 + 0x18) + 8) == 0x65) {
    cVar1 = FUN_10061b4d0(uVar4,0x20);
    if (cVar1 != '\0') {
      FUN_10061abe0(&local_48,uVar4,0);
      iVar3 = QVariant::toInt((bool *)&local_48);
      bVar6 = true;
      if (iVar3 != 0) {
        FUN_10061abe0(&local_58,uVar4,0);
        iVar3 = QVariant::toInt((bool *)&local_58);
        bVar6 = true;
        if (iVar3 != -0x7ffeefa8) {
          FUN_10061abe0(&local_68,uVar4,0);
          iVar3 = QVariant::toInt((bool *)&local_68);
          bVar6 = true;
          if (iVar3 != -0x7ffeefff) {
            FUN_10061abe0(&local_78,uVar4,0);
            iVar3 = QVariant::toInt((bool *)&local_78);
            bVar6 = true;
            if (iVar3 != -0x7ffeef8c) {
              FUN_10061abe0(&local_88,uVar4,0);
              iVar3 = QVariant::toInt((bool *)&local_88);
              bVar6 = true;
              if (iVar3 != -0x7ffeef89) {
                FUN_10061abe0(&local_98,uVar4,0);
                iVar3 = QVariant::toInt((bool *)&local_98);
                bVar6 = iVar3 == -0x7ffeef9b;
                QVariant::~QVariant(&local_98);
              }
              QVariant::~QVariant(&local_88);
            }
            QVariant::~QVariant(&local_78);
          }
          QVariant::~QVariant(&local_68);
        }
        QVariant::~QVariant(&local_58);
      }
      QVariant::~QVariant(&local_48);
      return bVar6;
    }
    return false;
  }
  cVar1 = FUN_10061b500(uVar4);
  if (cVar1 != '\0') {
    return false;
  }
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x24) != 0) {
    return false;
  }
  if ((*(char *)(param_1 + 0x28) != '\0') && (1 < *(int *)(*(long *)(param_1 + 0x18) + 8) - 3U)) {
    return true;
  }
  QSettings::QSettings((QSettings *)&local_a8,(QObject *)0x0);
  FUN_10077f090(&local_b8,*(undefined4 *)(*(long *)(param_1 + 0x18) + 8));
  local_b0.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_b8;
  if (1 < *(int *)local_b8 + 1U) {
    LOCK();
    *(int *)local_b8 = *(int *)local_b8 + 1;
    local_21 = *(int *)local_b8 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_38,0x1e2468c);
  QString::append(&local_b0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e2d37;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002e2d37:
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e2d6d;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_1002e2d6d:
  QString::append(&local_b0);
  QString::fromUtf8_helper((char *)&local_30,0x1de5937);
  QString::append(&local_b0);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e2dd2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002e2dd2:
  QVariant::QVariant(&local_d8,0);
  QSettings::value((QString *)&local_c8,&local_a8);
  bVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_c8);
  QVariant::~QVariant(&local_d8);
  if (*(int *)local_b0.field0_0x0 != -1) {
    if (*(int *)local_b0.field0_0x0 != 0) {
      LOCK();
      *(int *)local_b0.field0_0x0 = *(int *)local_b0.field0_0x0 + -1;
      local_21 = *(int *)local_b0.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002e2e5d;
    }
    QArrayData::deallocate((QArrayData *)local_b0.field0_0x0,2,8);
  }
LAB_1002e2e5d:
  QSettings::~QSettings((QSettings *)&local_a8);
  return bVar2 ^ 1;
}


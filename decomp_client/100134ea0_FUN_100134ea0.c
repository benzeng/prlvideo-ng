
bool FUN_100134ea0(undefined8 param_1,uint param_2,long param_3,char param_4)

{
  QVariant *pQVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  bool bVar9;
  QVariant local_100;
  QVariant local_f0;
  QVariant local_e0;
  QVariant local_d0;
  QVariant local_c0;
  QVariant local_b0;
  QVariant local_a0;
  QVariant local_90;
  QVariant local_80;
  QVariant local_70;
  Data *local_60;
  Data *local_58;
  Data *local_50;
  undefined4 local_48;
  Data *local_40;
  undefined1 local_31;
  
  if (param_3 == 0) {
    return false;
  }
  WidgetUtils::getAllWidgetActionsRecursive((QWidget *)&local_40,SUB81(param_3,0));
  local_60 = local_40;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 == 0) {
      QListData::detach((int)&local_60);
      lVar6 = (long)*(int *)(local_60 + 8);
      if ((local_40 + (long)*(int *)(local_40 + 8) * 8 != local_60 + lVar6 * 8) &&
         (lVar7 = *(int *)(local_60 + 0xc) - lVar6, lVar7 != 0 && lVar6 <= *(int *)(local_60 + 0xc))
         ) {
        _memcpy(local_60 + lVar6 * 8 + 0x10,local_40 + (long)*(int *)(local_40 + 8) * 8 + 0x10,
                lVar7 * 8);
      }
    }
    else {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + 1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
    }
  }
  local_58 = local_60 + (long)*(int *)(local_60 + 8) * 8 + 0x10;
  local_50 = local_60 + (long)*(int *)(local_60 + 0xc) * 8 + 0x10;
  local_48 = 1;
  iVar5 = 2;
  if (*(int *)(local_60 + 8) != *(int *)(local_60 + 0xc)) {
    do {
      local_48 = 1;
      pQVar1 = *(QVariant **)local_58;
      QObject::property((char *)&local_70);
      cVar3 = QVariant::toBool();
      QVariant::~QVariant(&local_70);
      bVar8 = SUB81(pQVar1,0);
      if (cVar3 == '\0') {
        if ((param_2 & 0xffffff00) == 0x700) {
          QAction::data();
          uVar4 = QVariant::toUInt((bool *)&local_90);
          QVariant::~QVariant(&local_90);
          if ((uVar4 & 0xffffff00) == 0x700) {
            QVariant::QVariant(&local_a0,param_2);
            QAction::setData(pQVar1);
            QVariant::~QVariant(&local_a0);
            iVar5 = 1;
            QAction::setChecked(bVar8);
            goto LAB_100135243;
          }
        }
        if (param_2 == 0xaff || param_2 - 0xa01 < 9) {
          QAction::data();
          uVar4 = QVariant::toUInt((bool *)&local_b0);
          if (uVar4 < 0xa01) {
            bVar2 = false;
LAB_1001350ca:
            QAction::data();
            iVar5 = QVariant::toUInt((bool *)&local_d0);
            bVar9 = iVar5 == 0xaff;
            QVariant::~QVariant(&local_d0);
            if (bVar2) goto LAB_1001350f4;
          }
          else {
            QAction::data();
            uVar4 = QVariant::toUInt((bool *)&local_c0);
            bVar2 = true;
            bVar9 = true;
            if (0xa09 < uVar4) goto LAB_1001350ca;
LAB_1001350f4:
            QVariant::~QVariant(&local_c0);
          }
          QVariant::~QVariant(&local_b0);
          if (bVar9) {
            QVariant::QVariant(&local_e0,param_2);
            QAction::setData(pQVar1);
            QVariant::~QVariant(&local_e0);
            iVar5 = 1;
            QAction::setChecked(bVar8);
            goto LAB_100135243;
          }
        }
        QAction::data();
        QVariant::QVariant(&local_100,param_2);
        cVar3 = QVariant::cmp(&local_f0);
        QVariant::~QVariant(&local_100);
        QVariant::~QVariant(&local_f0);
        if (cVar3 != '\0') {
          iVar5 = 1;
          QAction::setChecked(bVar8);
          goto LAB_100135243;
        }
      }
      else {
        QVariant::QVariant(&local_80,param_2);
        QAction::setData(pQVar1);
        QVariant::~QVariant(&local_80);
        if (param_4 != '\0') {
          iVar5 = 1;
          QAction::setChecked(bVar8);
          goto LAB_100135243;
        }
      }
      local_58 = local_58 + 8;
      local_48 = 1;
    } while (local_58 != local_50);
    iVar5 = 2;
  }
LAB_100135243:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100135269;
    }
    QListData::dispose(local_60);
  }
LAB_100135269:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar5 != 2;
      }
      local_31 = 0;
    }
    QListData::dispose(local_40);
  }
  return iVar5 != 2;
}


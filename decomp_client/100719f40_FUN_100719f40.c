
bool FUN_100719f40(QString *param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  long lVar5;
  int *piVar6;
  QVariant local_98;
  QVariant local_88;
  QString local_78;
  QArrayData *local_70;
  int *local_68;
  int *local_60;
  int *local_58;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)
             QString::fromAscii_helper("User Preferences/Keyboard/Profile Assigns",0x29);
  QSettings::beginGroup((QString *)&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100719fbf;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100719fbf:
  QSettings::childKeys();
  FUN_100094f70(param_2);
  local_68 = local_58;
  if (*local_58 != -1) {
    if (*local_58 == 0) {
      QListData::detach((int)&local_68);
      iVar1 = local_68[2];
      if (iVar1 != local_68[3]) {
        local_58 = local_58 + (long)local_58[2] * 2 + 4;
        piVar6 = local_68 + (long)iVar1 * 2 + 4;
        lVar5 = (long)local_68[3] * 8 + (long)iVar1 * -8;
        do {
          piVar3 = *(int **)local_58;
          *(int **)piVar6 = piVar3;
          if (1 < *piVar3 + 1U) {
            LOCK();
            *piVar3 = *piVar3 + 1;
            local_31 = *piVar3 != 0;
            UNLOCK();
          }
          piVar6 = piVar6 + 2;
          local_58 = local_58 + 2;
          lVar5 = lVar5 + -8;
        } while (lVar5 != 0);
      }
    }
    else {
      LOCK();
      *local_58 = *local_58 + 1;
      local_31 = *local_58 != 0;
      UNLOCK();
    }
  }
  local_60 = local_68 + (long)local_68[2] * 2 + 4;
  if (local_68[2] != local_68[3]) {
    do {
      local_70 = *(QArrayData **)local_60;
      if (1 < *(int *)local_70 + 1U) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + 1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
      }
      local_60 = local_60 + 2;
      QVariant::QVariant(&local_98,"");
      QSettings::value((QString *)&local_88,&local_48);
      QVariant::toString();
      cVar4 = operator==(&local_78,param_1);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_31 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10071a11e;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_10071a11e:
      QVariant::~QVariant(&local_88);
      QVariant::~QVariant(&local_98);
      if (cVar4 != '\0') {
        FUN_1000341d0(param_2,&local_70);
      }
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10071a172;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_10071a172:
    } while (local_60 != local_68 + (long)local_68[3] * 2 + 4);
  }
  QSettings::endGroup();
  iVar1 = *(int *)(*param_2 + 8);
  iVar2 = *(int *)(*param_2 + 0xc);
  FUN_100039a80(&local_68);
  FUN_100039a80(&local_58);
  QSettings::~QSettings((QSettings *)&local_48);
  return iVar2 != iVar1;
}


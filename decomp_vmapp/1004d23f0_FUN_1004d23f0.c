
void FUN_1004d23f0(undefined8 param_1,undefined8 param_2,QString *param_3)

{
  long *plVar1;
  QArrayData *pQVar2;
  long lVar3;
  char cVar4;
  QString local_88;
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QArrayData *local_60;
  long *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  pQVar2 = (QArrayData *)param_3->field0_0x0;
  param_3->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      local_29 = *(int *)pQVar2 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d243f;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1004d243f:
  local_38 = (QArrayData *)QString::fromAscii_helper("\\\\Mac\\",6);
  cVar4 = QString::startsWith(param_2,&local_38,1);
  if (cVar4 == '\0') goto LAB_1004d2734;
  local_48 = (QArrayData *)QString::fromAscii_helper("([^<:>/\\|\\\"\\\\]+)(.*)",0x14);
  QRegExp::QRegExp((QRegExp *)&local_40,&local_48,1,0);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d24c6;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1004d24c6:
  QString::mid((int)&local_50,(int)param_2);
  cVar4 = QRegExp::exactMatch(&local_40);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004d251d;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1004d251d:
  if (cVar4 != '\0') {
    QRegExp::cap((int)&local_60);
    FUN_1004ceb50(&local_58,param_1,&local_60);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004d2577;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_1004d2577:
    if (local_58 != (long *)0x0) {
      QRegExp::cap((int)&local_70);
      QString::mid((int)&local_68,(int)&local_70);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_29 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004d25dd;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_1004d25dd:
      FUN_1004cf4e0(local_58,&local_68);
      QString::QString(&local_88,0x2f);
      local_80.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_58[3];
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_80);
      local_78.field0_0x0 = local_80.field0_0x0;
      if (1 < *(int *)local_80.field0_0x0 + 1U) {
        LOCK();
        *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + 1;
        local_29 = *(int *)local_80.field0_0x0 != 0;
        UNLOCK();
      }
      QString::append(&local_78);
      QString::operator=(param_3,&local_78);
      if (*(int *)local_78.field0_0x0 != -1) {
        if (*(int *)local_78.field0_0x0 != 0) {
          LOCK();
          *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
          local_29 = *(int *)local_78.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004d267f;
        }
        QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
      }
LAB_1004d267f:
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_29 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004d26af;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_1004d26af:
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_29 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004d26df;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_1004d26df:
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_29 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1004d270f;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_1004d270f:
      LOCK();
      plVar1 = local_58 + 1;
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)(*local_58 + 0x10))(local_58);
      }
    }
  }
  QRegExp::~QRegExp((QRegExp *)&local_40);
LAB_1004d2734:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}


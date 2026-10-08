
QString * FUN_100758ff0(QString *param_1,undefined8 *param_2)

{
  QTypedArrayData<unsigned_short> *pQVar1;
  char cVar2;
  QString *pQVar3;
  long lVar4;
  QArrayData *local_78;
  QArrayData *local_70;
  QFileInfo local_68 [8];
  QString local_60;
  QFileInfo local_58 [8];
  QArrayData *local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  pQVar1 = (QTypedArrayData<unsigned_short> *)*param_2;
  param_1->field0_0x0 = pQVar1;
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    local_31 = *(int *)pQVar1 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_48,0x1e2468c);
  QString::append(&local_48);
  QMetaObject::tr((char *)&local_50,PTR_staticMetaObject_1021e1520,0x1e14eef);
  local_40.field0_0x0 = local_48.field0_0x0;
  if (1 < *(int *)local_48.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + 1;
    local_31 = *(int *)local_48.field0_0x0 != 0;
    UNLOCK();
  }
  QString::append(&local_40);
  QString::append(param_1);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_31 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007590c2;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_1007590c2:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007590f2;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1007590f2:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      local_31 = *(int *)local_48.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100759122;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
LAB_100759122:
  QFileInfo::QFileInfo(local_58,param_1);
  cVar2 = QFileInfo::exists();
  QFileInfo::~QFileInfo(local_58);
  if (cVar2 != '\0') {
    local_60.field0_0x0 = param_1->field0_0x0;
    if (1 < *(int *)local_60.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
    }
    lVar4 = 0;
    do {
      QFileInfo::QFileInfo(local_68,&local_60);
      cVar2 = QFileInfo::exists();
      QFileInfo::~QFileInfo(local_68);
      if (cVar2 == '\0') break;
      local_78 = (QArrayData *)QString::fromAscii_helper(" %1",3);
      lVar4 = lVar4 + 1;
      QString::arg(&local_70,&local_78,lVar4,0,10,0x20);
      pQVar3 = (QString *)QString::append(param_1);
      QString::operator=(&local_60,pQVar3);
      if (*(int *)local_70 != -1) {
        if (*(int *)local_70 != 0) {
          LOCK();
          *(int *)local_70 = *(int *)local_70 + -1;
          local_31 = *(int *)local_70 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759223;
        }
        QArrayData::deallocate(local_70,2,8);
      }
LAB_100759223:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_31 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_100759253;
        }
        QArrayData::deallocate(local_78,2,8);
      }
LAB_100759253:
    } while (lVar4 < 10000);
    QString::operator=(param_1,&local_60);
    if (*(int *)local_60.field0_0x0 != -1) {
      if (*(int *)local_60.field0_0x0 != 0) {
        LOCK();
        *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_60.field0_0x0 != 0) {
          return param_1;
        }
        local_31 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
    }
  }
  return param_1;
}


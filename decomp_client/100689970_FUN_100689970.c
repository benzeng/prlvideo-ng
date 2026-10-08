
void FUN_100689970(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  QTextStream *pQVar2;
  char cVar3;
  undefined4 uVar4;
  CTaskSendHttpRequest *pCVar5;
  CRegistrationXmlResponseParser *this;
  long local_170;
  QArrayData *local_168;
  QString local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 local_14c;
  undefined4 local_144;
  char *local_140;
  QTextStream *local_138;
  undefined4 local_130;
  undefined8 local_12c;
  undefined8 local_124;
  undefined4 local_11c;
  char *local_118;
  QTextStream *local_110;
  QDebug local_108 [8];
  QDebug local_100 [8];
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  char *local_e0;
  QTextStream *local_d8;
  Data_conflict local_d0;
  undefined4 local_c8;
  QArrayData *local_c0;
  QVariant local_b8;
  QVariant local_a8;
  QArrayData *local_98;
  int *local_90;
  QVariant local_88;
  int *local_78;
  QVariant local_70;
  int *local_60;
  int *local_58;
  QString local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  FUN_10084c4a0();
  local_58 = (int *)PTR_shared_null_1021e15e8;
  FUN_10061abe0(&local_70,param_2,5);
  FUN_10024fb10(&local_60,&local_70);
  FUN_10024f800(&local_58,&local_60);
  if (*local_60 != -1) {
    if (*local_60 != 0) {
      LOCK();
      *local_60 = *local_60 + -1;
      local_31 = *local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006899f2;
    }
    FUN_1001c45d0(&local_60,local_60);
  }
LAB_1006899f2:
  QVariant::~QVariant(&local_70);
  FUN_10061abe0(&local_88,param_2,0xb);
  uVar4 = QVariant::toInt((bool *)&local_88);
  WebUtils::productInfo(&local_78,uVar4);
  FUN_10024f800(&local_58,&local_78);
  if (*local_78 != -1) {
    if (*local_78 != 0) {
      LOCK();
      *local_78 = *local_78 + -1;
      local_31 = *local_78 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689a59;
    }
    FUN_1001c45d0(&local_78,local_78);
  }
LAB_100689a59:
  QVariant::~QVariant(&local_88);
  RegistrationInfo::createQueryItems();
  FUN_10024f800(&local_58,&local_90);
  if (*local_90 != -1) {
    if (*local_90 != 0) {
      LOCK();
      *local_90 = *local_90 + -1;
      local_31 = *local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689ab4;
    }
    FUN_1001c45d0(&local_90,local_90);
  }
LAB_100689ab4:
  local_98 = (QArrayData *)
             QString::fromAscii_helper
                       ("https://registration.parallels.com/license/registrationPD6",0x3a);
  QSettings::QSettings((QSettings *)&local_b8,(QObject *)0x0);
  local_c0 = (QArrayData *)QString::fromAscii_helper("Registration Debug",0x12);
  local_c8 = 0x80000000;
  local_d0.field7 = 0;
  QSettings::value((QString *)&local_a8,&local_b8);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_a8);
  QVariant::~QVariant((QVariant *)&local_d0);
  if (*(int *)local_c0 != -1) {
    if (*(int *)local_c0 != 0) {
      LOCK();
      *(int *)local_c0 = *(int *)local_c0 + -1;
      local_31 = *(int *)local_c0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689b84;
    }
    QArrayData::deallocate(local_c0,2,8);
  }
LAB_100689b84:
  QSettings::~QSettings((QSettings *)&local_b8);
  if (cVar3 != '\0') {
    local_f8 = 2;
    local_e4 = 0;
    local_ec = 0;
    local_f4 = 0;
    local_e0 = "default";
    QMessageLogger::critical();
    pQVar2 = local_d8;
    QString::fromUtf8_helper((char *)&local_50,0x1e0da60);
    QTextStream::operator<<(pQVar2,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_31 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100689c3b;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_100689c3b:
    if (local_d8[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(local_d8,' ');
    }
    QDebug::~QDebug((QDebug *)&local_d8);
    local_130 = 2;
    local_11c = 0;
    local_124 = 0;
    local_12c = 0;
    local_118 = "default";
    QMessageLogger::critical();
    QDebug::putString((QChar *)&local_110,(ulong)(local_98 + *(long *)(local_98 + 0x10)));
    if (local_110[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(local_110,' ');
    }
    pQVar2 = local_110;
    QString::fromUtf8_helper((char *)&local_48,0x1eeaa60);
    QTextStream::operator<<(pQVar2,&local_48);
    if (*(int *)local_48.field0_0x0 != -1) {
      if (*(int *)local_48.field0_0x0 != 0) {
        LOCK();
        *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
        local_31 = *(int *)local_48.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100689d31;
      }
      QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
    }
LAB_100689d31:
    if (local_110[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(local_110,' ');
    }
    *(int *)(local_110 + 0x18) = *(int *)(local_110 + 0x18) + 1;
    FUN_10068ce40(local_100,local_108,&local_58);
    QDebug::~QDebug(local_100);
    QDebug::~QDebug(local_108);
    QDebug::~QDebug((QDebug *)&local_110);
    local_158 = 2;
    local_144 = 0;
    local_14c = 0;
    local_154 = 0;
    local_140 = "default";
    QMessageLogger::critical();
    pQVar2 = local_138;
    QString::fromUtf8_helper((char *)&local_40,0x1e0da89);
    QTextStream::operator<<(pQVar2,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_31 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_100689e30;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_100689e30:
    if (local_138[0x20] != (QTextStream)0x0) {
      QTextStream::operator<<(local_138,' ');
    }
    QDebug::~QDebug((QDebug *)&local_138);
  }
  pCVar5 = operator_new(0x48);
  this = operator_new(0x30);
  puVar1 = PTR_shared_null_1021e1288;
  local_160.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  CRegistrationXmlResponseParser::CRegistrationXmlResponseParser(this,&local_160);
  local_168 = (QArrayData *)puVar1;
  CTaskSendHttpRequest::CTaskSendHttpRequest(pCVar5,&local_98,&local_58,this,2,&local_168);
  if (*(int *)local_168 != -1) {
    if (*(int *)local_168 != 0) {
      LOCK();
      *(int *)local_168 = *(int *)local_168 + -1;
      local_31 = *(int *)local_168 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689ef0;
    }
    QArrayData::deallocate(local_168,1,8);
  }
LAB_100689ef0:
  if (*(int *)local_160.field0_0x0 != -1) {
    if (*(int *)local_160.field0_0x0 != 0) {
      LOCK();
      *(int *)local_160.field0_0x0 = *(int *)local_160.field0_0x0 + -1;
      local_31 = *(int *)local_160.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689f26;
    }
    QArrayData::deallocate((QArrayData *)local_160.field0_0x0,2,8);
  }
LAB_100689f26:
  QObject::connect(&local_170,pCVar5,"2taskFinished(PRL_RESULT)",param_1,
                   "1onUpdateAccountInfoFinished(PRL_RESULT)",0);
  if (local_170 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_170);
  CAbstractTask::execute();
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_31 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100689fa9;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_100689fa9:
  if (*local_58 != -1) {
    if (*local_58 != 0) {
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 != 0) {
        return;
      }
      local_31 = 0;
    }
    FUN_1001c45d0(&local_58,local_58);
  }
  return;
}


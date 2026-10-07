
undefined1 FUN_1004c5020(undefined8 *param_1)

{
  char *pcVar1;
  QArrayData *pQVar2;
  QString QVar3;
  char cVar4;
  size_t sVar5;
  undefined1 uVar6;
  int iVar7;
  undefined1 auVar8 [16];
  QVariant local_c0 [16];
  QArrayData *local_b0;
  QString local_a8;
  QVariant local_a0 [16];
  QArrayData *local_90;
  QSqlDatabase local_88 [8];
  QString local_80;
  QString local_78;
  QArrayData *local_70;
  QString local_68;
  QString local_60;
  undefined1 local_58 [16];
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  do {
    auVar8 = QUuid::createUuid();
    local_58 = auVar8;
    QUuid::toString();
    QVar3.field0_0x0 = local_40.field0_0x0;
    local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)local_48;
    local_48 = (QArrayData *)QVar3.field0_0x0;
    if (*(int *)QVar3.field0_0x0 != -1) {
      if (*(int *)QVar3.field0_0x0 != 0) {
        LOCK();
        *(int *)QVar3.field0_0x0 = *(int *)QVar3.field0_0x0 + -1;
        local_29 = *(int *)QVar3.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004c50a4;
      }
      QArrayData::deallocate((QArrayData *)QVar3.field0_0x0,2,8);
    }
LAB_1004c50a4:
    cVar4 = QSqlDatabase::contains(&local_40);
  } while (cVar4 != '\0');
  local_68.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("QSQLITE",7);
  pcVar1 = *(char **)PTR_defaultConnection_100ba20e0;
  iVar7 = 0;
  if (pcVar1 != (char *)0x0) {
    sVar5 = _strlen(pcVar1);
    iVar7 = (int)sVar5;
  }
  local_70 = (QArrayData *)QString::fromLatin1_helper(pcVar1,iVar7);
  QSqlDatabase::addDatabase(&local_60,&local_68);
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004c512e;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1004c512e:
  if (*(int *)local_68.field0_0x0 != -1) {
    if (*(int *)local_68.field0_0x0 != 0) {
      LOCK();
      *(int *)local_68.field0_0x0 = *(int *)local_68.field0_0x0 + -1;
      local_29 = *(int *)local_68.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004c515e;
    }
    QArrayData::deallocate((QArrayData *)local_68.field0_0x0,2,8);
  }
LAB_1004c515e:
  FUN_100507c20(&local_78);
  QString::fromUtf8_helper((char *)&local_38,0xa3a009);
  QString::append(&local_78);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004c51b9;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1004c51b9:
  QSqlDatabase::setDatabaseName(&local_60);
  cVar4 = QSqlDatabase::open();
  if (cVar4 == '\0') {
    uVar6 = 0;
  }
  else {
    QSqlDatabase::QSqlDatabase(local_88,(QSqlDatabase *)&local_60);
    QSqlQuery::QSqlQuery((QSqlQuery *)&local_80,local_88);
    QSqlDatabase::~QSqlDatabase(local_88);
    local_90 = (QArrayData *)
               QString::fromAscii_helper("SELECT data_value FROM data WHERE (entry_key = ?)",0x31);
    QSqlQuery::prepare(&local_80);
    if (*(int *)local_90 != -1) {
      if (*(int *)local_90 != 0) {
        LOCK();
        *(int *)local_90 = *(int *)local_90 + -1;
        local_29 = *(int *)local_90 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004c5258;
      }
      QArrayData::deallocate(local_90,2,8);
    }
LAB_1004c5258:
    local_a8.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("local_sync_root_path",0x14);
    QVariant::QVariant(local_a0,&local_a8);
    QSqlQuery::bindValue(&local_80,0,local_a0,1);
    QVariant::~QVariant(local_a0);
    if (*(int *)local_a8.field0_0x0 != -1) {
      if (*(int *)local_a8.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a8.field0_0x0 = *(int *)local_a8.field0_0x0 + -1;
        local_29 = *(int *)local_a8.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1004c52dc;
      }
      QArrayData::deallocate((QArrayData *)local_a8.field0_0x0,2,8);
    }
LAB_1004c52dc:
    cVar4 = QSqlQuery::exec();
    if (cVar4 == '\0') {
      uVar6 = 0;
    }
    else {
      cVar4 = QSqlQuery::next();
      if (cVar4 == '\0') {
        uVar6 = 0;
      }
      else {
        QSqlQuery::value((int)local_c0);
        QVariant::toString();
        pQVar2 = (QArrayData *)*param_1;
        *param_1 = local_b0;
        local_b0 = pQVar2;
        if (*(int *)pQVar2 != -1) {
          if (*(int *)pQVar2 != 0) {
            LOCK();
            *(int *)pQVar2 = *(int *)pQVar2 + -1;
            local_29 = *(int *)pQVar2 != 0;
            UNLOCK();
            if ((bool)local_29) goto LAB_1004c5366;
          }
          QArrayData::deallocate(pQVar2,2,8);
        }
LAB_1004c5366:
        QVariant::~QVariant(local_c0);
        uVar6 = 1;
      }
    }
    QSqlDatabase::close();
    QSqlQuery::~QSqlQuery((QSqlQuery *)&local_80);
  }
  QSqlDatabase::removeDatabase(&local_40);
  if (*(int *)local_78.field0_0x0 != -1) {
    if (*(int *)local_78.field0_0x0 != 0) {
      LOCK();
      *(int *)local_78.field0_0x0 = *(int *)local_78.field0_0x0 + -1;
      local_29 = *(int *)local_78.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1004c53cb;
    }
    QArrayData::deallocate((QArrayData *)local_78.field0_0x0,2,8);
  }
LAB_1004c53cb:
  QSqlDatabase::~QSqlDatabase((QSqlDatabase *)&local_60);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return uVar6;
      }
      local_29 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return uVar6;
}


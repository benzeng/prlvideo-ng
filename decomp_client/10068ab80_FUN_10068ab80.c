
CTaskGoogleLogin * FUN_10068ab80(undefined8 param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  size_t sVar4;
  QArrayData *pQVar5;
  int iVar6;
  CTaskGoogleLogin *this;
  long local_b8;
  long local_b0;
  long local_a8;
  QArrayData *local_a0;
  QArrayData *local_98;
  QArrayData *local_90;
  QString local_88;
  Data_conflict local_80;
  undefined4 local_78;
  QVariant local_70;
  QArrayData *local_60;
  QArrayData *local_58;
  QString local_50;
  undefined1 local_48;
  QVariant local_40;
  undefined1 local_29;
  
  this = (CTaskGoogleLogin *)0x0;
  QSettings::QSettings((QSettings *)&local_40,(QObject *)0x0);
  puVar2 = PTR_s_1011894694161_5eljgfatp39i25dkf8_102270fe8;
  puVar1 = PTR_s_1404906026445217_102270fe0;
  if (param_2 != 2) {
    if (param_2 != 1) goto LAB_10068afe6;
    iVar6 = -1;
    if (PTR_s_1404906026445217_102270fe0 != (undefined *)0x0) {
      sVar4 = _strlen(PTR_s_1404906026445217_102270fe0);
      iVar6 = (int)sVar4;
    }
    local_58 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
    iVar6 = *(int *)local_58;
    if (1 < iVar6 + 1U) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + 1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      iVar6 = *(int *)local_58;
    }
    local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
    local_48 = 0;
    if (iVar6 != -1) {
      if (iVar6 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10068ad7b;
      }
      QArrayData::deallocate(local_58,2,8);
    }
LAB_10068ad7b:
    local_78 = 0x80000000;
    local_80.field7 = 0;
    QSettings::value((QString *)&local_70,&local_40);
    QVariant::toString();
    QVariant::~QVariant(&local_70);
    QVariant::~QVariant((QVariant *)&local_80);
    if (*(int *)(local_60 + 4) != 0) {
      local_90 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_1009e01f0(&local_88,&local_90,&local_60);
      QString::operator=(&local_50,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_29 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10068ae35;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_10068ae35:
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_29 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_10068ae6b;
        }
        QArrayData::deallocate(local_90,2,8);
      }
LAB_10068ae6b:
      local_48 = 1;
    }
    this = operator_new(0x68);
    CTaskFacebookLogin::CTaskFacebookLogin
              ((CTaskFacebookLogin *)this,(FacebookAppCredentials *)&local_58);
    if (*(int *)local_60 != -1) {
      if (*(int *)local_60 != 0) {
        LOCK();
        *(int *)local_60 = *(int *)local_60 + -1;
        local_29 = *(int *)local_60 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10068aeb8;
      }
      QArrayData::deallocate(local_60,2,8);
    }
LAB_10068aeb8:
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_29 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10068aee8;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10068aee8:
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10068afe6;
      }
      QArrayData::deallocate(local_58,2,8);
    }
    goto LAB_10068afe6;
  }
  iVar6 = -1;
  if (PTR_s_1011894694161_5eljgfatp39i25dkf8_102270fe8 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_1011894694161_5eljgfatp39i25dkf8_102270fe8);
    iVar6 = (int)sVar4;
  }
  pQVar5 = (QArrayData *)QString::fromAscii_helper(puVar2,iVar6);
  puVar1 = PTR_s_HYLMnp2HHwhAPMh78cFaEwFD_102270ff0;
  iVar6 = -1;
  if (PTR_s_HYLMnp2HHwhAPMh78cFaEwFD_102270ff0 != (undefined *)0x0) {
    sVar4 = _strlen(PTR_s_HYLMnp2HHwhAPMh78cFaEwFD_102270ff0);
    iVar6 = (int)sVar4;
  }
  local_98 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar6);
  if (1 < *(int *)pQVar5 + 1U) {
    LOCK();
    *(int *)pQVar5 = *(int *)pQVar5 + 1;
    local_29 = *(int *)pQVar5 != 0;
    UNLOCK();
  }
  iVar6 = *(int *)local_98;
  if (1 < iVar6 + 1U) {
    LOCK();
    *(int *)local_98 = *(int *)local_98 + 1;
    local_29 = *(int *)local_98 != 0;
    UNLOCK();
    iVar6 = *(int *)local_98;
  }
  local_a0 = pQVar5;
  if (iVar6 != -1) {
    if (iVar6 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10068ac5d;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10068ac5d:
  if (*(int *)pQVar5 != -1) {
    if (*(int *)pQVar5 != 0) {
      LOCK();
      *(int *)pQVar5 = *(int *)pQVar5 + -1;
      local_29 = *(int *)pQVar5 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10068ac8a;
    }
    QArrayData::deallocate(pQVar5,2,8);
  }
LAB_10068ac8a:
  this = operator_new(0x60);
  CTaskGoogleLogin::CTaskGoogleLogin(this,(GoogleAppCredentials *)&local_a0);
  QObject::connect(&local_a8,this,"2webAuthStarted()",param_1,"2webAuthStarted()",0);
  if (local_a8 == 0) {
    cVar3 = '\0';
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a8);
  QObject::connect(&local_b0,this,"2webAuthFinished()",param_1,"2webAuthFinished()",0);
  if ((cVar3 != '\0') && (local_b0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b0);
  if (*(int *)local_98 != -1) {
    if (*(int *)local_98 != 0) {
      LOCK();
      *(int *)local_98 = *(int *)local_98 + -1;
      local_29 = *(int *)local_98 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10068afb0;
    }
    QArrayData::deallocate(local_98,2,8);
  }
LAB_10068afb0:
  if (*(int *)local_a0 != -1) {
    if (*(int *)local_a0 != 0) {
      LOCK();
      *(int *)local_a0 = *(int *)local_a0 + -1;
      local_29 = *(int *)local_a0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_10068afe6;
    }
    QArrayData::deallocate(local_a0,2,8);
  }
LAB_10068afe6:
  QObject::connect(&local_b8,this,"2taskFinished(PRL_RESULT)",param_1,
                   "1onRetrieveSocialAccountCredentialsFinished(PRL_RESULT)",0);
  if (local_b8 != 0) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_b8);
  CAbstractTask::setOption(this,4,1);
  CAbstractTask::execute();
  QSettings::~QSettings((QSettings *)&local_40);
  return this;
}


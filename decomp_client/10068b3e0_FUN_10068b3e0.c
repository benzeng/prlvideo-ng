
void FUN_10068b3e0(undefined8 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  QArrayData *local_b8;
  QArrayData *local_b0;
  QArrayData *local_a8;
  QString local_a0;
  QVariant local_98;
  QString local_88;
  QString local_80;
  QArrayData *local_78;
  QString local_70;
  QVariant local_68;
  QString local_58;
  QString local_50;
  QString local_48 [2];
  QString local_38;
  QString local_30;
  undefined1 local_21;
  
  QObject::sender();
  plVar3 = (long *)QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1308);
  local_30.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  QSettings::QSettings((QSettings *)local_48,(QObject *)0x0);
  (**(code **)(*plVar3 + 0x70))(plVar3);
  iVar2 = CTaskGenericId::type();
  if (iVar2 == 0x83) {
    QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e13d0);
    CTaskFacebookLogin::userEmail();
    QString::operator=(&local_30,&local_50);
    if (*(int *)local_50.field0_0x0 != -1) {
      if (*(int *)local_50.field0_0x0 != 0) {
        LOCK();
        *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
        local_21 = *(int *)local_50.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10068b4a1;
      }
      QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
    }
LAB_10068b4a1:
    CTaskFacebookLogin::facebookToken();
    QString::operator=(&local_38,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_21 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_10068b4ea;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
LAB_10068b4ea:
    cVar1 = CTaskFacebookLogin::isSystemCredentialsUsed();
    uVar4 = 1;
    if ((cVar1 == '\0') && (*(int *)(local_38.field0_0x0 + 4) != 0)) {
      local_78 = (QArrayData *)QString::fromAscii_helper("",0);
      FUN_1009dfc00(&local_70,&local_78,&local_38);
      QVariant::QVariant(&local_68,&local_70);
      QSettings::setValue(local_48,(QVariant *)&DAT_102312308);
      QVariant::~QVariant(&local_68);
      if (*(int *)local_70.field0_0x0 != -1) {
        if (*(int *)local_70.field0_0x0 != 0) {
          LOCK();
          *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
          local_21 = *(int *)local_70.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10068b58a;
        }
        QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
      }
LAB_10068b58a:
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_21 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10068b7b1;
        }
        QArrayData::deallocate(local_78,2,8);
      }
    }
  }
  else {
    (**(code **)(*plVar3 + 0x70))(plVar3);
    iVar2 = CTaskGenericId::type();
    if (iVar2 == 0x84) {
      QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e1380);
      CTaskGoogleLogin::userEmail();
      QString::operator=(&local_30,&local_80);
      if (*(int *)local_80.field0_0x0 != -1) {
        if (*(int *)local_80.field0_0x0 != 0) {
          LOCK();
          *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
          local_21 = *(int *)local_80.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10068b641;
        }
        QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
      }
LAB_10068b641:
      CTaskGoogleLogin::googleToken();
      QString::operator=(&local_38,&local_88);
      if (*(int *)local_88.field0_0x0 != -1) {
        if (*(int *)local_88.field0_0x0 != 0) {
          LOCK();
          *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
          local_21 = *(int *)local_88.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_21) goto LAB_10068b68a;
        }
        QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
      }
LAB_10068b68a:
      uVar4 = 2;
      if (*(int *)(local_38.field0_0x0 + 4) != 0) {
        local_a8 = (QArrayData *)QString::fromAscii_helper("",0);
        FUN_1009dfc00(&local_a0,&local_a8,&local_38);
        QVariant::QVariant(&local_98,&local_a0);
        QSettings::setValue(local_48,(QVariant *)&DAT_102312310);
        QVariant::~QVariant(&local_98);
        if (*(int *)local_a0.field0_0x0 != -1) {
          if (*(int *)local_a0.field0_0x0 != 0) {
            LOCK();
            *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
            local_21 = *(int *)local_a0.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10068b735;
          }
          QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
        }
LAB_10068b735:
        if (*(int *)local_a8 != -1) {
          if (*(int *)local_a8 != 0) {
            LOCK();
            *(int *)local_a8 = *(int *)local_a8 + -1;
            local_21 = *(int *)local_a8 != 0;
            UNLOCK();
            if ((bool)local_21) goto LAB_10068b7b1;
          }
          QArrayData::deallocate(local_a8,2,8);
        }
      }
    }
    else {
      uVar4 = 0;
      FUN_100df99c0("[LICENSE]","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","false",
                    "License/WizardEngine/CLicenseWizardWorker.cpp",0x1c8,
                    "onRetrieveSocialAccountCredentialsFinished");
    }
  }
LAB_10068b7b1:
  local_b0 = (QArrayData *)local_30.field0_0x0;
  if (1 < *(int *)local_30.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + 1;
    local_21 = *(int *)local_30.field0_0x0 != 0;
    UNLOCK();
  }
  local_b8 = (QArrayData *)local_38.field0_0x0;
  if (1 < *(int *)local_38.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + 1;
    local_21 = *(int *)local_38.field0_0x0 != 0;
    UNLOCK();
  }
  FUN_10084c8f0(param_1,param_2,uVar4,&local_b0,&local_b8);
  if (*(int *)local_b8 != -1) {
    if (*(int *)local_b8 != 0) {
      LOCK();
      *(int *)local_b8 = *(int *)local_b8 + -1;
      local_21 = *(int *)local_b8 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068b83a;
    }
    QArrayData::deallocate(local_b8,2,8);
  }
LAB_10068b83a:
  if (*(int *)local_b0 != -1) {
    if (*(int *)local_b0 != 0) {
      LOCK();
      *(int *)local_b0 = *(int *)local_b0 + -1;
      local_21 = *(int *)local_b0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068b870;
    }
    QArrayData::deallocate(local_b0,2,8);
  }
LAB_10068b870:
  QSettings::~QSettings((QSettings *)local_48);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10068b8a9;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10068b8a9:
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}



void FUN_1001dfba0(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  char *pcVar7;
  QArrayData *pQVar8;
  QVariant local_90;
  QArrayData *local_80;
  QArrayData *local_78;
  QArrayData *local_70;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar4 = QObject::sender();
  if (lVar4 == 0) {
    return;
  }
  uVar5 = FUN_100152280();
  QObject::sender();
  QObject::property((char *)&local_48);
  QVariant::toString();
  QObject::sender();
  QObject::property((char *)&local_60);
  QVariant::toString();
  lVar4 = FUN_100154930(uVar5,&local_38,&local_50);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_29 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfc60;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1001dfc60:
  QVariant::~QVariant(&local_60);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfc99;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1001dfc99:
  QVariant::~QVariant(&local_48);
  if (lVar4 == 0) {
    return;
  }
  FUN_10018d830(&local_70,lVar4);
  QString::toUtf8();
  pQVar8 = local_68 + *(long *)(local_68 + 0x10);
  FUN_100188480(&local_80,lVar4);
  QString::toUtf8();
  FUN_100df99c0("[AppController]","prl_client_app",0,"Autostart VM Timeout %s %s",pQVar8,
                local_78 + *(long *)(local_78 + 0x10));
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfd43;
    }
    QArrayData::deallocate(local_78,1,8);
  }
LAB_1001dfd43:
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_29 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfd73;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1001dfd73:
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_29 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfda3;
    }
    QArrayData::deallocate(local_68,1,8);
  }
LAB_1001dfda3:
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      local_29 = *(int *)local_70 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1001dfdd3;
    }
    QArrayData::deallocate(local_70,2,8);
  }
LAB_1001dfdd3:
  if (DAT_102310920 == (void *)0x0) {
    pvVar6 = operator_new(0x50);
    FUN_1001d1080(pvVar6);
    DAT_10226c778 = 1;
    DAT_102310920 = pvVar6;
  }
  cVar1 = FUN_1001d1200(DAT_102310920);
  if (cVar1 == '\0') {
    FUN_10018c2b0(lVar4);
    CVmConfiguration::getVmSettings();
    CVmSettings::getVmStartupOptions();
    iVar2 = CVmStartupOptionsBase::getAutoStart();
    if (iVar2 == 3) {
      FUN_10018c2b0(lVar4);
      CVmConfiguration::getVmSettings();
      CVmSettings::getVmStartupOptions();
      iVar2 = CVmStartupOptionsBase::getAutoStartDelay();
      QObject::sender();
      QObject::property((char *)&local_90);
      iVar3 = QVariant::toUInt((bool *)&local_90);
      QVariant::~QVariant(&local_90);
      if (iVar2 == iVar3) {
        iVar2 = FUN_10018a9d0(lVar4);
        if (iVar2 != 0x30000004) {
          uVar5 = FUN_10018c280(lVar4);
          FUN_10031a440(uVar5,1);
          return;
        }
        pcVar7 = "Autostart VM rejected - vm already are running";
      }
      else {
        pcVar7 = "Autostart VM rejected - startup delay changed";
      }
    }
    else {
      pcVar7 = "Autostart VM rejected - startup option changed";
    }
  }
  else {
    pcVar7 = "Autostart VM rejected - app on quit";
  }
  FUN_100df99c0("[AppController]","prl_client_app",0,pcVar7);
  return;
}


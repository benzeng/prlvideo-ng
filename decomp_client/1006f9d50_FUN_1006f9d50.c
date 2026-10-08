
void FUN_1006f9d50(long param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  char cVar4;
  CMacUserShortcutsStorage *this;
  void *pvVar5;
  undefined8 uVar6;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  lVar1 = param_1 + 0x30;
  QObject::connect(&local_38,lVar1,"2remapsChanged(QString)",*(undefined8 *)(param_1 + 0x10),
                   "2remapsChanged(QString)",0);
  if (local_38 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar4 = '\0';
    QObject::connect(&local_40,lVar1,"2mouseRemapsChanged()",*(undefined8 *)(param_1 + 0x10),
                     "2mouseRemapsChanged()",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    cVar4 = '\0';
    QObject::connect(&local_40,lVar1,"2mouseRemapsChanged()",*(undefined8 *)(param_1 + 0x10),
                     "2mouseRemapsChanged()",0);
    if (cVar3 != '\0') {
      if (local_40 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_40);
  lVar1 = param_1 + 0x18;
  QObject::connect(&local_48,lVar1,"2grabHostShortcutsTypeChanged(Shortcuts::GrabHostShortcutsType)"
                   ,*(undefined8 *)(param_1 + 0x10),
                   "2grabHostShortcutsTypeChanged(Shortcuts::GrabHostShortcutsType)",0);
  if ((cVar4 == '\0') || (local_48 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    cVar4 = '\0';
    QObject::connect(&local_50,lVar1,"2showHideAppShortcutChanged(CShortcutInfo)",
                     *(undefined8 *)(param_1 + 0x10),"2showHideAppShortcutChanged(CShortcutInfo)",0)
    ;
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    cVar4 = '\0';
    QObject::connect(&local_50,lVar1,"2showHideAppShortcutChanged(CShortcutInfo)",
                     *(undefined8 *)(param_1 + 0x10),"2showHideAppShortcutChanged(CShortcutInfo)",0)
    ;
    if (cVar3 != '\0') {
      if (local_50 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_50);
  QObject::connect(&local_58,lVar1,"2shortcutChanged(Actions::ActionType,CShortcutInfo)",param_1,
                   "1updateActionsShortcuts()",0);
  if ((cVar4 == '\0') || (local_58 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    cVar4 = '\0';
    QObject::connect(&local_60,lVar1,"2shortcutChanged(Actions::ActionType,CShortcutInfo)",
                     *(undefined8 *)(param_1 + 0x10),
                     "2shortcutChanged(Actions::ActionType,CShortcutInfo)",0);
  }
  else {
    cVar3 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    cVar4 = '\0';
    QObject::connect(&local_60,lVar1,"2shortcutChanged(Actions::ActionType,CShortcutInfo)",
                     *(undefined8 *)(param_1 + 0x10),
                     "2shortcutChanged(Actions::ActionType,CShortcutInfo)",0);
    if (cVar3 != '\0') {
      if (local_60 == 0) {
        cVar4 = '\0';
      }
      else {
        cVar4 = QMetaObject::Connection::isConnected_helper();
      }
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_60);
  lVar1 = param_1 + 0x48;
  QObject::connect(&local_68,*(undefined8 *)(param_1 + 0x10),"2remapsChanged(QString)",lVar1,
                   "1update()",0);
  if ((cVar4 == '\0') || (local_68 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect((Connection *)&local_70,*(undefined8 *)(param_1 + 0x10),"2mouseRemapsChanged()"
                     ,lVar1,"1update()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_1006fa19f:
    QObject::connect((Connection *)&local_78,uVar6,
                     "2grabHostShortcutsTypeChanged(Shortcuts::GrabHostShortcutsType)",lVar1,
                     "1update()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
LAB_1006fa1c8:
    QObject::connect((Connection *)&local_80,uVar6,"2showHideAppShortcutChanged(CShortcutInfo)",
                     lVar1,"1update()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x10),"2mouseRemapsChanged()",lVar1,
                     "1update()",0);
    if ((cVar4 == '\0') || (local_70 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_70);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      goto LAB_1006fa19f;
    }
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x10),
                     "2grabHostShortcutsTypeChanged(Shortcuts::GrabHostShortcutsType)",lVar1,
                     "1update()",0);
    if ((cVar4 == '\0') || (local_78 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_78);
      uVar6 = *(undefined8 *)(param_1 + 0x10);
      goto LAB_1006fa1c8;
    }
    cVar4 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x10),
                     "2showHideAppShortcutChanged(CShortcutInfo)",lVar1,"1update()",0);
    if ((cVar4 != '\0') && (local_80 != 0)) {
      cVar3 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      cVar4 = '\0';
      QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x10),
                       "2shortcutChanged(Actions::ActionType,CShortcutInfo)",lVar1,"1update()",0);
      if (cVar3 != '\0') {
        if (local_88 == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = QMetaObject::Connection::isConnected_helper();
        }
      }
      goto LAB_1006fa1ff;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_80);
    uVar6 = *(undefined8 *)(param_1 + 0x10);
  }
  cVar4 = '\0';
  QObject::connect(&local_88,uVar6,"2shortcutChanged(Actions::ActionType,CShortcutInfo)",lVar1,
                   "1update()",0);
LAB_1006fa1ff:
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  puVar2 = PTR_m_instance_1021e1450;
  this = *(CMacUserShortcutsStorage **)PTR_m_instance_1021e1450;
  if (this == (CMacUserShortcutsStorage *)0x0) {
    this = operator_new(0x18);
    CMacUserShortcutsStorage::CMacUserShortcutsStorage(this);
    *(CMacUserShortcutsStorage **)puVar2 = this;
    DAT_102274b30 = 1;
  }
  cVar3 = '\0';
  QObject::connect(&local_90,this,"2userShortcutsChanged()",param_1,"1onMacShortcutsChanged()",0);
  if (cVar4 != '\0') {
    if (local_90 == 0) {
      cVar3 = '\0';
    }
    else {
      cVar3 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_90);
  if (DAT_102310a18 == (void *)0x0) {
    pvVar5 = operator_new(0x20);
    FUN_1007eff80(pvVar5);
    DAT_10226c4da = 1;
    DAT_102310a18 = pvVar5;
  }
  cVar4 = '\0';
  QObject::connect(&local_98,DAT_102310a18,
                   "2inputSourceShortcutChanged(CMacInputSourceWatcher::SwitchDirection,QKeySequence,QKeySequence)"
                   ,param_1,"1onMacShortcutsChanged()",0);
  if (cVar3 != '\0') {
    if (local_98 == 0) {
      cVar4 = '\0';
    }
    else {
      cVar4 = QMetaObject::Connection::isConnected_helper();
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_98);
  if (DAT_1023108e0 == (void *)0x0) {
    pvVar5 = operator_new(0x18);
    FUN_1001a61d0(pvVar5);
    DAT_10226c110 = 1;
    DAT_1023108e0 = pvVar5;
  }
  QObject::connect(&local_a0,DAT_1023108e0,
                   "2appUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",
                   param_1,
                   "1onAppUIOptionChanged(GUI::ApplicationUIOptions, GUI::ApplicationUIOptions)",0);
  if ((cVar4 != '\0') && (local_a0 != 0)) {
    QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_a0);
  return;
}



void FUN_10039e0a0(long param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
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
  long local_30;
  long local_28;
  
  lVar1 = param_1 + 0x20;
  lVar3 = FUN_1003b0a30(lVar1);
  if (lVar3 == 0) {
    pcVar5 = "(!)Error: Vm instance is null.";
LAB_10039e525:
    FUN_100df99c0("[CFG_ED]","prl_client_app",0,pcVar5);
    return;
  }
  lVar3 = FUN_1003b0a60(lVar1);
  if (lVar3 == 0) {
    pcVar5 = "(!)Error: Server instance is null.";
    goto LAB_10039e525;
  }
  cVar2 = '\0';
  QObject::connect(&local_28,*(undefined8 *)(param_1 + 0x40),"2clicked()",param_1,
                   "1onHelpRequested()",0);
  if (local_28 != 0) {
    cVar2 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_28);
  QObject::connect(&local_30,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),"2accepted()",param_1
                   ,"1accept()",0);
  if ((cVar2 == '\0') || (local_30 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),"2rejected()",
                     param_1,"1reject()",0);
LAB_10039e53c:
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar4 = FUN_1003b0a60(lVar1);
    QObject::connect(&local_40,uVar4,"2beforeVmRemoved(const CVmWrap&)",param_1,
                     "1onBeforeVmRemoved(const CVmWrap&)",0);
LAB_10039e56f:
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2clicked()",
                     param_1,"1onLockWidgetClicked()",0);
LAB_10039e59f:
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_50,uVar4,"2submitStarted()",param_1,"1onCommitStarted()",0);
LAB_10039e5d2:
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_58,uVar4,"2submitFinished(PRL_RESULT)",param_1,
                     "1onCommitFinished(PRL_RESULT)",0);
LAB_10039e605:
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_60,uVar4,"2validationError(PRL_RESULT,VmEditorTypes::VmEditorItems,int)"
                     ,param_1,"1onValidationError(PRL_RESULT,VmEditorTypes::VmEditorItems,int)",0);
LAB_10039e638:
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar4 = FUN_1003b0a30(lVar1);
    QObject::connect(&local_68,uVar4,"2vmTypeChanged(GUI::VmType)",param_1,
                     "1onVmTypeChanged(GUI::VmType)",0);
LAB_10039e66b:
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = FUN_1003b0af0(lVar1);
    QObject::connect(&local_70,uVar4,"2dataChanged()",param_1,"1updateLockWidgetState()",0);
LAB_10039e69e:
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar4 = FUN_1003b0b00(lVar1);
    QObject::connect(&local_78,uVar4,"2protectedDataChanged()",param_1,
                     "1updateCurrentSectionGeometry()",0);
LAB_10039e6d1:
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar4 = FUN_1003b0a30(lVar1);
    QObject::connect(&local_80,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1onVmStateChanged()",0);
  }
  else {
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x50),"2rejected()",
                     param_1,"1reject()",0);
    if ((cVar2 == '\0') || (local_38 == 0)) goto LAB_10039e53c;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    uVar4 = FUN_1003b0a60(lVar1);
    QObject::connect(&local_40,uVar4,"2beforeVmRemoved(const CVmWrap&)",param_1,
                     "1onBeforeVmRemoved(const CVmWrap&)",0);
    if ((cVar2 == '\0') || (local_40 == 0)) goto LAB_10039e56f;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x30),"2clicked()",
                     param_1,"1onLockWidgetClicked()",0);
    if ((cVar2 == '\0') || (local_48 == 0)) goto LAB_10039e59f;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_50,uVar4,"2submitStarted()",param_1,"1onCommitStarted()",0);
    if ((cVar2 == '\0') || (local_50 == 0)) goto LAB_10039e5d2;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_58,uVar4,"2submitFinished(PRL_RESULT)",param_1,
                     "1onCommitFinished(PRL_RESULT)",0);
    if ((cVar2 == '\0') || (local_58 == 0)) goto LAB_10039e605;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    uVar4 = FUN_1003b0ad0(lVar1);
    QObject::connect(&local_60,uVar4,"2validationError(PRL_RESULT,VmEditorTypes::VmEditorItems,int)"
                     ,param_1,"1onValidationError(PRL_RESULT,VmEditorTypes::VmEditorItems,int)",0);
    if ((cVar2 == '\0') || (local_60 == 0)) goto LAB_10039e638;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    uVar4 = FUN_1003b0a30(lVar1);
    QObject::connect(&local_68,uVar4,"2vmTypeChanged(GUI::VmType)",param_1,
                     "1onVmTypeChanged(GUI::VmType)",0);
    if ((cVar2 == '\0') || (local_68 == 0)) goto LAB_10039e66b;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    uVar4 = FUN_1003b0af0(lVar1);
    QObject::connect(&local_70,uVar4,"2dataChanged()",param_1,"1updateLockWidgetState()",0);
    if ((cVar2 == '\0') || (local_70 == 0)) goto LAB_10039e69e;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    uVar4 = FUN_1003b0b00(lVar1);
    QObject::connect(&local_78,uVar4,"2protectedDataChanged()",param_1,
                     "1updateCurrentSectionGeometry()",0);
    if ((cVar2 == '\0') || (local_78 == 0)) goto LAB_10039e6d1;
    cVar2 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    uVar4 = FUN_1003b0a30(lVar1);
    QObject::connect(&local_80,uVar4,"2vmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)"
                     ,param_1,"1onVmStateChanged()",0);
    if ((cVar2 != '\0') && (local_80 != 0)) {
      cVar2 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x48),
                       "2sizeChanged(const QSize&,const QSize&)",param_1,
                       "1onSectionSizeChanged(const QSize&,const QSize&)",0);
      if ((cVar2 != '\0') && (local_88 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_10039e72a;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x48),
                   "2sizeChanged(const QSize&,const QSize&)",param_1,
                   "1onSectionSizeChanged(const QSize&,const QSize&)",0);
LAB_10039e72a:
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}


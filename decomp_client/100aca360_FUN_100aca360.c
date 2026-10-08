
void FUN_100aca360(long param_1,undefined8 param_2)

{
  char cVar1;
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
  
  FUN_100acdf10("PRL_KEY",0,0);
  QObject::connect(&local_30,param_1,"2CoherenceDataReceivedSignal(SmartPtr<char>, unsigned)",
                   param_1,"1CoherenceDataReceivedSlot(SmartPtr<char>, unsigned)",2);
  if (local_30 == 0) {
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_1,"2BeforeVmActivationSignal(bool)",param_1,
                     "1BeforeVmActivation(bool)",2);
LAB_100aca43b:
    cVar1 = '\0';
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_30);
    QObject::connect(&local_38,param_1,"2BeforeVmActivationSignal(bool)",param_1,
                     "1BeforeVmActivation(bool)",2);
    if ((cVar1 == '\0') || (local_38 == 0)) goto LAB_100aca43b;
    cVar1 = QMetaObject::Connection::isConnected_helper();
  }
  QMetaObject::Connection::~Connection((Connection *)&local_38);
  QObject::connect(&local_40,*(undefined8 *)(param_1 + 0x78),
                   "2WindowActivatedSignal(unsigned int, unsigned int, unsigned int)",param_1,
                   "2windowActivated(unsigned int, unsigned int, unsigned int)",2);
  if ((cVar1 == '\0') || (local_40 == 0)) {
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x78),"2CoherenceStubActivated()",param_1,
                     "2coherenceAppActivated()",2);
LAB_100aca773:
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1,"2coherenceStopByError(int)",param_1,
                     "1CoherenceStopByErrorSlot(int)",2);
LAB_100aca7a1:
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect((Connection *)&local_58,param_1 + 0xa0,"2timeout()",param_1,
                     "1OnCoherenceStartingTimeout()",0);
    QMetaObject::Connection::~Connection((Connection *)&local_58);
LAB_100aca7f3:
    QObject::connect(&local_60,param_1 + 0xc0,"2timeout()",param_1,"1OnCoherenceStartDelayTimeout()"
                     ,0);
LAB_100aca7fe:
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,param_2,
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                     "1OnVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",2);
LAB_100aca82c:
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x78),"2VmActivatedSignal(const QString&)",
                     param_1,"2vmActivated(const QString&)",2);
LAB_100aca85b:
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x78),
                     "2VmDeactivatedSignal(const QString&)",param_1,"2vmDeactivated(const QString&)"
                     ,2);
LAB_100aca88a:
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x78),
                     "2StubActivatedSignal(const QString&)",param_1,"2stubActivated(const QString&)"
                     ,2);
  }
  else {
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    QObject::connect(&local_48,*(undefined8 *)(param_1 + 0x78),"2CoherenceStubActivated()",param_1,
                     "2coherenceAppActivated()",2);
    if ((cVar1 == '\0') || (local_48 == 0)) goto LAB_100aca773;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_48);
    QObject::connect(&local_50,param_1,"2coherenceStopByError(int)",param_1,
                     "1CoherenceStopByErrorSlot(int)",2);
    if ((cVar1 == '\0') || (local_50 == 0)) goto LAB_100aca7a1;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_50);
    QObject::connect(&local_58,param_1 + 0xa0,"2timeout()",param_1,"1OnCoherenceStartingTimeout()",0
                    );
    if ((cVar1 == '\0') || (local_58 == 0)) {
      QMetaObject::Connection::~Connection((Connection *)&local_58);
      goto LAB_100aca7f3;
    }
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_58);
    QObject::connect(&local_60,param_1 + 0xc0,"2timeout()",param_1,"1OnCoherenceStartDelayTimeout()"
                     ,0);
    if ((cVar1 == '\0') || (local_60 == 0)) goto LAB_100aca7fe;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_60);
    QObject::connect(&local_68,param_2,
                     "2vmStateChanged(VIRTUAL_MACHINE_STATE,VIRTUAL_MACHINE_STATE)",param_1,
                     "1OnVmStateChanged(VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE)",2);
    if ((cVar1 == '\0') || (local_68 == 0)) goto LAB_100aca82c;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_68);
    QObject::connect(&local_70,*(undefined8 *)(param_1 + 0x78),"2VmActivatedSignal(const QString&)",
                     param_1,"2vmActivated(const QString&)",2);
    if ((cVar1 == '\0') || (local_70 == 0)) goto LAB_100aca85b;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_70);
    QObject::connect(&local_78,*(undefined8 *)(param_1 + 0x78),
                     "2VmDeactivatedSignal(const QString&)",param_1,"2vmDeactivated(const QString&)"
                     ,2);
    if ((cVar1 == '\0') || (local_78 == 0)) goto LAB_100aca88a;
    cVar1 = QMetaObject::Connection::isConnected_helper();
    QMetaObject::Connection::~Connection((Connection *)&local_78);
    QObject::connect(&local_80,*(undefined8 *)(param_1 + 0x78),
                     "2StubActivatedSignal(const QString&)",param_1,"2stubActivated(const QString&)"
                     ,2);
    if ((cVar1 != '\0') && (local_80 != 0)) {
      cVar1 = QMetaObject::Connection::isConnected_helper();
      QMetaObject::Connection::~Connection((Connection *)&local_80);
      QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x78),"2IndentsChangedSignal()",param_1,
                       "2IndentsChanged()",0);
      if ((cVar1 != '\0') && (local_88 != 0)) {
        QMetaObject::Connection::isConnected_helper();
      }
      goto LAB_100aca8df;
    }
  }
  QMetaObject::Connection::~Connection((Connection *)&local_80);
  QObject::connect(&local_88,*(undefined8 *)(param_1 + 0x78),"2IndentsChangedSignal()",param_1,
                   "2IndentsChanged()",0);
LAB_100aca8df:
  QMetaObject::Connection::~Connection((Connection *)&local_88);
  return;
}


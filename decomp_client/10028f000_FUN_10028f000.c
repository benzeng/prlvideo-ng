
undefined8 FUN_10028f000(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  void *pvVar4;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
  local_50 = (QArrayData *)QString::fromAscii_helper("Vm search timeout",0x11);
  QVariant::QVariant(&local_60,DAT_100e15324);
  QSettings::value((QString *)&local_38,&local_48);
  iVar1 = QVariant::toUInt((bool *)&local_38);
  QVariant::~QVariant(&local_38);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_21 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_10028f0a3;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_10028f0a3:
  QSettings::~QSettings((QSettings *)&local_48);
  if (iVar1 == 0) {
    FUN_100df99c0("","prl_client_app",0,"VM search disabled");
    uVar2 = 0x3bfa;
  }
  else {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001554a0(uVar2);
    if (lVar3 == 0) {
      FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t get local server");
      uVar2 = 0x80000009;
    }
    else {
      pvVar4 = operator_new(0x28);
      FUN_1002ea7e0(pvVar4,lVar3);
      CAbstractTask::execute();
      uVar2 = 0;
    }
  }
  return uVar2;
}


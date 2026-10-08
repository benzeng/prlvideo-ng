
void FUN_1002c0c20(CAbstractTask *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  CTaskGenericId *this;
  QVariant local_98;
  QArrayData *local_88;
  QVariant local_80;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  QVariant local_38;
  undefined1 local_21;
  
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x85);
  *(undefined ***)this = &PTR_FUN_102272d80;
  CAbstractTask::CAbstractTask(param_1,this);
  *(undefined ***)param_1 = &PTR_FUN_102208890;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  cVar1 = FUN_10076d9e0();
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 1;
    return;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == 2) {
    QSettings::QSettings((QSettings *)&local_48,(QObject *)0x0);
    local_50 = (QArrayData *)
               QString::fromAscii_helper
                         ("AcronisOnlineStore/AcronisOnlineStoreAcronisBackupOnlineTakenOffer",0x42)
    ;
    QVariant::QVariant(&local_60,false);
    QSettings::value((QString *)&local_38,&local_48);
    cVar1 = QVariant::toBool();
    QVariant::~QVariant(&local_38);
    QVariant::~QVariant(&local_60);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_21 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_21) goto LAB_1002c0d2c;
      }
      QArrayData::deallocate(local_50,2,8);
    }
LAB_1002c0d2c:
    QSettings::~QSettings((QSettings *)&local_48);
    if (cVar1 == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 1;
      return;
    }
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 != 0) goto LAB_1002c0e05;
  QSettings::QSettings((QSettings *)&local_80,(QObject *)0x0);
  local_88 = (QArrayData *)
             QString::fromAscii_helper("AcronisOnlineStore/AcronisOnlineStorePromoOff",0x2d);
  QVariant::QVariant(&local_98,false);
  QSettings::value((QString *)&local_70,&local_80);
  cVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_70);
  QVariant::~QVariant(&local_98);
  if (*(int *)local_88 != -1) {
    if (*(int *)local_88 != 0) {
      LOCK();
      *(int *)local_88 = *(int *)local_88 + -1;
      local_21 = *(int *)local_88 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002c0df3;
    }
    QArrayData::deallocate(local_88,2,8);
  }
LAB_1002c0df3:
  QSettings::~QSettings((QSettings *)&local_80);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    return;
  }
LAB_1002c0e05:
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}



undefined4 FUN_1001095e0(QRegExp *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char local_49;
  QArrayData *local_48;
  QString local_40;
  QArrayData *local_38;
  QRegExp local_30 [8];
  QHostAddress local_28 [15];
  undefined1 local_19;
  
  QHostAddress::QHostAddress(local_28);
  cVar1 = QHostAddress::setAddress((QString *)local_28);
  uVar4 = 0;
  if (cVar1 != '\0') goto LAB_10010973a;
  local_38 = (QArrayData *)QString::fromAscii_helper("(.*):($|\\d+)",0xc);
  QRegExp::QRegExp(local_30,&local_38,1,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_100109668;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100109668:
  uVar4 = 0;
  iVar2 = QString::indexOf(param_1,(int)local_30);
  if (iVar2 != -1) {
    QRegExp::cap((int)&local_40);
    QString::operator=((QString *)param_1,&local_40);
    if (*(int *)local_40.field0_0x0 != -1) {
      if (*(int *)local_40.field0_0x0 != 0) {
        LOCK();
        *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
        local_19 = *(int *)local_40.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_1001096cf;
      }
      QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
    }
LAB_1001096cf:
    QRegExp::cap((int)&local_48);
    local_49 = '\0';
    uVar3 = QString::toUInt((bool *)&local_48,(int)&local_49);
    uVar4 = 0;
    if (local_49 != '\0') {
      uVar4 = uVar3;
    }
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_19 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100109731;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_100109731:
  QRegExp::~QRegExp(local_30);
LAB_10010973a:
  QHostAddress::~QHostAddress(local_28);
  return uVar4;
}


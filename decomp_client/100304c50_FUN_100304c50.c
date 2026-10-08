
char * FUN_100304c50(CMessageInfo *param_1,QWidget *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  long lVar3;
  QString local_58;
  QVariant local_50;
  QString local_40;
  QVariant local_38;
  undefined1 local_21;
  
  pcVar1 = (char *)CMessageBoxBuilder::build(param_1,param_2);
  uVar2 = FUN_100152280();
  lVar3 = CMessageInfo::data();
  lVar3 = FUN_100152a20(uVar2,lVar3 + 8);
  if (lVar3 == 0) {
    uVar2 = FUN_100152280();
    lVar3 = CMessageInfo::data();
    lVar3 = FUN_1001547d0(uVar2,lVar3 + 8);
    if (lVar3 == 0) goto LAB_100304d11;
  }
  FUN_10015aab0(&local_40,lVar3);
  QVariant::QVariant(&local_38,&local_40);
  QObject::setProperty(pcVar1,(QVariant *)"serverUuid");
  QVariant::~QVariant(&local_38);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_21 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100304d11;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_100304d11:
  uVar2 = FUN_100152280();
  lVar3 = CMessageInfo::data();
  lVar3 = FUN_1001548f0(uVar2,lVar3 + 8);
  if (lVar3 != 0) {
    FUN_100188480(&local_58,lVar3);
    QVariant::QVariant(&local_50,&local_58);
    QObject::setProperty(pcVar1,(QVariant *)"vmUuid");
    QVariant::~QVariant(&local_50);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_58.field0_0x0 != 0) {
          return pcVar1;
        }
        local_21 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
  return pcVar1;
}


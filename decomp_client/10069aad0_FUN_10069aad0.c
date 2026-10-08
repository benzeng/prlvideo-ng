
void FUN_10069aad0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  QArrayData *local_40;
  QUrl local_38 [8];
  QVariant local_30;
  undefined1 local_19;
  
  uVar3 = FUN_10016f500(*(undefined8 *)(param_1 + 0x20));
  cVar1 = FUN_10061c2b0(uVar3,0x20);
  if (cVar1 != '\0') {
    if (DAT_102310958 == (void *)0x0) {
      pvVar4 = operator_new(0x18);
      FUN_100612710(pvVar4);
      DAT_102271170 = 1;
      DAT_102310958 = pvVar4;
    }
    FUN_100612970(DAT_102310958);
    return;
  }
  uVar3 = FUN_10016f500(*(undefined8 *)(param_1 + 0x20));
  FUN_10061abe0(&local_30,uVar3,0xb);
  uVar2 = QVariant::toInt((bool *)&local_30);
  QVariant::~QVariant(&local_30);
  FUN_10011ddb0(&local_40,uVar2);
  QUrl::QUrl(local_38,&local_40,0);
  QDesktopServices::openUrl(local_38);
  QUrl::~QUrl(local_38);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_19 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}


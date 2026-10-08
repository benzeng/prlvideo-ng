
void FUN_1005b9a00(long param_1,QString *param_2)

{
  undefined *puVar1;
  QTextStream *pQVar2;
  QArrayData *local_58;
  QTextStream *local_50;
  QDebug local_48 [8];
  QTextStream *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  QString::operator=((QString *)(param_1 + 0xb8),param_2);
  QString::operator=((QString *)(param_1 + 0xc0),param_2 + 1);
  QString::operator=((QString *)(param_1 + 200),param_2 + 2);
  QString::operator=((QString *)(param_1 + 0xd0),param_2 + 3);
  QString::operator=((QString *)(param_1 + 0xd8),param_2 + 4);
  QString::operator=((QString *)(param_1 + 0xe0),param_2 + 5);
  QString::operator=((QString *)(param_1 + 0xe8),param_2 + 6);
  QString::operator=((QString *)(param_1 + 0xf0),param_2 + 7);
  QString::operator=((QString *)(param_1 + 0xf8),param_2 + 8);
  QString::operator=((QString *)(param_1 + 0x100),param_2 + 9);
  FUN_100283c40(param_1 + 0x108,param_2 + 10);
  QString::operator=((QString *)(param_1 + 0x110),param_2 + 0xb);
  QString::operator=((QString *)(param_1 + 0x118),param_2 + 0xc);
  QString::operator=((QString *)(param_1 + 0x120),param_2 + 0xd);
  QString::operator=((QString *)(param_1 + 0x128),param_2 + 0xe);
  QString::operator=((QString *)(param_1 + 0x130),param_2 + 0xf);
  puVar1 = PTR_shared_null_1021e1288;
  local_38 = (QArrayData *)PTR_shared_null_1021e1288;
  pQVar2 = operator_new(0x50);
  QTextStream::QTextStream(pQVar2,&local_38,2);
  *(undefined **)(pQVar2 + 0x10) = puVar1;
  *(undefined4 *)(pQVar2 + 0x1c) = 0;
  pQVar2[0x20] = (QTextStream)0x1;
  pQVar2[0x21] = (QTextStream)0x0;
  *(undefined4 *)(pQVar2 + 0x28) = 2;
  *(undefined8 *)(pQVar2 + 0x44) = 0;
  *(undefined8 *)(pQVar2 + 0x3c) = 0;
  *(undefined8 *)(pQVar2 + 0x34) = 0;
  *(undefined8 *)(pQVar2 + 0x2c) = 0;
  *(undefined4 *)(pQVar2 + 0x18) = 2;
  local_50 = pQVar2;
  local_40 = pQVar2;
  FUN_10073fb10(local_48,&local_50,param_2);
  QDebug::~QDebug(local_48);
  QDebug::~QDebug((QDebug *)&local_50);
  if (2 < DAT_10230ffd0) {
    QString::toUtf8();
    FUN_100df99c0("","prl_client_app",3,"Current OS purchase info is %s",
                  local_58 + *(long *)(local_58 + 0x10));
    if (*(int *)local_58 != -1) {
      if (*(int *)local_58 != 0) {
        LOCK();
        *(int *)local_58 = *(int *)local_58 + -1;
        local_29 = *(int *)local_58 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1005b9c17;
      }
      QArrayData::deallocate(local_58,1,8);
    }
  }
LAB_1005b9c17:
  FUN_1005b9d10(param_1);
  QDebug::~QDebug((QDebug *)&local_40);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}


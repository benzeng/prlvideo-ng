
undefined1 FUN_1006b0ee0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  QArrayData *local_60;
  QDataStream local_58 [24];
  undefined4 local_40;
  QString local_38;
  QFile local_30 [23];
  undefined1 local_19;
  
  FUN_1006b1cd0(&local_38);
  QFile::QFile(local_30,&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b0f36;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006b0f36:
  cVar1 = QFile::open(local_30,1);
  if (cVar1 == '\0') {
    uVar2 = QFileDevice::error();
    uVar3 = 0;
    FUN_100df99c0("","prl_client_app",0,"Can\'t open file to read predefined keyboard keys with %d",
                  uVar2);
    goto LAB_1006b1002;
  }
  QDataStream::QDataStream(local_58,(QIODevice *)local_30);
  local_40 = 0xc;
  FUN_1006b2950(param_1 + 0x18);
  FUN_1006b29c0(local_58,param_1 + 0x18);
  local_60 = (QArrayData *)QString::fromAscii_helper("Loaded send to vm keys:",0x17);
  FUN_1006b1f30(param_1,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_19 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1006b0fc9;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1006b0fc9:
  uVar3 = 1;
  QDataStream::~QDataStream(local_58);
LAB_1006b1002:
  QFile::~QFile(local_30);
  return uVar3;
}


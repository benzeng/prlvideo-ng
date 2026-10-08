
bool FUN_1006b21b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
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
      if ((bool)local_19) goto LAB_1006b2206;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1006b2206:
  cVar1 = QFile::open(local_30,2);
  if (cVar1 == '\0') {
    uVar2 = QFileDevice::error();
    FUN_100df99c0("","prl_client_app",0,"Can\'t open predefined keys data file with %d",uVar2);
  }
  else {
    QDataStream::QDataStream(local_58,(QIODevice *)local_30);
    local_40 = 0xc;
    FUN_1006b2ab0(local_58,param_1 + 0x18);
    QDataStream::~QDataStream(local_58);
  }
  QFile::~QFile(local_30);
  return cVar1 != '\0';
}


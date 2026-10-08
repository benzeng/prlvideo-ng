
undefined4 FUN_100b45990(undefined8 param_1,QHostAddress *param_2)

{
  char cVar1;
  undefined4 uVar2;
  QHostAddress local_30 [8];
  QString local_28;
  undefined1 local_19;
  
  local_28.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  cVar1 = FUN_100b561b0(param_1,&local_28);
  uVar2 = 0xffffffff;
  if (cVar1 != '\0') {
    QHostAddress::QHostAddress(local_30,&local_28);
    QHostAddress::operator=(param_2,local_30);
    QHostAddress::~QHostAddress(local_30);
    uVar2 = QHostAddress::protocol();
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar2;
      }
      local_19 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar2;
}


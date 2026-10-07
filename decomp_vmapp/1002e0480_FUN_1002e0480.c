
void FUN_1002e0480(undefined8 *param_1)

{
  undefined8 uVar1;
  QString *this;
  undefined4 local_38;
  undefined4 local_34;
  QString local_30;
  undefined1 local_21;
  
  FUN_1002df640();
  *param_1 = &PTR_FUN_100bb46d0;
  if (0 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"Usb virtual keyboard constructed");
  }
  local_34 = 0x409;
  uVar1 = FUN_1002e4d40(param_1 + 6,&local_34);
  local_38 = 4;
  this = (QString *)FUN_1002e4ea0(uVar1,&local_38);
  QString::fromUtf8_helper((char *)&local_30,0xa1c724);
  QString::operator=(this,&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_30.field0_0x0 != 0) {
        return;
      }
      local_21 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
  return;
}


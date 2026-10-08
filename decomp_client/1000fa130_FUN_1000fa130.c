
void FUN_1000fa130(QByteArray *param_1,uint param_2,undefined8 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  QArrayData *local_60;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_18;
  undefined1 local_11;
  
  local_28 = 0;
  uStack_20 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_18 = 0;
  local_58 = 0x100000010;
  uStack_50 = (ulong)param_2;
  local_48 = 0x80;
  uStack_40 = (ulong)CONCAT14(param_5,param_4);
  QString::toUtf8();
  uStack_20 = CONCAT44(*(undefined4 *)(local_60 + 4),(undefined4)uStack_20);
  QByteArray::append((char *)param_1,(int)&local_58);
  QByteArray::append((char)&local_60);
  QByteArray::append(param_1);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return;
      }
      local_11 = 0;
    }
    QArrayData::deallocate(local_60,1,8);
  }
  return;
}


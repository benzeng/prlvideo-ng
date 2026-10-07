
undefined4 FUN_1004e2270(long param_1,undefined8 param_2,QString *param_3)

{
  char cVar1;
  undefined4 uVar2;
  QString local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  local_28.field0_0x0 = *(QTypedArrayData<unsigned_short> **)(param_1 + 0x18);
  if (1 < *(int *)local_28.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
    local_1a = *(int *)local_28.field0_0x0 != 0;
    UNLOCK();
  }
  cVar1 = QString::endsWith(&local_28,0x2f,1);
  if (cVar1 == '\0') {
    QString::append(&local_28,0x2f);
  }
  QString::append(&local_28);
  cVar1 = QFile::link(param_3,&local_28);
  uVar2 = 0xf000001c;
  if (cVar1 != '\0') {
    uVar2 = 0;
  }
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return uVar2;
      }
      local_1b = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return uVar2;
}


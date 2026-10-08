
undefined8 FUN_1002855d0(long param_1)

{
  char cVar1;
  QString *this;
  undefined8 uVar2;
  QString local_28;
  undefined1 local_1b;
  undefined1 local_19;
  
  this = (QString *)(param_1 + 0x80);
  cVar1 = QFile::exists(this);
  uVar2 = 0x80000009;
  if (cVar1 != '\0') {
    local_28.field0_0x0 = this->field0_0x0;
    if (1 < *(int *)local_28.field0_0x0 + 1U) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + 1;
      local_1b = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
    }
    cVar1 = QFile::exists(&local_28);
    uVar2 = 0x80000009;
    if (cVar1 != '\0') {
      uVar2 = 0;
      QString::operator=(this,&local_28);
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
  }
  return uVar2;
}


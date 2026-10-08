
void FUN_100784f10(long param_1)

{
  undefined8 uVar1;
  QString local_28;
  undefined1 local_1b;
  undefined1 local_1a;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  QString::simplified();
  local_1b = WebUtils::isEMailValid(&local_28);
  FUN_100785070(uVar1,&local_1b);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_28.field0_0x0 != 0) {
        return;
      }
      local_1a = 0;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
  return;
}


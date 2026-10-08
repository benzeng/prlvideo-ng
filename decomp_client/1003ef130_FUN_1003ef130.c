
undefined8 FUN_1003ef130(long param_1)

{
  code *pcVar1;
  long *plVar2;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  plVar2 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar2 + 0x70);
  local_30 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.ChangedPassword",0x20);
  QVariant::QVariant(&local_40,true);
  (*pcVar1)(plVar2,param_1 + 0x28,&local_30,&local_40);
  QVariant::~QVariant(&local_40);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return 0;
      }
      local_21 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return 0;
}


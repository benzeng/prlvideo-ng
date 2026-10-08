
undefined8 FUN_1003ef020(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *plVar3;
  QVariant local_40;
  QArrayData *local_30;
  undefined1 local_21;
  
  iVar2 = QVariant::toLongLong((bool *)(param_1 + 0x38));
  if (iVar2 == 0) {
    plVar3 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    pcVar1 = *(code **)(*plVar3 + 0x70);
    local_30 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.AutoStartDelay",0x1f);
    QVariant::QVariant(&local_40,0);
    (*pcVar1)(plVar3,param_1 + 0x28,&local_30,&local_40);
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
  }
  return 0;
}



undefined8 FUN_1003ee390(long param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  long *plVar4;
  QArrayData *pQVar5;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  cVar2 = QVariant::toBool();
  plVar4 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  if (cVar2 == '\0') {
    pcVar1 = *(code **)(*plVar4 + 0x70);
    local_68 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.MouseVtdSync.Enabled",0x23);
    QVariant::QVariant(&local_78,false);
    (*pcVar1)(plVar4,param_1 + 0x28,&local_68,&local_78);
    QVariant::~QVariant(&local_78);
    if (*(int *)local_68 == -1) {
      return 0;
    }
    pQVar5 = local_68;
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      UNLOCK();
      if (*(int *)local_68 != 0) {
        return 0;
      }
      local_29 = 0;
    }
    goto LAB_1003ee50e;
  }
  local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.MouseSync.Enabled",0x20);
  FUN_1003e1800(&local_40,plVar4,&local_48,0);
  bVar3 = (bool)QVariant::toBool();
  QVariant::~QVariant(&local_40);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_29 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003ee42f;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1003ee42f:
  plVar4 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  pcVar1 = *(code **)(*plVar4 + 0x70);
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.MouseVtdSync.Enabled",0x23);
  QVariant::QVariant(&local_60,bVar3);
  (*pcVar1)(plVar4,param_1 + 0x28,&local_50,&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_50 == -1) {
    return 0;
  }
  pQVar5 = local_50;
  if (*(int *)local_50 != 0) {
    LOCK();
    *(int *)local_50 = *(int *)local_50 + -1;
    UNLOCK();
    if (*(int *)local_50 != 0) {
      return 0;
    }
    local_29 = 0;
  }
LAB_1003ee50e:
  QArrayData::deallocate(pQVar5,2,8);
  return 0;
}


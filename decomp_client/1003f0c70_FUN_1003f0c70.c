
undefined8 FUN_1003f0c70(long param_1)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  char cVar8;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  undefined1 local_a9;
  QVariant local_a8;
  QArrayData *local_98;
  QArrayData *local_90;
  QVariant local_88;
  QArrayData *local_78;
  QVariant local_70;
  QVariant local_60;
  QArrayData *local_50;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  uVar4 = QVariant::toUInt((bool *)(param_1 + 0x38));
  cVar8 = (char)((uint)uVar4 >> 8);
  cVar2 = FUN_100110a10(cVar8,uVar4);
  if (cVar2 == '\0') {
    uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_48 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.WindowMode",0x1b);
    FUN_1003e1800(&local_40,uVar5,&local_48);
    lVar6 = QVariant::toLongLong((bool *)&local_40);
    QVariant::~QVariant(&local_40);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_1003f0d1f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
LAB_1003f0d1f:
    if (lVar6 == 3) {
      plVar7 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
      pcVar1 = *(code **)(*plVar7 + 0x70);
      local_50 = (QArrayData *)QString::fromAscii_helper("Settings.Startup.WindowMode",0x1b);
      QVariant::QVariant(&local_60,1);
      (*pcVar1)(plVar7,param_1 + 0x28,&local_50);
      QVariant::~QVariant(&local_60);
      if (*(int *)local_50 != -1) {
        if (*(int *)local_50 != 0) {
          LOCK();
          *(int *)local_50 = *(int *)local_50 + -1;
          local_29 = *(int *)local_50 != 0;
          UNLOCK();
          if ((bool)local_29) goto LAB_1003f0daa;
        }
        QArrayData::deallocate(local_50,2,8);
      }
    }
  }
LAB_1003f0daa:
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_78 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.TimeSync.KeepTimeDiff",0x24);
  FUN_1003e1800(&local_70,uVar5,&local_78);
  cVar2 = QVariant::toBool();
  QVariant::~QVariant(&local_70);
  if (*(int *)local_78 != -1) {
    if (*(int *)local_78 != 0) {
      LOCK();
      *(int *)local_78 = *(int *)local_78 + -1;
      local_29 = *(int *)local_78 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f0e22;
    }
    QArrayData::deallocate(local_78,2,8);
  }
LAB_1003f0e22:
  uVar5 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
  local_90 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.TimeSync.SyncHostToGuest",0x27)
  ;
  FUN_1003e1800(&local_88,uVar5,&local_90);
  cVar3 = QVariant::toBool();
  QVariant::~QVariant(&local_88);
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_29 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_1003f0ea5;
    }
    QArrayData::deallocate(local_90,2,8);
  }
LAB_1003f0ea5:
  if ((cVar8 != '\b' && cVar2 == '\0') && (cVar3 == '\x01')) {
    plVar7 = (long *)FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    pcVar1 = *(code **)(*plVar7 + 0x70);
    local_98 = (QArrayData *)
               QString::fromAscii_helper("Settings.Tools.TimeSync.SyncHostToGuest",0x27);
    local_a9 = 0;
    QVariant::QVariant(&local_a8,1,&local_a9,0);
    (*pcVar1)(plVar7,param_1 + 0x28,&local_98,&local_a8);
    QVariant::~QVariant(&local_a8);
    if (*(int *)local_98 != -1) {
      if (*(int *)local_98 != 0) {
        LOCK();
        *(int *)local_98 = *(int *)local_98 + -1;
        UNLOCK();
        if (*(int *)local_98 != 0) {
          return 0;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_98,2,8);
    }
  }
  return 0;
}


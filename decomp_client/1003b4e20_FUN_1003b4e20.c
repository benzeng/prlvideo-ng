
byte FUN_1003b4e20(int param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  QArrayData *local_80;
  QVariant local_78;
  QArrayData *local_68;
  QVariant local_60;
  QArrayData *local_50;
  QVariant local_48;
  undefined1 local_31;
  
  uVar7 = FUN_1003b0af0(param_2);
  local_50 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsType",0x17);
  FUN_1003e1800(&local_48,uVar7,&local_50,0);
  iVar5 = QVariant::toUInt((bool *)&local_48);
  QVariant::~QVariant(&local_48);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b4eb0;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_1003b4eb0:
  uVar7 = FUN_1003b0af0(param_2);
  local_68 = (QArrayData *)QString::fromAscii_helper("Settings.General.OsNumber",0x19);
  FUN_1003e1800(&local_60,uVar7,&local_68,0);
  uVar6 = QVariant::toUInt((bool *)&local_60);
  QVariant::~QVariant(&local_60);
  if (*(int *)local_68 != -1) {
    if (*(int *)local_68 != 0) {
      LOCK();
      *(int *)local_68 = *(int *)local_68 + -1;
      local_31 = *(int *)local_68 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b4f2b;
    }
    QArrayData::deallocate(local_68,2,8);
  }
LAB_1003b4f2b:
  uVar7 = FUN_1003b0af0(param_2);
  local_80 = (QArrayData *)QString::fromAscii_helper("Settings.Tools.IsolatedVm",0x19);
  FUN_1003e1800(&local_78,uVar7,&local_80,0);
  bVar1 = QVariant::toBool();
  QVariant::~QVariant(&local_78);
  if (*(int *)local_80 != -1) {
    if (*(int *)local_80 != 0) {
      LOCK();
      *(int *)local_80 = *(int *)local_80 + -1;
      local_31 = *(int *)local_80 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003b4fa1;
    }
    QArrayData::deallocate(local_80,2,8);
  }
LAB_1003b4fa1:
  if (param_1 < 0x19) {
    if (param_1 < 9) {
      if (param_1 == 3) {
        uVar7 = FUN_1003b0b10(param_2);
        cVar2 = FUN_1003bf470(uVar7);
        if (cVar2 != '\0') {
          return true;
        }
        cVar2 = FUN_1003bf4b0(uVar7);
        if (cVar2 != '\0') {
          return true;
        }
        cVar2 = FUN_1003bf4f0(uVar7);
        if (cVar2 != '\0') {
          return true;
        }
        cVar2 = FUN_1003bf500(uVar7);
        if (cVar2 != '\0') {
          return true;
        }
        uVar3 = FUN_1003bf530(uVar7);
        return uVar3;
      }
      if (param_1 != 4) {
        return true;
      }
    }
    else if (param_1 != 9) {
      if (param_1 != 0x15) {
        return true;
      }
      return iVar5 == 9 || 0x805 < uVar6 && iVar5 == 8;
    }
  }
  else {
    if (param_1 != 0x19) {
      return true;
    }
    uVar7 = FUN_1003b0b10(param_2);
    cVar2 = FUN_1003c0650(uVar7);
    if (cVar2 == '\0') {
      uVar7 = FUN_1003b0b10(param_2);
      cVar2 = FUN_1003c06b0(uVar7);
      if (cVar2 == '\0') {
        return false;
      }
    }
  }
  bVar4 = FUN_1003b3450(param_1,iVar5,uVar6);
  return (bVar1 ^ 1) & bVar4;
}


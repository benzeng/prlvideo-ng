
void FUN_10040e8b0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  QArrayData *local_48;
  QVariant local_40;
  undefined1 local_29;
  
  lVar4 = QMetaObject::cast((QObject *)PTR_staticMetaObject_1021e15a0);
  if (lVar4 == 0) {
    return;
  }
  lVar5 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  if (lVar5 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
    return;
  }
  uVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  cVar1 = FUN_1001754c0(uVar6,8);
  bVar7 = true;
  if (cVar1 != '\0') {
    uVar6 = FUN_1003b0af0(*(undefined8 *)(param_1 + 0x18));
    local_48 = (QArrayData *)QString::fromAscii_helper("Hardware.Cpu.CpuLimitType",0x19);
    FUN_1003e1800(&local_40,uVar6,&local_48,0);
    lVar5 = QVariant::toLongLong((bool *)&local_40);
    QVariant::~QVariant(&local_40);
    bVar7 = lVar5 == 3;
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_29 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_10040e98f;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
LAB_10040e98f:
  QSpinBox::setMinimum((int)lVar4);
  uVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
  FUN_10015a340(uVar6);
  CHostHardwareInfoBase::getCpu();
  uVar2 = CHwCpu::getNumber();
  if (bVar7) {
    FUN_10011d8f0(uVar2);
  }
  else {
    uVar6 = FUN_1003b0a60(*(undefined8 *)(param_1 + 0x18));
    FUN_10015a340(uVar6);
    CHostHardwareInfoBase::getCpu();
    uVar3 = CHwCpu::getSpeed();
    FUN_10011d900(uVar2,uVar3);
  }
  QSpinBox::setMaximum((int)lVar4);
  QAbstractSpinBox::setKeyboardTracking(SUB81(lVar4,0));
  return;
}


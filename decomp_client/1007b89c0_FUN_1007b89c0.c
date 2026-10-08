
void FUN_1007b89c0(long param_1,long *param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  QArrayData **ppQVar6;
  CEditSocketDialog *pCVar7;
  char *pcVar8;
  int iVar9;
  Connection local_68 [8];
  QArrayData *local_60;
  QString local_58;
  QString local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  lVar3 = 0;
  if ((*param_2 != 0) && (lVar3 = 0, *(int *)(*param_2 + 4) != 0)) {
    lVar3 = param_2[1];
  }
  lVar3 = FUN_100146b20(lVar3);
  if ((lVar3 == 0) ||
     (lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1740,PTR_typeinfo_1021e1698,0), lVar3 == 0)) {
    pcVar8 = "(!)Error: can\'t get serial port instance.";
LAB_1007b8ce5:
    FUN_100df99c0("","prl_client_app",0,pcVar8);
    return;
  }
  uVar4 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar4);
  if (lVar3 == 0) {
    pcVar8 = "(!)Error: can\'t get vmwrap instance.";
    goto LAB_1007b8ce5;
  }
  FUN_10018c2b0(lVar3);
  lVar5 = CVmConfiguration::getVmHardwareList();
  iVar9 = *(int *)(*(long *)(lVar5 + 0x1b8) + 0xc) - *(int *)(*(long *)(lVar5 + 0x1b8) + 8);
  iVar2 = CVmSerialPort::getSocketMode();
  uVar4 = FUN_10018c2b0(lVar3);
  FUN_10010a790(&local_40,iVar9,0,uVar4);
  uVar4 = FUN_100152280();
  lVar5 = FUN_1001547d0(uVar4,param_1 + 0x10);
  if (lVar5 == 0) goto LAB_1007b8c7a;
  uVar1 = FUN_10015a680(lVar5);
  uVar4 = FUN_10018c2b0(lVar3);
  FUN_10010a790(&local_48,iVar9,uVar1,uVar4);
  ppQVar6 = &local_40;
  if (iVar2 == 0) {
    ppQVar6 = &local_48;
  }
  local_50.field0_0x0 = (QTypedArrayData<unsigned_short> *)*ppQVar6;
  if (1 < *(int *)local_50.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + 1;
    local_31 = *(int *)local_50.field0_0x0 != 0;
    UNLOCK();
  }
  iVar9 = CVmDevice::getEmulatedType();
  if (iVar9 == 3) {
    CVmDevice::getUserFriendlyName();
    QString::operator=(&local_50,&local_58);
    if (*(int *)local_58.field0_0x0 != -1) {
      if (*(int *)local_58.field0_0x0 != 0) {
        LOCK();
        *(int *)local_58.field0_0x0 = *(int *)local_58.field0_0x0 + -1;
        local_31 = *(int *)local_58.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1007b8b45;
      }
      QArrayData::deallocate((QArrayData *)local_58.field0_0x0,2,8);
    }
  }
LAB_1007b8b45:
  uVar4 = FUN_100370280();
  uVar4 = FUN_1003704b0(uVar4,param_1 + 0x10,DAT_100e152b8);
  pCVar7 = operator_new(0x70);
  local_60 = (QArrayData *)PTR_shared_null_1021e1288;
  ppQVar6 = &local_48;
  if (iVar2 == 0) {
    ppQVar6 = &local_40;
  }
  CEditSocketDialog::CEditSocketDialog
            (pCVar7,&local_50,iVar2,*(undefined4 *)(param_2[1] + 0x24),uVar4,ppQVar6,0,&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_31 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b8be1;
    }
    QArrayData::deallocate(local_60,2,8);
  }
LAB_1007b8be1:
  (**(code **)(*(long *)pCVar7 + 0x1a0))(pCVar7);
  QObject::connect(local_68,pCVar7,"2editComplete( uint, QString, uint )",param_1,
                   "1onSocketEditComplete( uint, QString, uint )",0);
  QMetaObject::Connection::~Connection(local_68);
  if (*(int *)local_50.field0_0x0 != -1) {
    if (*(int *)local_50.field0_0x0 != 0) {
      LOCK();
      *(int *)local_50.field0_0x0 = *(int *)local_50.field0_0x0 + -1;
      local_31 = *(int *)local_50.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b8c4a;
    }
    QArrayData::deallocate((QArrayData *)local_50.field0_0x0,2,8);
  }
LAB_1007b8c4a:
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1007b8c7a;
    }
    QArrayData::deallocate(local_48,2,8);
  }
LAB_1007b8c7a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,2,8);
  }
  return;
}


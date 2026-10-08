
void FUN_1001cddd0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  void *pvVar3;
  code *pcVar4;
  code *pcVar5;
  QMetaEnum local_48 [16];
  QString local_38;
  QString local_30;
  QString local_28;
  undefined1 local_19;
  
  FUN_1000668b0();
  PrlGui::init(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x58));
  SdkCommunication::init(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x58));
  FUN_100d7e870(*(undefined4 *)(*(long *)(param_1 + 0x10) + 0x58),0);
  FUN_1001c99c0((*(uint *)(*(long *)(param_1 + 0x10) + 0x5c) & 0x10) >> 4);
  local_28.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Parallels Software",0x12);
  QCoreApplication::setOrganizationName(&local_28);
  if (*(int *)local_28.field0_0x0 != -1) {
    if (*(int *)local_28.field0_0x0 != 0) {
      LOCK();
      *(int *)local_28.field0_0x0 = *(int *)local_28.field0_0x0 + -1;
      local_19 = *(int *)local_28.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cde69;
    }
    QArrayData::deallocate((QArrayData *)local_28.field0_0x0,2,8);
  }
LAB_1001cde69:
  local_30.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("parallels.com",0xd);
  QCoreApplication::setOrganizationDomain(&local_30);
  if (*(int *)local_30.field0_0x0 != -1) {
    if (*(int *)local_30.field0_0x0 != 0) {
      LOCK();
      *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
      local_19 = *(int *)local_30.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cdeb7;
    }
    QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
  }
LAB_1001cdeb7:
  FUN_1001c7310(&local_38);
  QCoreApplication::setApplicationName(&local_38);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_19 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1001cdefb;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1001cdefb:
  cVar2 = FUN_100d80670();
  pcVar5 = FUN_1009ce950;
  if (cVar2 != '\0') {
    pcVar5 = (code *)PTR_FUN_1021e13b8;
  }
  cVar2 = FUN_100d80670();
  pcVar4 = FUN_1009cee60;
  if (cVar2 != '\0') {
    pcVar4 = (code *)PTR_FUN_1021e13b0;
  }
  FUN_1009ccd50(0,FUN_1009cd860,pcVar5,pcVar4);
  MetaTypes::registerMetaTypes();
  MetaTypes::registerQmlTypes();
  GUI::registerMetaTypes();
  DeclarativeWidgets::initialize();
  FUN_1001ce4a0("QPointer<CServerWrap>",0,1);
  FUN_1001ce5a0("SdkHandleWrap",0,1);
  FUN_1001ce6c0("com.parallels.AppUtils",1,0,"AppContextManager");
  FUN_1001cec40("com.parallels.PerfCollector",1,0,"PerfDataProvider");
  FUN_1001c9b10();
  puVar1 = PTR_staticMetaObject_1021e1498;
  QMetaObject::indexOfEnumerator(PTR_staticMetaObject_1021e1498);
  local_48._0_12_ = QMetaObject::enumerator((int)puVar1);
  Tasks::init(local_48);
  if (DAT_102310930 == (void *)0x0) {
    pvVar3 = operator_new(0x18);
    FUN_1001e5440(pvVar3);
    DAT_102273630 = 1;
    DAT_102310930 = pvVar3;
  }
  FUN_1001e5630(DAT_102310930);
  return;
}


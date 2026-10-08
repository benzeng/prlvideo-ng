
void FUN_1007e3b80(long *param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined1 auVar6 [12];
  QString local_38;
  QDir local_30 [15];
  undefined1 local_21;
  
  lVar3 = QObject::sender();
  uVar5 = 0x80000009;
  if ((lVar3 != 0) &&
     (lVar3 = ___dynamic_cast(lVar3,PTR_typeinfo_1021e1720,&PTR_vtable_102272140,0), lVar3 != 0)) {
    QFutureInterfaceBase::waitForResult((int)lVar3 + 0x10);
    lVar3 = QFutureInterfaceBase::mutex();
    if (lVar3 != 0) {
      QMutex::lock();
    }
    iVar2 = QFutureInterfaceBase::resultStoreBase();
    auVar6 = QtPrivate::ResultStoreBase::resultAt(iVar2);
    plVar4 = *(long **)(auVar6._0_8_ + 0x28);
    if (*(int *)(auVar6._0_8_ + 0x20) != 0) {
      plVar4 = (long *)(*plVar4 + *(long *)(*plVar4 + 0x10) + (long)auVar6._8_4_ * 4);
    }
    if (lVar3 != 0) {
      QMutex::unlock();
    }
    uVar5 = (undefined4)*plVar4;
  }
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  local_38.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("/Applications/Parallels Toolbox.app",0x23);
  QDir::QDir(local_30,&local_38);
  cVar1 = QDir::exists();
  QDir::~QDir(local_30);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_21 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1007e3c97;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_1007e3c97:
  if (cVar1 == '\0') {
    FUN_100df99c0("","prl_client_app",0,"Can\'t find /Applications/Parallels Toolbox.app");
    *(undefined4 *)(param_1 + 0xe) = 0x80000009;
  }
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}


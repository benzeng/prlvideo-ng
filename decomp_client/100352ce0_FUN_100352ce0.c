
void FUN_100352ce0(QObject *param_1,QObject *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  QObject *pQVar4;
  long local_40;
  long local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QObject::QObject(param_1,(QObject *)0x0);
  *(undefined ***)param_1 = &PTR_FUN_10220d5a0;
  lVar2 = QtSharedPointer::ExternalRefCountData::getAndRef(param_2);
  *(long *)(param_1 + 0x10) = lVar2;
  *(QObject **)(param_1 + 0x18) = param_2;
  pQVar4 = (QObject *)0x0;
  if ((lVar2 != 0) && (pQVar4 = (QObject *)0x0, *(int *)(lVar2 + 4) != 0)) {
    pQVar4 = param_2;
  }
  uVar3 = FUN_100319bf0(pQVar4);
  local_30 = (QArrayData *)QString::fromAscii_helper("parallels.GracefulShutdown.guest.win",0x24);
  lVar2 = FUN_10032d8b0(uVar3,&local_30);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100352d86;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_100352d86:
  if (lVar2 != 0) {
    QObject::connect(&local_38,lVar2,"2tisRecordChanged( SdkHandleWrap, PRL_UINT32 )",param_1,
                     "1onTISGracefulShutdownChanged( SdkHandleWrap, PRL_UINT32 )",2);
    bVar1 = 1;
    if (local_38 != 0) {
      bVar1 = QMetaObject::Connection::isConnected_helper();
      bVar1 = bVar1 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_38);
    if (bVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                    "VmDesktop/Logics/CVmDesktopScaleFactorStoreLogic.cpp",0x19,
                    "CVmDesktopScaleFactorStoreLogic");
    }
  }
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  lVar2 = FUN_100319390(uVar3);
  if (lVar2 != 0) {
    QObject::connect(&local_40,lVar2,
                     "2vmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",param_1,
                     "1onVmStateChanged( VIRTUAL_MACHINE_STATE, VIRTUAL_MACHINE_STATE )",2);
    bVar1 = 1;
    if (local_40 != 0) {
      bVar1 = QMetaObject::Connection::isConnected_helper();
      bVar1 = bVar1 ^ 1;
    }
    QMetaObject::Connection::~Connection((Connection *)&local_40);
    if (bVar1 != 0) {
      FUN_100df99c0("","prl_client_app",0,"ASSERT( %s ) occured in %s:%d [%s]","r",
                    "VmDesktop/Logics/CVmDesktopScaleFactorStoreLogic.cpp",0x1f,
                    "CVmDesktopScaleFactorStoreLogic");
    }
  }
  return;
}


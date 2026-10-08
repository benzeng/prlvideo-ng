
void FUN_1002d9ca0(long param_1,QUrl *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_40;
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QUrl::toString(&local_30,param_2,0);
  local_38 = (QArrayData *)QString::fromAscii_helper("/download",9);
  iVar1 = QString::indexOf(&local_30,&local_38,0,1);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d9d19;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d9d19:
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_1002d9d49;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_1002d9d49:
  if (iVar1 == -1) {
    QDesktopServices::openUrl(param_2);
  }
  else {
    uVar2 = FUN_100152280();
    lVar3 = FUN_1001548f0(uVar2,param_1 + 0x28);
    if (lVar3 != 0) {
      iVar1 = FUN_10018a9d0(lVar3);
      if (((iVar1 == 0x30000009) || (iVar1 = FUN_10018a9d0(lVar3), iVar1 == 0x30000005)) ||
         (iVar1 = FUN_10018a9d0(lVar3), iVar1 == 0x30000001)) {
        QUrl::operator=((QUrl *)(param_1 + 0x30),param_2);
        uVar2 = FUN_100192d60(lVar3,0x800,0x3ff,0,0);
        QObject::connect(&local_40,uVar2,"2taskFinished( PRL_RESULT )",param_1,
                         "1onVmStarted( PRL_RESULT )",0);
        if (local_40 != 0) {
          QMetaObject::Connection::isConnected_helper();
        }
        QMetaObject::Connection::~Connection((Connection *)&local_40);
      }
      else {
        iVar1 = FUN_10018a9d0(lVar3);
        if (iVar1 == 0x30000004) {
          uVar2 = FUN_10018c280(lVar3);
          FUN_10031b640(uVar2,0);
          FUN_1002d9ed0(param_1,param_2);
        }
      }
    }
  }
  return;
}


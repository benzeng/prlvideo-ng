
undefined1 FUN_100b50670(undefined1 *param_1)

{
  undefined1 auVar1 [16];
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  QArrayData *local_60;
  QArrayData *local_58;
  undefined1 local_50 [16];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar3 = QHostAddress::protocol();
  if (iVar3 == 1) {
    *param_1 = 1;
    local_50 = QHostAddress::toIPv6Address();
    bVar2 = FUN_100b3d460(local_50);
    *(uint *)(param_1 + 0x18) = (uint)bVar2;
    uVar5 = _CFNumberCreate(0,3,param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
  }
  else {
    if (iVar3 != 0) {
      uVar4 = QHostAddress::protocol();
      FUN_100df99c0("","prl_net",0,"setPrlAdapterIpAddress: unknown proto %d",uVar4);
      return 0;
    }
    *param_1 = 0;
    QHostAddress::toString();
    QString::toUtf8();
    uVar5 = _CFStringCreateWithCString(0,local_38 + *(long *)(local_38 + 0x10),0x600);
    *(undefined8 *)(param_1 + 0x10) = uVar5;
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100b50741;
      }
      QArrayData::deallocate(local_38,1,8);
    }
LAB_100b50741:
    auVar1._8_8_ = local_50._8_8_;
    auVar1._0_8_ = local_50._0_8_;
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        local_29 = *(int *)local_40 != 0;
        UNLOCK();
        local_50 = auVar1;
        if ((bool)local_29) goto LAB_100b50771;
      }
      QArrayData::deallocate(local_40,2,8);
    }
  }
LAB_100b50771:
  QHostAddress::toString();
  QString::toUtf8();
  uVar5 = _CFStringCreateWithCString(0,local_58 + *(long *)(local_58 + 0x10),0x600);
  *(undefined8 *)(param_1 + 8) = uVar5;
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b507d4;
    }
    QArrayData::deallocate(local_58,1,8);
  }
LAB_100b507d4:
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      UNLOCK();
      if (*(int *)local_60 != 0) {
        return 1;
      }
      local_29 = 0;
    }
    QArrayData::deallocate(local_60,2,8);
  }
  return 1;
}



void FUN_100ac4d00(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  ulong uVar4;
  QArrayData *local_58;
  QString local_50 [2];
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  iVar1 = *(int *)(param_2 + 0x28);
  iVar3 = *(int *)(param_2 + 8) + -0x50;
  if (iVar1 != 6) {
    if (iVar1 == 3) {
      FUN_100adabb0(param_1 + 0x9c0,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                    *(undefined4 *)(param_2 + 0x34));
      return;
    }
    if (iVar1 != 2) {
      return;
    }
    uVar2 = FUN_100319ca0(*(undefined8 *)(param_1 + 0x20));
    uVar2 = FUN_100334270(uVar2);
    if (iVar3 == -1) {
      _strlen((char *)(param_2 + 0x50));
    }
    QString::fromUtf8_helper((char *)&local_38,(int)(char *)(param_2 + 0x50));
    FUN_10003c0f0(uVar2,&local_38);
    if (*(int *)local_38 == -1) {
      return;
    }
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_29 = 0;
    }
    uVar4 = 2;
    goto LAB_100ac4eff;
  }
  FUN_100ada5d0(param_1 + 0x9c0,0,0,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30),
                0,0,0,0,*(undefined4 *)(param_2 + 0x20),0);
  QByteArray::QByteArray((QByteArray *)&local_40,(char *)(param_2 + 0x50),iVar3);
  QMimeData::QMimeData((QMimeData *)local_50);
  local_58 = (QArrayData *)QString::fromAscii_helper("text/uri-list",0xd);
  QMimeData::setData(local_50,(QByteArray *)&local_58);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_29 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100ac4e05;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_100ac4e05:
  if (1 < DAT_10230ffd0) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",2,"DDEvent_PerformDragOperation: guestX=%d guestY=%d",
                  *(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  }
  uVar2 = FUN_100319ca0(*(undefined8 *)(param_1 + 0x20));
  FUN_1003345b0(uVar2,local_50,*(undefined4 *)(param_2 + 0x2c),*(undefined4 *)(param_2 + 0x30));
  QMimeData::~QMimeData((QMimeData *)local_50);
  if (*(int *)local_40 == -1) {
    return;
  }
  if (*(int *)local_40 != 0) {
    LOCK();
    *(int *)local_40 = *(int *)local_40 + -1;
    UNLOCK();
    if (*(int *)local_40 != 0) {
      return;
    }
    local_29 = 0;
  }
  uVar4 = 1;
  local_38 = local_40;
LAB_100ac4eff:
  QArrayData::deallocate(local_38,uVar4,8);
  return;
}


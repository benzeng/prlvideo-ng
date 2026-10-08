
void FUN_10034afe0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  QArrayData *local_28;
  undefined1 local_19;
  
  uVar3 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0))
  {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  uVar3 = FUN_100319bf0(uVar3);
  local_28 = (QArrayData *)QString::fromAscii_helper("parallels.WindowsUpdate.guest.win",0x21);
  uVar3 = FUN_10032d8b0(uVar3,&local_28);
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_19 = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_10034b061;
    }
    QArrayData::deallocate(local_28,2,8);
  }
LAB_10034b061:
  iVar2 = FUN_10032c830(uVar3);
  if (iVar2 == 1) {
    FUN_10032cd60(&local_30,uVar3,0);
    uVar1 = *(uint *)(local_30 + 4);
    if ((int)uVar1 < 0x10) {
      if (0 < DAT_10230ffd0) {
        FUN_100df99c0("WINUPDATE_LOGIC","prl_client_app",1,
                      "TIS record size does not match! Expected %d got %d",0x10,uVar1);
      }
    }
    else {
      if ((1 < *(uint *)local_30) || (*(long *)(local_30 + 0x10) != 0x18)) {
        QByteArray::reallocData(&local_30,uVar1 + 1,*(uint *)(local_30 + 8) >> 0x1f);
      }
      FUN_10034b1b0(param_1,*(undefined4 *)(local_30 + *(long *)(local_30 + 0x10)));
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return;
        }
        local_19 = 0;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
  return;
}


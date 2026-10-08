
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001ef090(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  QArrayData *local_40;
  undefined8 local_38;
  undefined1 local_29;
  
  *(undefined1 *)(param_1 + 0x24) = 1;
  if (*(char *)(param_1 + 0x24) == '\0') {
    return;
  }
  while( true ) {
    local_38 = 0;
    iVar2 = FUN_100d9d550(param_1 + 0x10,&local_38);
    if (iVar2 < 0) break;
    auVar3._8_4_ = (int)((ulong)local_38 >> 0x20);
    auVar3._0_8_ = local_38;
    auVar3._12_4_ = DAT_100e11110._4_4_;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    auVar4._8_4_ = (int)((ulong)uVar1 >> 0x20);
    auVar4._0_8_ = uVar1;
    auVar4._12_4_ = DAT_100e11110._4_4_;
    iVar2 = (int)(((((double)CONCAT44((int)DAT_100e11110,(int)local_38) - _DAT_100e11120) +
                   (auVar3._8_8_ - _UNK_100e11128)) /
                  (((double)CONCAT44((int)DAT_100e11110,(int)uVar1) - _DAT_100e11120) +
                  (auVar4._8_8_ - _UNK_100e11128))) * DAT_100e16cb0);
    if (iVar2 != *(int *)(param_1 + 0x20)) {
      *(int *)(param_1 + 0x20) = iVar2;
      FUN_10080bce0(param_1,iVar2);
    }
    if (99 < iVar2) {
      return;
    }
    FUN_100db8d20(1000);
    if (*(char *)(param_1 + 0x24) == '\0') {
      return;
    }
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Warning: Failed to get size of \"%s\"",
                local_40 + *(long *)(local_40 + 0x10));
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) goto LAB_1001ef1ea;
      local_29 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1001ef1ea:
  *(undefined1 *)(param_1 + 0x24) = 0;
  return;
}


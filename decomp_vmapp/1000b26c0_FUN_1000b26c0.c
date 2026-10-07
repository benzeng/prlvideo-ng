
QByteArray * FUN_1000b26c0(QByteArray *param_1,undefined8 param_2)

{
  long lVar1;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  undefined1 local_41;
  undefined1 local_40 [16];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar1;
  CVmConfiguration::getVmSettings();
  CVmSettings::getVmEncryption();
  CVmEncryption::getMasterPasswordHash();
  QString::toUtf8();
  QByteArray::fromHex(param_1);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_41 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000b274f;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_1000b274f:
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_41 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000b277f;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1000b277f:
  FUN_1000b2920(local_40,param_2);
  FUN_1000b22c0(&local_60,param_2,param_1,0,local_40);
  QByteArray::operator=(param_1,(QByteArray *)&local_60);
  if (*(int *)local_60 != -1) {
    if (*(int *)local_60 != 0) {
      LOCK();
      *(int *)local_60 = *(int *)local_60 + -1;
      local_41 = *(int *)local_60 != 0;
      UNLOCK();
      if ((bool)local_41) goto LAB_1000b27dc;
    }
    QArrayData::deallocate(local_60,1,8);
  }
LAB_1000b27dc:
  if (*(int *)(*(long *)param_1 + 4) == 0) {
    FUN_1008e3970("","vm",0,"CVirtualPC::GetMasterPassword() decryption failed");
  }
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}



void FUN_100506dd0(long param_1,long *param_2)

{
  uint *puVar1;
  long lVar2;
  void *pvVar3;
  QByteArray *this;
  QArrayData *local_360;
  QString local_358;
  undefined1 local_349;
  undefined8 local_348;
  char local_340 [260];
  undefined1 local_23c [524];
  long local_30;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_30 = lVar2;
  if (0x104 < *(int *)(*param_2 + 4)) {
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","SharedFoldersHost",1,
                    "failed to set environment block for the LNK file: path too long");
    }
    goto LAB_100506f62;
  }
  ___bzero(&local_348,0x314);
  local_348 = 0xa000000100000314;
  QString::toLatin1_helper(&local_358);
  _memcpy(local_340,(QArrayData *)(local_358.field0_0x0 + *(long *)(local_358.field0_0x0 + 0x10)),
          (long)*(int *)(local_358.field0_0x0 + 4));
  pvVar3 = (void *)QString::utf16();
  _memcpy(local_23c,pvVar3,(long)*(int *)(*param_2 + 4) * 2);
  QByteArray::QByteArray((QByteArray *)&local_360,local_340,0x30c);
  this = (QByteArray *)FUN_100507510(param_1 + 0x10,(long)&local_348 + 4);
  QByteArray::operator=(this,(QByteArray *)&local_360);
  puVar1 = (uint *)(*(long *)(param_1 + 8) + 0x34);
  *puVar1 = *puVar1 | 0x200;
  if (*(int *)local_360 != -1) {
    if (*(int *)local_360 != 0) {
      LOCK();
      *(int *)local_360 = *(int *)local_360 + -1;
      local_349 = *(int *)local_360 != 0;
      UNLOCK();
      if ((bool)local_349) goto LAB_100506f26;
    }
    QArrayData::deallocate(local_360,1,8);
  }
LAB_100506f26:
  if (*(int *)local_358.field0_0x0 != -1) {
    if (*(int *)local_358.field0_0x0 != 0) {
      LOCK();
      *(int *)local_358.field0_0x0 = *(int *)local_358.field0_0x0 + -1;
      local_349 = *(int *)local_358.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_349) goto LAB_100506f62;
    }
    QArrayData::deallocate((QArrayData *)local_358.field0_0x0,1,8);
  }
LAB_100506f62:
  if (lVar2 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



bool FUN_1001a6fa0(void)

{
  long lVar1;
  int iVar2;
  QString local_e8;
  undefined4 local_e0 [2];
  char **local_d8;
  QArrayData *local_d0;
  QArrayData *local_c8;
  undefined4 local_c0 [2];
  undefined **local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  QString local_90;
  undefined8 local_88;
  undefined1 local_79;
  char *local_78;
  long local_70;
  QArrayData *local_68;
  undefined4 local_60;
  char *local_58;
  long local_50;
  QArrayData *local_48;
  undefined4 local_40;
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_88 = 0;
  local_30 = lVar1;
  iVar2 = _AuthorizationCreate(0,0,0,&local_88);
  local_90.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)
       QString::fromAscii_helper("Connect to Authorization Services",0x21);
  MacUtils::writeAuthorizationStatus(iVar2,&local_90);
  if (*(int *)local_90.field0_0x0 != -1) {
    if (*(int *)local_90.field0_0x0 != 0) {
      LOCK();
      *(int *)local_90.field0_0x0 = *(int *)local_90.field0_0x0 + -1;
      local_79 = *(int *)local_90.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1001a703c;
    }
    QArrayData::deallocate((QArrayData *)local_90.field0_0x0,2,8);
  }
LAB_1001a703c:
  if (iVar2 != 0) goto LAB_1001a725b;
  local_98 = DAT_1021eeac0;
  local_a0 = DAT_1021eeab8;
  local_a8 = DAT_1021eeab0;
  local_b0 = PTR_s_system_privilege_admin_1021eeaa8;
  local_c0[0] = 1;
  local_b8 = &local_b0;
  QString::toUtf8();
  QString::toUtf8();
  local_78 = "username";
  local_70 = (long)(int)*(uint *)(local_c8 + 4);
  if ((1 < *(uint *)local_c8) || (*(long *)(local_c8 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_c8,*(uint *)(local_c8 + 4) + 1,*(uint *)(local_c8 + 8) >> 0x1f);
  }
  local_68 = local_c8 + *(long *)(local_c8 + 0x10);
  local_60 = 0;
  local_58 = "password";
  local_50 = (long)(int)*(uint *)(local_d0 + 4);
  if ((1 < *(uint *)local_d0) || (*(long *)(local_d0 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_d0,*(uint *)(local_d0 + 4) + 1,*(uint *)(local_d0 + 8) >> 0x1f);
  }
  local_48 = local_d0 + *(long *)(local_d0 + 0x10);
  local_40 = 0;
  local_e0[0] = 2;
  local_d8 = &local_78;
  iVar2 = _AuthorizationCopyRights(local_88,local_c0,local_e0,0x12,0);
  _AuthorizationFree(local_88,0);
  local_e8.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("Authorize",9);
  MacUtils::writeAuthorizationStatus(iVar2,&local_e8);
  if (*(int *)local_e8.field0_0x0 != -1) {
    if (*(int *)local_e8.field0_0x0 != 0) {
      LOCK();
      *(int *)local_e8.field0_0x0 = *(int *)local_e8.field0_0x0 + -1;
      local_79 = *(int *)local_e8.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1001a71ef;
    }
    QArrayData::deallocate((QArrayData *)local_e8.field0_0x0,2,8);
  }
LAB_1001a71ef:
  if (*(int *)local_d0 != -1) {
    if (*(int *)local_d0 != 0) {
      LOCK();
      *(int *)local_d0 = *(int *)local_d0 + -1;
      local_79 = *(int *)local_d0 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1001a7225;
    }
    QArrayData::deallocate(local_d0,1,8);
  }
LAB_1001a7225:
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_79 = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_79) goto LAB_1001a725b;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_1001a725b:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2 == 0;
}



undefined8 FUN_100273060(void)

{
  long lVar1;
  long lVar2;
  QArrayData *pQVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  int local_94;
  QArrayData *local_90;
  QArrayData *local_88;
  QArrayData *local_80;
  QArrayData *local_78;
  int local_6c;
  int local_68;
  int local_64;
  QDateTime local_60 [8];
  QDateTime local_58 [15];
  undefined1 local_49;
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  DAT_101115c78 = 1;
  local_28 = lVar1;
  iVar5 = FUN_1000ec2a0();
  uVar8 = 0xffffffff;
  if (iVar5 == 0) goto LAB_1002733b6;
  QDateTime::currentDateTime();
  QDateTime::toTimeSpec(local_58,local_60,1);
  DAT_1011c3808 = QDateTime::toTime_t();
  QDateTime::~QDateTime(local_58);
  QDateTime::~QDateTime(local_60);
  local_64 = -1;
  local_68 = 0;
  local_6c = 0;
  iVar5 = FUN_1000ec3b0(&local_68,4,&local_6c,0);
  bVar7 = false;
  if ((iVar5 != 0) && (bVar7 = false, local_6c != 0)) {
    bVar7 = false;
    iVar5 = FUN_1000ec3b0(&local_64,4,&local_6c,0);
    if ((iVar5 != 0) && (local_6c != 0)) {
      iVar5 = FUN_1000ec3b0(local_38,0x10,&local_6c,0);
      bVar7 = local_6c != 0 && iVar5 != 0;
    }
  }
  FUN_1000ec640();
  if ((local_68 == 0) || (local_64 == -1)) {
    uVar8 = 0;
    FUN_1008e3970("","LocalDevices",0,
                  "Snapshot doesn\'t contain network-location state. DHCP renew will be sent");
    goto LAB_1002733b6;
  }
  if (bVar7) {
    CVmConfiguration::getVmIdentification();
    CVmIdentification::getServerUuid();
    FUN_1007d6bf0(&local_78,local_48);
    iVar5 = _memcmp(local_38,local_48,0x10);
    if (iVar5 != 0) {
      FUN_1007d6a90(&local_80,local_38);
      QString::toUtf8();
      pQVar3 = local_88;
      lVar2 = *(long *)(local_88 + 0x10);
      QString::toUtf8();
      FUN_1008e3970("","LocalDevices",0,
                    "VM migration detected (server uuid was %s, now %s), DHCP renew will be sent",
                    pQVar3 + lVar2,local_90 + *(long *)(local_90 + 0x10));
      if (*(int *)local_90 != -1) {
        if (*(int *)local_90 != 0) {
          LOCK();
          *(int *)local_90 = *(int *)local_90 + -1;
          local_49 = *(int *)local_90 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100273252;
        }
        QArrayData::deallocate(local_90,1,8);
      }
LAB_100273252:
      if (*(int *)local_88 != -1) {
        if (*(int *)local_88 != 0) {
          LOCK();
          *(int *)local_88 = *(int *)local_88 + -1;
          local_49 = *(int *)local_88 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_100273282;
        }
        QArrayData::deallocate(local_88,1,8);
      }
LAB_100273282:
      if (*(int *)local_80 != -1) {
        if (*(int *)local_80 != 0) {
          LOCK();
          *(int *)local_80 = *(int *)local_80 + -1;
          local_49 = *(int *)local_80 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002732b2;
        }
        QArrayData::deallocate(local_80,2,8);
      }
LAB_1002732b2:
      uVar8 = 0;
      if (*(int *)local_78 != -1) {
        if (*(int *)local_78 != 0) {
          LOCK();
          *(int *)local_78 = *(int *)local_78 + -1;
          local_49 = *(int *)local_78 != 0;
          UNLOCK();
          if ((bool)local_49) goto LAB_1002733b6;
        }
        QArrayData::deallocate(local_78,2,8);
      }
      goto LAB_1002733b6;
    }
    if (*(int *)local_78 != -1) {
      if (*(int *)local_78 != 0) {
        LOCK();
        *(int *)local_78 = *(int *)local_78 + -1;
        local_49 = *(int *)local_78 != 0;
        UNLOCK();
        if ((bool)local_49) goto LAB_100273348;
      }
      QArrayData::deallocate(local_78,2,8);
    }
  }
LAB_100273348:
  iVar6 = DAT_1011c3808 - local_68;
  iVar5 = -iVar6;
  if (0 < iVar6) {
    iVar5 = iVar6;
  }
  iVar6 = FUN_100060640();
  uVar8 = 0;
  if (iVar6 == 0) {
    if (600 < iVar5) goto LAB_1002733b6;
  }
  else if (((0x78 < iVar5) || (cVar4 = FUN_10027ec90(&local_94), cVar4 == '\0')) ||
          (local_94 != local_64)) goto LAB_1002733b6;
  uVar8 = 0;
  FUN_1008e3970("","LocalDevices",0,"No need to send DHCP renew");
  DAT_101115c78 = 0;
LAB_1002733b6:
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar8;
}


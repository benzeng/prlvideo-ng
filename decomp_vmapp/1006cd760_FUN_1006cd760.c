
undefined8 FUN_1006cd760(undefined8 param_1,char param_2)

{
  sa_family_t sVar1;
  char *pcVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  ifaddrs *piVar7;
  ifaddrs *piVar8;
  socklen_t sVar9;
  undefined1 auVar10 [16];
  QTypedArrayData<unsigned_short> *pQStack_4b0;
  QString local_498;
  QString QStack_490;
  QString local_488;
  undefined1 local_480;
  ifaddrs *local_470;
  QString local_468;
  QString local_460;
  QString local_458;
  undefined1 local_449;
  char local_448 [1040];
  long local_38;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar6;
  FUN_1006cdcc0();
  local_470 = (ifaddrs *)0x0;
  iVar4 = _getifaddrs(&local_470);
  puVar3 = PTR_shared_null_100ba20d0;
  if (iVar4 < 0) {
    FUN_1008e3970("","prl_net",0,"getifaddrs() failed.");
    uVar5 = 0x80004001;
  }
  else {
    piVar7 = (ifaddrs *)0x0;
    if (local_470 != (ifaddrs *)0x0) {
      auVar10._8_4_ = (int)PTR_shared_null_100ba20d0;
      auVar10._0_8_ = PTR_shared_null_100ba20d0;
      auVar10._12_4_ = (int)((ulong)PTR_shared_null_100ba20d0 >> 0x20);
      piVar8 = local_470;
      do {
        if (piVar8->ifa_addr != (sockaddr *)0x0) {
          sVar1 = piVar8->ifa_addr->sa_family;
          if (param_2 == '\0') {
            if (sVar1 == '\x02') goto LAB_1006cd829;
          }
          else if ((sVar1 == '\x02') || (sVar1 == '\x1e')) {
LAB_1006cd829:
            pQStack_4b0 = auVar10._8_8_;
            local_498.field0_0x0 = (QTypedArrayData<unsigned_short> *)puVar3;
            QStack_490.field0_0x0 = pQStack_4b0;
            local_488.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
            pcVar2 = piVar8->ifa_name;
            if (pcVar2 != (char *)0x0) {
              _strlen(pcVar2);
            }
            QString::fromUtf8_helper((char *)&local_468,(int)pcVar2);
            QString::operator=(&local_498,&local_468);
            if (*(int *)local_468.field0_0x0 != -1) {
              if (*(int *)local_468.field0_0x0 != 0) {
                LOCK();
                *(int *)local_468.field0_0x0 = *(int *)local_468.field0_0x0 + -1;
                local_449 = *(int *)local_468.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_449) goto LAB_1006cd8ba;
              }
              QArrayData::deallocate((QArrayData *)local_468.field0_0x0,2,8);
            }
LAB_1006cd8ba:
            sVar1 = piVar8->ifa_addr->sa_family;
            local_480 = sVar1 == '\x1e';
            sVar9 = 0x1c;
            if (sVar1 == '\x02') {
              sVar9 = 0x10;
            }
            iVar4 = _getnameinfo(piVar8->ifa_addr,sVar9,local_448,0x401,(char *)0x0,0,2);
            if (iVar4 == 0) {
              _strlen(local_448);
              QString::fromUtf8_helper((char *)&local_460,(int)local_448);
              QString::operator=(&QStack_490,&local_460);
              if (*(int *)local_460.field0_0x0 != -1) {
                if (*(int *)local_460.field0_0x0 != 0) {
                  LOCK();
                  *(int *)local_460.field0_0x0 = *(int *)local_460.field0_0x0 + -1;
                  local_449 = *(int *)local_460.field0_0x0 != 0;
                  UNLOCK();
                  if ((bool)local_449) goto LAB_1006cd9a7;
                }
                QArrayData::deallocate((QArrayData *)local_460.field0_0x0,2,8);
              }
LAB_1006cd9a7:
              iVar4 = _getnameinfo(piVar8->ifa_netmask,sVar9,local_448,0x401,(char *)0x0,0,2);
              if (iVar4 == 0) {
                _strlen(local_448);
                QString::fromUtf8_helper((char *)&local_458,(int)local_448);
                QString::operator=(&local_488,&local_458);
                if (*(int *)local_458.field0_0x0 != -1) {
                  if (*(int *)local_458.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_458.field0_0x0 = *(int *)local_458.field0_0x0 + -1;
                    local_449 = *(int *)local_458.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_449) goto LAB_1006cda3f;
                  }
                  QArrayData::deallocate((QArrayData *)local_458.field0_0x0,2,8);
                }
              }
LAB_1006cda3f:
              FUN_1006cdd30(param_1,&local_498);
            }
            else {
              ___error();
              FUN_1008e3970("","prl_net",0,"::getnameinfo failed: ret_code=%d, errno=%d");
            }
            FUN_10064fce0(&local_498);
          }
        }
        piVar8 = piVar8->ifa_next;
        piVar7 = local_470;
      } while (piVar8 != (ifaddrs *)0x0);
    }
    _freeifaddrs(piVar7);
    local_470 = (ifaddrs *)0x0;
    lVar6 = *(long *)PTR____stack_chk_guard_100ba2320;
    uVar5 = 0;
  }
  if (lVar6 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}


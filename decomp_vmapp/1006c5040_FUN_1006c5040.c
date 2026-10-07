
undefined4 FUN_1006c5040(undefined8 param_1,uint param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_95;
  int local_94;
  QArrayData *local_90;
  QString local_88;
  QString local_80;
  char local_75;
  int local_74;
  QArrayData *local_70;
  QArrayData *local_68;
  QString local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  cVar1 = FUN_1006d8240();
  if (cVar1 != '\0') {
    if (param_2 == 1) {
      return 0;
    }
    local_68 = (QArrayData *)PTR_shared_null_100ba20d0;
    local_70 = (QArrayData *)PTR_shared_null_100ba20d0;
    FUN_1006c3480(param_1,&local_68,&local_70);
    if (param_2 == 2) {
      uVar3 = FUN_1006c39a0(&local_68,&local_70,"light_restart");
    }
    else {
      uVar3 = FUN_1006c39a0(&local_68,&local_70,"readconf");
    }
    if (*(int *)local_70 != -1) {
      if (*(int *)local_70 != 0) {
        LOCK();
        *(int *)local_70 = *(int *)local_70 + -1;
        local_31 = *(int *)local_70 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006c527d;
      }
      QArrayData::deallocate(local_70,2,8);
    }
LAB_1006c527d:
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        UNLOCK();
        if (*(int *)local_68 != 0) {
          return uVar3;
        }
        local_31 = 0;
      }
      QArrayData::deallocate(local_68,2,8);
    }
    return uVar3;
  }
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","prl_net",1,"Control com.parallels.vm.prl_naptd");
  }
  local_74 = -1;
  local_75 = '\0';
  cVar2 = FUN_1006c5b00(&local_74,&local_75);
  iVar4 = local_74;
  cVar1 = local_75;
  if (cVar2 == '\0') {
    return 0x80004001;
  }
  if ((param_2 & 0xfffffffd) != 0) {
    if (param_2 == 1) {
      iVar4 = FUN_1007d8970("/bin/launchctl stop com.parallels.vm.prl_naptd");
      if ((iVar4 != 0) && (FUN_1006c21a0(), 0 < DAT_1011b55f8)) {
        uVar6 = FUN_1006c2980();
        FUN_1008e3970("","prl_net",1,
                      "warning: plist seems to be not loaded, launchctl stop of naptd returned %d (errno %d)."
                      ,iVar4,uVar6);
      }
      if (local_74 == -1) {
        if (DAT_1011b55f8 < 1) {
          return 0;
        }
        if (local_75 == '\0') {
          pcVar8 = "not loaded";
        }
        else {
          pcVar8 = "loaded";
        }
        FUN_1008e3970("","prl_net",1,"%s is not started (plist is %s)","com.parallels.vm.prl_naptd",
                      pcVar8);
        return 0;
      }
      _kill(local_74,0xf);
      iVar4 = 0;
      if (0 < DAT_1011b55f8) {
        iVar4 = 0;
        FUN_1008e3970("","prl_net",1,"Wait exit of %s","com.parallels.vm.prl_naptd");
      }
      do {
        local_94 = -1;
        local_95 = 0;
        cVar1 = FUN_1006c5b00(&local_94,&local_95);
        if (cVar1 == '\0') break;
        if (local_94 == -1) {
          if (DAT_1011b55f8 < 1) {
            return 0;
          }
          FUN_1008e3970("","prl_net",1,"Done com.parallels.vm.prl_naptd");
          return 0;
        }
        _usleep(100000);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x14);
      FUN_1008e3970("","prl_net",0,"failed to stop %s after retry-count %d",
                    "com.parallels.vm.prl_naptd",iVar4);
    }
    else {
      FUN_1008e3970("","prl_net",0,"[startPrlNetService] Unknown control code %d",param_2);
    }
    return 0x80000009;
  }
  if ((0 < DAT_1011b55f8) && (local_75 != '\0' || local_74 != -1)) {
    pcVar8 = "restart";
    if (param_2 == 2) {
      pcVar8 = "light restart";
    }
    pcVar7 = "not loaded";
    if (local_75 != '\0') {
      pcVar7 = "loaded";
    }
    FUN_1008e3970("","prl_net",1,"%s of %s: pid = %i, plist is %s",pcVar8,
                  "com.parallels.vm.prl_naptd",local_74,pcVar7);
  }
  if (cVar1 != '\0') goto LAB_1006c5735;
  local_80.field0_0x0 =
       (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("/bin/launchctl load ",0x14);
  QString::fromUtf8_helper((char *)&local_60,0xa51e6a);
  QString::append(&local_60);
  local_88.field0_0x0 = local_60.field0_0x0;
  if (1 < *(int *)local_60.field0_0x0 + 1U) {
    LOCK();
    *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + 1;
    local_31 = *(int *)local_60.field0_0x0 != 0;
    UNLOCK();
  }
  QString::fromUtf8_helper((char *)&local_58,0xa02eac);
  QString::append(&local_88);
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c53e6;
    }
    QArrayData::deallocate(local_58,2,8);
  }
LAB_1006c53e6:
  if (*(int *)local_60.field0_0x0 != -1) {
    if (*(int *)local_60.field0_0x0 != 0) {
      LOCK();
      *(int *)local_60.field0_0x0 = *(int *)local_60.field0_0x0 + -1;
      local_31 = *(int *)local_60.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c5416;
    }
    QArrayData::deallocate((QArrayData *)local_60.field0_0x0,2,8);
  }
LAB_1006c5416:
  cVar1 = FUN_1006df1a0();
  if (cVar1 == '\0') {
    QString::fromUtf8_helper((char *)&local_48,0xae76a9);
    QString::append(&local_88);
    if (*(int *)local_48 != -1) {
      if (*(int *)local_48 != 0) {
        LOCK();
        *(int *)local_48 = *(int *)local_48 + -1;
        local_31 = *(int *)local_48 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006c5524;
      }
      QArrayData::deallocate(local_48,2,8);
    }
  }
  else {
    QString::fromUtf8_helper((char *)&local_50,0xae7688);
    QString::append(&local_88);
    if (*(int *)local_50 != -1) {
      if (*(int *)local_50 != 0) {
        LOCK();
        *(int *)local_50 = *(int *)local_50 + -1;
        local_31 = *(int *)local_50 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_1006c5524;
      }
      QArrayData::deallocate(local_50,2,8);
    }
  }
LAB_1006c5524:
  QString::fromUtf8_helper((char *)&local_40,0xa51e6a);
  QString::append(&local_88);
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c5576;
    }
    QArrayData::deallocate(local_40,2,8);
  }
LAB_1006c5576:
  QString::append(&local_80);
  if (*(int *)local_88.field0_0x0 != -1) {
    if (*(int *)local_88.field0_0x0 != 0) {
      LOCK();
      *(int *)local_88.field0_0x0 = *(int *)local_88.field0_0x0 + -1;
      local_31 = *(int *)local_88.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c55b3;
    }
    QArrayData::deallocate((QArrayData *)local_88.field0_0x0,2,8);
  }
LAB_1006c55b3:
  QString::toUtf8();
  iVar5 = FUN_1007d8970(local_90 + *(long *)(local_90 + 0x10));
  if (*(int *)local_90 != -1) {
    if (*(int *)local_90 != 0) {
      LOCK();
      *(int *)local_90 = *(int *)local_90 + -1;
      local_31 = *(int *)local_90 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c560c;
    }
    QArrayData::deallocate(local_90,1,8);
  }
LAB_1006c560c:
  if (iVar5 != 0) {
    FUN_1006c21a0();
    uVar3 = FUN_1006c2980();
    FUN_1008e3970("","prl_net",0,"launchctl load of natd-plist failed with %d (errno %d)",iVar5,
                  uVar3);
    if (*(int *)local_80.field0_0x0 == -1) {
      return 0x80004001;
    }
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_80.field0_0x0 != 0) {
        return 0x80004001;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
    return 0x80004001;
  }
  if (*(int *)local_80.field0_0x0 != -1) {
    if (*(int *)local_80.field0_0x0 != 0) {
      LOCK();
      *(int *)local_80.field0_0x0 = *(int *)local_80.field0_0x0 + -1;
      local_31 = *(int *)local_80.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1006c5735;
    }
    QArrayData::deallocate((QArrayData *)local_80.field0_0x0,2,8);
  }
LAB_1006c5735:
  if (iVar4 != -1) {
    iVar5 = 1;
    if (param_2 == 2) {
      iVar5 = 0x1e;
    }
    _kill(iVar4,iVar5);
    return 0;
  }
  iVar4 = FUN_1007d8970("/bin/launchctl start com.parallels.vm.prl_naptd");
  if (iVar4 == 0) {
    return 0;
  }
  FUN_1006c21a0();
  uVar6 = FUN_1006c2980();
  FUN_1008e3970("","prl_net",0,"launchctl start of naptd failed with %d (errno %d)",iVar4,uVar6);
  return 0x80004001;
}


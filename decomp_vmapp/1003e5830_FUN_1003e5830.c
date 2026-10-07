
undefined8 FUN_1003e5830(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  QArrayData *local_58;
  uint local_4c;
  QArrayData *local_48;
  QArrayData *local_40;
  int local_38;
  undefined1 local_31;
  
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_100ba2470;
  QString::toUtf8();
  iVar3 = _IORegistryEntryFromPath(uVar1,local_40 + *(long *)(local_40 + 0x10));
  local_38 = iVar3;
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      local_31 = *(int *)local_40 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_1003e589d;
    }
    QArrayData::deallocate(local_40,1,8);
  }
LAB_1003e589d:
  if (iVar3 == 0) {
    FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] Can not get access to IORegistry path ");
    return 0xffffffff;
  }
  lVar5 = _IORegistryEntrySearchCFProperty
                    (iVar3,"IOService",&cf_BSDName,*(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0
                     ,1);
  FUN_100788b70(&local_48,lVar5);
  iVar7 = 0xe;
  do {
    local_4c = 0;
    if ((*(int *)(local_48 + 4) == 0) || (iVar4 = FUN_1003f9150(&local_48,&local_4c), iVar4 != 0)) {
      cVar2 = FUN_1003e8cd0(&local_38,param_1 + 8,param_1 + 0x10);
      uVar6 = 0;
      if (cVar2 != '\0') goto LAB_1003e5a95;
      if (iVar7 == 0) {
        uVar6 = 0xffffffef;
        FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] Can not get access to drive");
LAB_1003e5a95:
        if (lVar5 != 0) {
          _CFRelease(lVar5);
        }
        _IOObjectRelease(iVar3);
        if (*(int *)local_48 == -1) {
          return uVar6;
        }
        if (*(int *)local_48 != 0) {
          LOCK();
          *(int *)local_48 = *(int *)local_48 + -1;
          UNLOCK();
          if (*(int *)local_48 != 0) {
            return uVar6;
          }
          local_31 = 0;
        }
        QArrayData::deallocate(local_48,2,8);
        return uVar6;
      }
    }
    else {
      if ((local_4c & 4) != 0) {
        QString::toUtf8();
        FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] The drive %s is busy",
                      local_58 + *(long *)(local_58 + 0x10));
        uVar6 = 0xffffffff;
        if (*(int *)local_58 == -1) goto LAB_1003e5a95;
        if (*(int *)local_58 != 0) {
          LOCK();
          *(int *)local_58 = *(int *)local_58 + -1;
          local_31 = *(int *)local_58 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_1003e5a95;
        }
        QArrayData::deallocate(local_58,1,8);
        goto LAB_1003e5a95;
      }
      if (iVar7 == 0) {
        uVar6 = 0xffffffff;
        FUN_1008e3970("","DVDImage",0,"[DVD Drive:PT] Unmount attempts (%u)",0xf);
        goto LAB_1003e5a95;
      }
    }
    iVar7 = iVar7 + -1;
    _usleep(500000);
  } while( true );
}


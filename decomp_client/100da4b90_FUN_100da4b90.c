
bool FUN_100da4b90(QString *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_40,param_1);
  QFileInfo::fileName();
  QString::toUtf8();
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
  lVar4 = _IOBSDNameMatching(uVar1,0,local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da4c17;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100da4c17:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da4c47;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100da4c47:
  QFileInfo::~QFileInfo(local_40);
  if (lVar4 == 0) {
    bVar7 = false;
  }
  else {
    iVar3 = _IOServiceGetMatchingService(uVar1,lVar4);
    if (iVar3 == 0) {
      bVar7 = false;
    }
    else {
      lVar4 = _IORegistryEntrySearchCFProperty
                        (iVar3,"IOService",&cf_Writable,
                         *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,1);
      if (lVar4 == 0) {
        bVar7 = false;
      }
      else {
        lVar5 = _CFGetTypeID(lVar4);
        lVar6 = _CFBooleanGetTypeID();
        if (lVar5 == lVar6) {
          cVar2 = _CFBooleanGetValue(lVar4);
          bVar7 = cVar2 == '\0';
        }
        else {
          bVar7 = false;
        }
        _CFRelease(lVar4);
      }
      _IOObjectRelease(iVar3);
    }
  }
  return bVar7;
}


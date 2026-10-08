
bool FUN_100da4680(QString *param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  QFileInfo local_40 [8];
  QArrayData *local_38;
  QArrayData *local_30;
  undefined1 local_21;
  
  QFileInfo::QFileInfo(local_40,param_1);
  QFileInfo::fileName();
  QString::toUtf8();
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_1021e19c0;
  lVar3 = _IOBSDNameMatching(uVar1,0,local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_21 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da4707;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_100da4707:
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_21 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_21) goto LAB_100da4737;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100da4737:
  QFileInfo::~QFileInfo(local_40);
  if (lVar3 == 0) {
    bVar6 = false;
  }
  else {
    iVar2 = _IOServiceGetMatchingService(uVar1,lVar3);
    if (iVar2 == 0) {
      bVar6 = false;
    }
    else {
      lVar3 = _IORegistryEntrySearchCFProperty
                        (iVar2,"IOService",&cf_ThunderboltPath,
                         *(undefined8 *)PTR__kCFAllocatorDefault_1021e18d0,3);
      if (lVar3 == 0) {
        bVar6 = false;
      }
      else {
        lVar4 = _CFGetTypeID(lVar3);
        lVar5 = _CFStringGetTypeID();
        bVar6 = lVar4 == lVar5;
        _CFRelease(lVar3);
      }
      _IOObjectRelease(iVar2);
    }
  }
  return bVar6;
}


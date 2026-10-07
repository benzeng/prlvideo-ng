
undefined8 FUN_100663130(undefined8 param_1,QString *param_2)

{
  undefined4 uVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined8 uVar11;
  QString local_8d8;
  QArrayData *local_8d0;
  QArrayData *local_8c8;
  QArrayData *local_8c0;
  undefined1 local_8b1;
  undefined1 local_8b0 [1112];
  char local_458 [1056];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar2;
  iVar4 = _statfs_INODE64(param_1,local_8b0);
  uVar11 = 0xffffffff;
  if (iVar4 != 0) goto LAB_1006633d9;
  sVar6 = _strlen(local_458);
  local_8c0 = (QArrayData *)QString::fromAscii_helper(local_458,(int)sVar6);
  local_8c8 = (QArrayData *)QString::fromAscii_helper("/dev/",5);
  cVar3 = QString::startsWith(&local_8c0,&local_8c8,1);
  if (*(int *)local_8c8 != -1) {
    if (*(int *)local_8c8 != 0) {
      LOCK();
      *(int *)local_8c8 = *(int *)local_8c8 + -1;
      local_8b1 = *(int *)local_8c8 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_1006631fd;
    }
    QArrayData::deallocate(local_8c8,2,8);
  }
LAB_1006631fd:
  if (cVar3 != '\0') {
    QString::remove((int)&local_8c0,0);
  }
  QString::toUtf8();
  uVar1 = *(undefined4 *)PTR__kIOMasterPortDefault_100ba2470;
  lVar7 = _IOBSDNameMatching(uVar1,0,local_8d0 + *(long *)(local_8d0 + 0x10));
  if (*(int *)local_8d0 != -1) {
    if (*(int *)local_8d0 != 0) {
      LOCK();
      *(int *)local_8d0 = *(int *)local_8d0 + -1;
      local_8b1 = *(int *)local_8d0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_100663285;
    }
    QArrayData::deallocate(local_8d0,1,8);
  }
LAB_100663285:
  uVar11 = 0xffffffff;
  if (lVar7 != 0) {
    iVar4 = _IOServiceGetMatchingService(uVar1,lVar7);
    uVar11 = 0xffffffff;
    if ((iVar4 != 0) &&
       (lVar7 = _IORegistryEntrySearchCFProperty
                          (iVar4,"IOService",&cf_image_path,
                           *(undefined8 *)PTR__kCFAllocatorDefault_100ba23b0,3), lVar7 != 0)) {
      lVar8 = _CFGetTypeID(lVar7);
      lVar9 = _CFDataGetTypeID();
      uVar11 = 0xffffffff;
      if (lVar8 == lVar9) {
        pcVar10 = (char *)_CFDataGetBytePtr(lVar7);
        iVar5 = _CFDataGetLength(lVar7);
        if ((pcVar10 != (char *)0x0) && (iVar5 == -1)) {
          _strlen(pcVar10);
        }
        QString::fromUtf8_helper((char *)&local_8d8,(int)pcVar10);
        QString::operator=(param_2,&local_8d8);
        uVar11 = 0;
        if (*(int *)local_8d8.field0_0x0 != -1) {
          if (*(int *)local_8d8.field0_0x0 != 0) {
            LOCK();
            *(int *)local_8d8.field0_0x0 = *(int *)local_8d8.field0_0x0 + -1;
            local_8b1 = *(int *)local_8d8.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_8b1) goto LAB_10066338d;
          }
          QArrayData::deallocate((QArrayData *)local_8d8.field0_0x0,2,8);
        }
      }
LAB_10066338d:
      _CFRelease(lVar7);
    }
    _IOObjectRelease(iVar4);
  }
  if (*(int *)local_8c0 != -1) {
    if (*(int *)local_8c0 != 0) {
      LOCK();
      *(int *)local_8c0 = *(int *)local_8c0 + -1;
      local_8b1 = *(int *)local_8c0 != 0;
      UNLOCK();
      if ((bool)local_8b1) goto LAB_1006633d9;
    }
    QArrayData::deallocate(local_8c0,2,8);
  }
LAB_1006633d9:
  if (lVar2 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar11;
}


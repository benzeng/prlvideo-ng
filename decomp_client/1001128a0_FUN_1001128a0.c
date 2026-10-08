
undefined1 FUN_1001128a0(undefined8 param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  int iVar9;
  QString local_1a8;
  QString local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  CVmHardDisk local_190 [351];
  undefined1 local_31;
  
  cVar3 = FUN_100d80630(1);
  if (cVar3 == '\0') {
    CVmHardDisk::CVmHardDisk(local_190);
    local_194 = 0;
    local_198 = 0;
    cVar3 = FUN_100112b70(param_1,local_190,&local_194,&local_198);
    iVar9 = 0;
    uVar8 = 0;
    if (cVar3 != '\0') {
      while( true ) {
        iVar4 = FUN_10015d3a0(param_1);
        uVar8 = 1;
        if (iVar4 <= iVar9) break;
        lVar6 = FUN_10015d330(param_1,iVar9);
        if ((lVar6 != 0) && (cVar3 = FUN_10018ecf0(lVar6), cVar3 != '\0')) {
          FUN_10018c2b0(lVar6);
          lVar7 = CVmConfiguration::getVmHardwareList();
          if (*(int *)(*(long *)(lVar7 + 0x1b0) + 8) < *(int *)(*(long *)(lVar7 + 0x1b0) + 0xc)) {
            iVar4 = 0;
            do {
              FUN_100129730((long *)(lVar7 + 0x1b0),iVar4);
              iVar5 = CVmDevice::getEmulatedType();
              if (iVar5 == 3) {
                FUN_10018c2b0(lVar6);
                lVar6 = CVmConfiguration::getVmHardwareList();
                lVar6 = *(long *)(*(long *)(lVar6 + 0x1b0) + 0x10 +
                                 (long)*(int *)(*(long *)(lVar6 + 0x1b0) + 8) * 8);
                CVmDevice::getUserFriendlyName();
                CVmDevice::getUserFriendlyName();
                cVar3 = operator==(&local_1a0,&local_1a8);
                if (cVar3 == '\0') {
                  bVar2 = false;
                }
                else {
                  lVar6 = *(long *)(lVar6 + 0xf0);
                  bVar2 = *(int *)(lVar6 + 8) < *(int *)(lVar6 + 0xc);
                }
                if (*(int *)local_1a8.field0_0x0 != -1) {
                  if (*(int *)local_1a8.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1a8.field0_0x0 = *(int *)local_1a8.field0_0x0 + -1;
                    local_31 = *(int *)local_1a8.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100112a62;
                  }
                  QArrayData::deallocate((QArrayData *)local_1a8.field0_0x0,2,8);
                }
LAB_100112a62:
                if (*(int *)local_1a0.field0_0x0 != -1) {
                  if (*(int *)local_1a0.field0_0x0 != 0) {
                    LOCK();
                    *(int *)local_1a0.field0_0x0 = *(int *)local_1a0.field0_0x0 + -1;
                    local_31 = *(int *)local_1a0.field0_0x0 != 0;
                    UNLOCK();
                    if ((bool)local_31) goto LAB_100112a98;
                  }
                  QArrayData::deallocate((QArrayData *)local_1a0.field0_0x0,2,8);
                }
LAB_100112a98:
                if (bVar2) {
                  uVar8 = 0;
                  goto LAB_100112aa3;
                }
                break;
              }
              iVar4 = iVar4 + 1;
              lVar1 = *(long *)(lVar7 + 0x1b0);
            } while (iVar4 < *(int *)(lVar1 + 0xc) - *(int *)(lVar1 + 8));
          }
        }
        iVar9 = iVar9 + 1;
      }
    }
LAB_100112aa3:
    CVmHardDisk::~CVmHardDisk(local_190);
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}


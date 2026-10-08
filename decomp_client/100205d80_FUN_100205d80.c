
bool FUN_100205d80(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  QArrayData *local_28;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x38);
  if (lVar3 == 0) {
    FUN_100df99c0("","prl_client_app",0,"Failed to get converted VM configuration");
    bVar5 = true;
  }
  else {
    FUN_10018c2b0(lVar3);
    lVar4 = CVmConfiguration::getVmHardwareList();
    bVar5 = true;
    if (*(int *)(*(long *)(lVar4 + 0x1b0) + 0xc) != *(int *)(*(long *)(lVar4 + 0x1b0) + 8)) {
      FUN_10018c2b0(lVar3);
      CVmConfiguration::getVmHardwareList();
      CVmHardDisk::getCompatLevel();
      iVar1 = QString::compare_helper
                        (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                         "level0",0xffffffff,1);
      bVar5 = true;
      if (((iVar1 != 0) &&
          (iVar1 = QString::compare_helper
                             (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                              "level1",0xffffffff,1), iVar1 != 0)) &&
         (iVar1 = QString::compare_helper
                            (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                             "level2:p",0xffffffff,1), iVar1 != 0)) {
        iVar1 = QString::compare_helper
                          (local_28 + *(long *)(local_28 + 0x10),*(undefined4 *)(local_28 + 4),
                           "level2:v",0xffffffff,1);
        bVar5 = iVar1 == 0;
      }
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return bVar5;
          }
        }
        QArrayData::deallocate(local_28,2,8);
      }
    }
  }
  return bVar5;
}


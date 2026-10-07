
bool FUN_1000877f0(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  bool bVar8;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar3 = CVmConfiguration::getVmHardwareList();
  if (lVar3 == 0) {
    bVar8 = false;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x1b0);
    uVar6 = (ulong)*(uint *)(lVar4 + 8);
    if ((int)*(uint *)(lVar4 + 8) < *(int *)(lVar4 + 0xc)) {
      lVar7 = 0;
      bVar1 = 0;
      do {
        if ((*(long *)(lVar4 + 0x10 + ((int)uVar6 + lVar7) * 8) != 0) &&
           (iVar2 = CVmDevice::getEnabled(), iVar2 == 1)) {
          CVmDevice::getSystemName();
          plVar5 = (long *)FUN_10059ac80(&local_40,9,0);
          if (plVar5 != (long *)0x0) {
            bVar1 = (**(code **)(*plVar5 + 0x1d8))(plVar5);
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
          if (*(int *)local_40 != -1) {
            if (*(int *)local_40 != 0) {
              LOCK();
              *(int *)local_40 = *(int *)local_40 + -1;
              local_32 = *(int *)local_40 != 0;
              UNLOCK();
              if ((bool)local_32) goto LAB_1000878e0;
            }
            QArrayData::deallocate(local_40,2,8);
          }
        }
LAB_1000878e0:
        if ((bVar1 & 1) != 0) break;
        lVar7 = lVar7 + 1;
        lVar4 = *(long *)(lVar3 + 0x1b0);
        uVar6 = (ulong)*(int *)(lVar4 + 8);
      } while (lVar7 < (long)((long)*(int *)(lVar4 + 0xc) - uVar6));
      bVar8 = (bVar1 & 1) != 0;
    }
    else {
      bVar8 = false;
    }
  }
  return bVar8;
}


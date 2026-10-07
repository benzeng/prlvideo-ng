
undefined4 FUN_1000946b0(uint param_1)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  undefined4 uVar5;
  
  pcVar2 = (char *)FUN_1007da5e0("devices.net.force_adapter_type","");
  iVar1 = -1;
  if (pcVar2 != (char *)0x0) {
    sVar3 = _strlen(pcVar2);
    iVar1 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(pcVar2,iVar1);
  if (*(int *)(pQVar4 + 4) == 0) {
    if (param_1 < 5) {
      uVar5 = *(undefined4 *)(&DAT_100b2da90 + (long)(int)param_1 * 4);
    }
    else {
      FUN_1008e3970("","vm",0,"Net Adapter Type 0x%x is not supported in this version!",param_1);
      uVar5 = 0;
    }
  }
  else {
    iVar1 = QString::compare_helper
                      (pQVar4 + *(long *)(pQVar4 + 0x10),*(int *)(pQVar4 + 4),"virtio",0xffffffff,1)
    ;
    uVar5 = 0x40;
    if (iVar1 != 0) {
      iVar1 = QString::compare_helper
                        (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),"e1000",
                         0xffffffff,1);
      uVar5 = 0x80;
      if (iVar1 != 0) {
        iVar1 = QString::compare_helper
                          (pQVar4 + *(long *)(pQVar4 + 0x10),*(undefined4 *)(pQVar4 + 4),"e1000e",
                           0xffffffff,1);
        uVar5 = 1;
        if (iVar1 == 0) {
          uVar5 = 0x81;
        }
      }
    }
  }
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) {
        return uVar5;
      }
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
  return uVar5;
}


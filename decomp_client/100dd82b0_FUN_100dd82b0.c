
int FUN_100dd82b0(ulong param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  size_t sVar5;
  QArrayData *pQVar6;
  QArrayData *local_c8;
  undefined4 local_bc;
  char local_b8 [136];
  long local_30;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_bc = 0;
  local_30 = lVar1;
  iVar2 = _IORegistryEntryGetChildIterator(param_1,"IOService",&local_bc);
  if (iVar2 == 0) {
    do {
      iVar3 = _IOIteratorNext(local_bc);
      iVar2 = 0;
      if ((iVar3 == 0) || (iVar4 = _IOObjectConformsTo(iVar3,param_2), iVar2 = iVar3, iVar4 != 0))
      break;
      iVar2 = FUN_100dd82b0(iVar3,param_2);
      _IOObjectRelease(iVar3);
    } while (iVar2 == 0);
    _IOObjectRelease(local_bc);
    goto LAB_100dd843b;
  }
  _IORegistryEntryGetName(param_1 & 0xffffffff,local_b8);
  sVar5 = _strlen(local_b8);
  pQVar6 = (QArrayData *)QString::fromAscii_helper(local_b8,(int)sVar5);
  QString::toUtf8();
  FUN_100df99c0("","HostUtils",0,"#### [%s] Error in children search",
                local_c8 + *(long *)(local_c8 + 0x10));
  if (*(int *)local_c8 != -1) {
    if (*(int *)local_c8 != 0) {
      LOCK();
      *(int *)local_c8 = *(int *)local_c8 + -1;
      local_b8[0] = *(int *)local_c8 != 0;
      UNLOCK();
      if ((bool)local_b8[0]) goto LAB_100dd839d;
    }
    QArrayData::deallocate(local_c8,1,8);
  }
LAB_100dd839d:
  iVar2 = 0;
  if (*(int *)pQVar6 != -1) {
    if (*(int *)pQVar6 != 0) {
      LOCK();
      *(int *)pQVar6 = *(int *)pQVar6 + -1;
      local_b8[0] = *(int *)pQVar6 != 0;
      UNLOCK();
      if ((bool)local_b8[0]) goto LAB_100dd843b;
    }
    QArrayData::deallocate(pQVar6,2,8);
  }
LAB_100dd843b:
  if (lVar1 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}


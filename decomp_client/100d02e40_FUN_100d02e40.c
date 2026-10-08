
undefined4 FUN_100d02e40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  QArrayData *pQVar2;
  QArrayData *pQVar3;
  QArrayData *pQVar4;
  long lVar5;
  
  if ((DAT_1023187c0 != '\0') || (iVar1 = ___cxa_guard_acquire(&DAT_1023187c0), iVar1 == 0))
  goto LAB_100d02fed;
  pQVar2 = (QArrayData *)QString::fromAscii_helper("hostonly",8);
  DAT_102318790 = pQVar2;
  if (1 < *(int *)pQVar2 + 1U) {
    LOCK();
    *(int *)pQVar2 = *(int *)pQVar2 + 1;
    UNLOCK();
  }
  DAT_102318798 = 2;
  pQVar3 = (QArrayData *)QString::fromAscii_helper("bridged",7);
  DAT_1023187a0 = pQVar3;
  if (1 < *(int *)pQVar3 + 1U) {
    LOCK();
    *(int *)pQVar3 = *(int *)pQVar3 + 1;
    UNLOCK();
  }
  DAT_1023187a8 = 1;
  pQVar4 = (QArrayData *)QString::fromAscii_helper("nat",3);
  DAT_1023187b0 = pQVar4;
  if (1 < *(int *)pQVar4 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
  }
  DAT_1023187b8 = 4;
  if (*(int *)pQVar4 != -1) {
    if (*(int *)pQVar4 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100d02f5e;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100d02f5e:
  if (*(int *)pQVar3 != -1) {
    if (*(int *)pQVar3 != 0) {
      LOCK();
      *(int *)pQVar3 = *(int *)pQVar3 + -1;
      UNLOCK();
      if (*(int *)pQVar3 != 0) goto LAB_100d02f95;
    }
    QArrayData::deallocate(pQVar3,2,8);
  }
LAB_100d02f95:
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_100d02fcc;
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_100d02fcc:
  ___cxa_atexit(FUN_100d06fa0,0,0x100000000);
  ___cxa_guard_release(&DAT_1023187c0);
LAB_100d02fed:
  lVar5 = 0;
  iVar1 = QString::compare(param_2,&DAT_102318790,0);
  if (iVar1 != 0) {
    iVar1 = QString::compare(param_2,&DAT_1023187a0,0);
    lVar5 = 1;
    if (iVar1 != 0) {
      iVar1 = QString::compare(param_2,&DAT_1023187b0,0);
      lVar5 = 2;
      if (iVar1 != 0) {
        return 4;
      }
    }
  }
  return (&DAT_102318798)[lVar5 * 4];
}



undefined4 FUN_100785b20(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  QArrayData *local_28;
  int local_20;
  undefined1 local_1a;
  
  if (*(int *)(*param_1 + 4) == 0) {
    pcVar4 = "GetService: bsdName is empty.";
    goto LAB_100785c1f;
  }
  QString::toUtf8();
  if ((1 < *(uint *)local_28) || (*(long *)(local_28 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_28,*(uint *)(local_28 + 4) + 1,*(uint *)(local_28 + 8) >> 0x1f);
  }
  uVar2 = *(undefined4 *)PTR__kIOMasterPortDefault_100ba2470;
  lVar3 = _IOBSDNameMatching(uVar2,0,local_28 + *(long *)(local_28 + 0x10));
  if (*(int *)local_28 != -1) {
    if (*(int *)local_28 != 0) {
      LOCK();
      *(int *)local_28 = *(int *)local_28 + -1;
      local_1a = *(int *)local_28 != 0;
      UNLOCK();
      if ((bool)local_1a) goto LAB_100785bba;
    }
    QArrayData::deallocate(local_28,1,8);
  }
LAB_100785bba:
  if (lVar3 != 0) {
    iVar1 = _IOServiceGetMatchingServices(uVar2,lVar3,&local_20);
    if ((iVar1 == 0) && (local_20 != 0)) {
      uVar2 = _IOIteratorNext(local_20);
      _IOObjectRelease(local_20);
      return uVar2;
    }
    FUN_1008e3970("","HostUtils",0,"GetService: IOServiceGetMatchingServices returned %d iter %x");
    return 0;
  }
  pcVar4 = "GetService: IOBSDNameMatching returned a NULL dictionary.";
LAB_100785c1f:
  FUN_1008e3970("","HostUtils",0,pcVar4);
  return 0;
}


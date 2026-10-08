
undefined4 FUN_100b74290(long param_1,undefined4 param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  QString local_38;
  undefined1 local_2a;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x893,"SetVmUsage");
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("nr_vms",6);
  lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar1 == 0) {
LAB_100b74367:
    lVar6 = 0;
  }
  else {
    lVar7 = 0;
    do {
      while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_38), cVar2 == '\0') {
        lVar1 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100b74356;
      }
      lVar1 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 == 0) goto LAB_100b74367;
LAB_100b74356:
    cVar2 = operator<(&local_38,(QString *)(lVar6 + 0x18));
    if (cVar2 != '\0') goto LAB_100b74367;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_100b74399;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100b74399:
  if (lVar6 == 0) {
    FUN_100df99c0("","License",0,"Error: couldn\'t get VMs total license limit");
    uVar4 = 0x80011033;
  }
  else {
    iVar3 = FUN_100b97420(1,"nr_vms",param_2);
    uVar5 = 0x12;
    if (iVar3 != 0) {
      FUN_100df99c0("","License",0,"Error: can\'t update a number of running VMs in license usage");
      uVar5 = iVar3 + 0x12;
      if (0x19 < uVar5) {
        return 0x80011000;
      }
    }
    uVar4 = *(undefined4 *)(&DAT_101cdc110 + (long)(int)uVar5 * 4);
  }
  return uVar4;
}



undefined4 FUN_100b74470(long param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  QArrayData *pQVar4;
  bool *pbVar5;
  long lVar6;
  long lVar7;
  QString local_38;
  undefined1 local_29;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x8a4,"GetCTUsage");
  }
  local_38.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("ct_total",8);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  if (lVar1 == 0) {
LAB_100b74547:
    lVar6 = 0;
  }
  else {
    lVar7 = 0;
    do {
      while (lVar6 = lVar1, cVar2 = operator<((QString *)(lVar6 + 0x18),&local_38), cVar2 == '\0') {
        lVar1 = *(long *)(lVar6 + 8);
        lVar7 = lVar6;
        if (*(long *)(lVar6 + 8) == 0) goto LAB_100b74536;
      }
      lVar1 = *(long *)(lVar6 + 0x10);
    } while (*(long *)(lVar6 + 0x10) != 0);
    lVar6 = lVar7;
    if (lVar7 == 0) goto LAB_100b74547;
LAB_100b74536:
    cVar2 = operator<(&local_38,(QString *)(lVar6 + 0x18));
    if (cVar2 != '\0') goto LAB_100b74547;
  }
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_29 = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100b74579;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_100b74579:
  uVar3 = 0;
  if (lVar6 != 0) {
    pQVar4 = (QArrayData *)QString::fromAscii_helper("ct_total",8);
    pbVar5 = (bool *)FUN_1006f3180(param_1 + 0x20);
    uVar3 = QString::toUInt(pbVar5,0);
    if (*(int *)pQVar4 != -1) {
      if (*(int *)pQVar4 != 0) {
        LOCK();
        *(int *)pQVar4 = *(int *)pQVar4 + -1;
        UNLOCK();
        if (*(int *)pQVar4 != 0) {
          return uVar3;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(pQVar4,2,8);
    }
  }
  return uVar3;
}


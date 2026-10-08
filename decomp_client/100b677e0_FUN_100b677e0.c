
undefined8 * FUN_100b677e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  QString local_40;
  undefined1 local_32;
  
  if (*(char *)(param_2 + 0x10) == '\0') {
    FUN_100df99c0("","License",0,"ASSERT( %s ) occured in %s:%d [%s]","m_bParsed","VzLicense.cpp",
                  0x18b,"GetProductToString");
  }
  local_40.field0_0x0 = (QTypedArrayData<unsigned_short> *)QString::fromAscii_helper("product",7);
  lVar1 = *(long *)(*(long *)(param_2 + 0x18) + 0x10);
  if (lVar1 != 0) {
    lVar5 = 0;
    do {
      while (lVar4 = lVar1, cVar2 = operator<((QString *)(lVar4 + 0x18),&local_40), cVar2 == '\0') {
        lVar1 = *(long *)(lVar4 + 8);
        lVar5 = lVar4;
        if (*(long *)(lVar4 + 8) == 0) goto LAB_100b678a6;
      }
      lVar1 = *(long *)(lVar4 + 0x10);
    } while (*(long *)(lVar4 + 0x10) != 0);
    lVar4 = lVar5;
    if (lVar5 != 0) {
LAB_100b678a6:
      cVar2 = operator<(&local_40,(QString *)(lVar4 + 0x18));
      if (cVar2 == '\0') {
        FUN_100b7c5b0(param_1,param_2 + 0x18,&local_40);
        goto LAB_100b678df;
      }
    }
  }
  uVar3 = QString::fromAscii_helper("Unknown",7);
  *param_1 = uVar3;
LAB_100b678df:
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_40.field0_0x0 != 0) {
        return param_1;
      }
      local_32 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
  return param_1;
}


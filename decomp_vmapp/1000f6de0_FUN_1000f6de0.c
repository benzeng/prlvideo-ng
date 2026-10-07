
void FUN_1000f6de0(long param_1)

{
  QArrayData *pQVar1;
  char cVar2;
  QArrayData *local_30;
  QArrayData *local_20;
  
  cVar2 = FUN_1000f70c0();
  if (cVar2 == '\0') {
    pQVar1 = *(QArrayData **)(param_1 + 0xbce0);
    if (1 < *(int *)pQVar1 + 1U) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + 1;
      UNLOCK();
    }
    QString::toLocal8Bit();
    FUN_1008e3970("","vm",0,"CMachODumpBuilder::CreateDumpFiles() failed to create mini dump %s",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) goto LAB_1000f6eaa;
      }
      QArrayData::deallocate(local_20,1,8);
    }
LAB_1000f6eaa:
    if (*(int *)pQVar1 != -1) {
      if (*(int *)pQVar1 != 0) {
        LOCK();
        *(int *)pQVar1 = *(int *)pQVar1 + -1;
        UNLOCK();
        if (*(int *)pQVar1 != 0) goto LAB_1000f6eda;
      }
      QArrayData::deallocate(pQVar1,2,8);
    }
  }
  else if (2 < DAT_1011b55f8) {
    FUN_1008e3970("","vm",3,"CMachODumpBuilder::CreateDumpFiles() mini dump created");
  }
LAB_1000f6eda:
  cVar2 = FUN_1000f7450(param_1);
  if (cVar2 != '\0') {
    if (DAT_1011b55f8 < 3) {
      return;
    }
    FUN_1008e3970("","vm",3,"CMachODumpBuilder::CreateDumpFiles() full dump created");
    return;
  }
  pQVar1 = *(QArrayData **)(param_1 + 0xbce8);
  if (1 < *(int *)pQVar1 + 1U) {
    LOCK();
    *(int *)pQVar1 = *(int *)pQVar1 + 1;
    UNLOCK();
  }
  QString::toLocal8Bit();
  FUN_1008e3970("","vm",0,"CMachODumpBuilder::CreateFiles() failed to create full dump %s",
                local_30 + *(long *)(local_30 + 0x10));
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) goto LAB_1000f6f9b;
    }
    QArrayData::deallocate(local_30,1,8);
  }
LAB_1000f6f9b:
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) {
        return;
      }
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
  return;
}


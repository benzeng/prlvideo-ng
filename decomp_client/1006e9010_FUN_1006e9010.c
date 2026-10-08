
undefined4 FUN_1006e9010(void)

{
  char cVar1;
  undefined4 uVar2;
  QString local_a0;
  undefined1 local_98 [88];
  undefined1 local_40 [47];
  undefined1 local_11;
  
  FUN_1006e89e0(local_98);
  cVar1 = FUN_10073dd70(local_98);
  uVar2 = 0;
  if (cVar1 != '\0') {
    CProductUpdateInfo::getMajorVersionFromFileName(&local_a0);
    uVar2 = QString::toInt((bool *)&local_a0,0);
    if (*(int *)local_a0.field0_0x0 != -1) {
      if (*(int *)local_a0.field0_0x0 != 0) {
        LOCK();
        *(int *)local_a0.field0_0x0 = *(int *)local_a0.field0_0x0 + -1;
        local_11 = *(int *)local_a0.field0_0x0 != 0;
        UNLOCK();
        if ((bool)local_11) goto LAB_1006e9094;
      }
      QArrayData::deallocate((QArrayData *)local_a0.field0_0x0,2,8);
    }
  }
LAB_1006e9094:
  FUN_100252c80(local_40);
  FUN_100252e70(local_98);
  return uVar2;
}


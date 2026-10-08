
undefined4 FUN_1002a96c0(long param_1)

{
  char cVar1;
  undefined4 uVar2;
  AnonymousUnion0 local_28;
  QString local_20;
  undefined1 local_11;
  
  uVar2 = 0;
  if ((*(int *)(param_1 + 0x38) == 0) && (uVar2 = 0, *(int *)(param_1 + 0x3c) == 0)) {
    local_20.field0_0x0 =
         (QTypedArrayData<unsigned_short> *)
         QString::fromAscii_helper("Kaspersky Anti-Virus For Mac",0x1c);
    local_28.field1 = (Data *)PTR_shared_null_1021e15e8;
    cVar1 = MacUtils::launchApplication(&local_20,(QStringList *)&local_28.field0,0x10000);
    FUN_100039a80(&local_28);
    uVar2 = 0x80000009;
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
    if (*(int *)local_20.field0_0x0 != -1) {
      if (*(int *)local_20.field0_0x0 != 0) {
        LOCK();
        *(int *)local_20.field0_0x0 = *(int *)local_20.field0_0x0 + -1;
        UNLOCK();
        if (*(int *)local_20.field0_0x0 != 0) {
          return uVar2;
        }
        local_11 = 0;
      }
      QArrayData::deallocate((QArrayData *)local_20.field0_0x0,2,8);
    }
  }
  return uVar2;
}


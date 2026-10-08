
undefined8 FUN_10004b3e0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  QArrayData *local_28;
  
  uVar3 = 1;
  if (((param_3 != 0) && (*(long *)(param_3 + 0x20) != 0)) &&
     (lVar1 = *(long *)(*(long *)(param_3 + 0x20) + 0x10), lVar1 != 0)) {
    cVar2 = FUN_1000468e0(param_2,lVar1,*(undefined8 *)(param_3 + 0x30));
    uVar3 = 0;
    if (cVar2 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("SGASMGMT","prl_client_app",0,
                    "Error: failed to generate bundle icons for \"%s\"",
                    local_28 + *(long *)(local_28 + 0x10));
      uVar3 = 0xffffffff;
      if (*(int *)local_28 != -1) {
        if (*(int *)local_28 != 0) {
          LOCK();
          *(int *)local_28 = *(int *)local_28 + -1;
          UNLOCK();
          if (*(int *)local_28 != 0) {
            return 0xffffffff;
          }
        }
        QArrayData::deallocate(local_28,1,8);
      }
    }
  }
  return uVar3;
}


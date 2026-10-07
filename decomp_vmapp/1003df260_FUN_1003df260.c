
undefined1
FUN_1003df260(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  ulong uVar5;
  QArrayData *local_48;
  undefined8 local_40;
  undefined1 local_38 [7];
  undefined1 local_31;
  
  local_40 = 0;
  iVar1 = _PMPrinterGetMimeTypes(param_2,param_3,&local_40);
  if (iVar1 == 0) {
    _CFRetain(local_40);
    FUN_100257600(param_4);
    uVar2 = _CFArrayGetCount(local_40);
    FUN_1008e3970("","LocalDevices",0,"[CParallelPrinter] Got %u mime types.",uVar2);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar3 = _CFArrayGetValueAtIndex(local_40,uVar5);
        FUN_100788b70(&local_48,uVar3);
        FUN_100022e50(param_4,&local_48,local_38);
        if (*(int *)local_48 != -1) {
          if (*(int *)local_48 != 0) {
            LOCK();
            *(int *)local_48 = *(int *)local_48 + -1;
            local_31 = *(int *)local_48 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_1003df361;
          }
          QArrayData::deallocate(local_48,2,8);
        }
LAB_1003df361:
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
    }
    _CFRelease();
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    FUN_1008e3970("","LocalDevices",0,
                  "[CParallelPrinter] Error enumerating available printer mime types");
  }
  return uVar4;
}


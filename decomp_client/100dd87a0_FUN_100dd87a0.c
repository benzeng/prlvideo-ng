
undefined1 FUN_100dd87a0(long *param_1,undefined8 param_2,QString *param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  QString local_30;
  long local_28;
  
  if (*param_1 == 0) {
    uVar5 = 0;
  }
  else {
    local_28 = 0;
    cVar2 = _CFDictionaryGetValueIfPresent(*param_1,param_2,&local_28);
    lVar1 = local_28;
    if ((cVar2 == '\0') || (local_28 == 0)) {
      uVar5 = 0;
    }
    else {
      lVar3 = _CFGetTypeID(local_28);
      lVar4 = _CFStringGetTypeID();
      if (lVar3 != lVar4) {
        FUN_100df99c0("","HostUtils",0,"ASSERT( %s ) occured in %s:%d [%s]",
                      "CFGetTypeID(property) == CFStringGetTypeID()","MacRegistryHelpers.cpp",0x8b,
                      "getString");
      }
      FUN_100deed00(&local_30,lVar1);
      QString::operator=(param_3,&local_30);
      uVar5 = 1;
      if (*(int *)local_30.field0_0x0 != -1) {
        if (*(int *)local_30.field0_0x0 != 0) {
          LOCK();
          *(int *)local_30.field0_0x0 = *(int *)local_30.field0_0x0 + -1;
          UNLOCK();
          local_28 = CONCAT71(local_28._1_7_,*(int *)local_30.field0_0x0 != 0);
          if (*(int *)local_30.field0_0x0 != 0) {
            return 1;
          }
        }
        QArrayData::deallocate((QArrayData *)local_30.field0_0x0,2,8);
      }
    }
  }
  return uVar5;
}


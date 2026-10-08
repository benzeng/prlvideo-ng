
undefined8 * FUN_10098d2d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  if ((DAT_102313710 == '\0') && (iVar2 = ___cxa_guard_acquire(&DAT_102313710), iVar2 != 0)) {
    DAT_102313708 = (int *)QString::fromAscii_helper("Unknown",7);
    ___cxa_atexit(FUN_100054e40,&DAT_102313708,0x100000000);
    ___cxa_guard_release(&DAT_102313710);
  }
  uVar3 = _CFStringGetTypeID();
  lVar4 = FUN_10098c4a0(param_2,param_3,uVar3);
  piVar1 = DAT_102313708;
  if (lVar4 == 0) {
    *param_1 = DAT_102313708;
    if (1 < *piVar1 + 1U) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  else {
    FUN_100deed00(&local_30,lVar4);
    _CFRelease(lVar4);
    *param_1 = local_30;
    if (1 < *(int *)local_30 + 1U) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + 1;
      local_23 = *(int *)local_30 != 0;
      UNLOCK();
    }
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_22 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return param_1;
}


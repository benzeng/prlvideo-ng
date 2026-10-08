
void FUN_10098dbc0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_20;
  undefined1 local_11;
  
  lVar2 = _SecCopyErrorMessageString(param_1,0);
  if (lVar2 != 0) {
    uVar3 = _CFStringGetLength(lVar2);
    iVar1 = _CFStringGetMaximumSizeForEncoding(uVar3,0x8000100);
    QByteArray::QByteArray((QByteArray *)&local_20,iVar1 + 1,'0');
    if ((1 < *(uint *)local_20) || (*(long *)(local_20 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_20,*(uint *)(local_20 + 4) + 1,*(uint *)(local_20 + 8) >> 0x1f)
      ;
    }
    _CFStringGetCString(lVar2,local_20 + *(long *)(local_20 + 0x10),
                        (long)(int)*(uint *)(local_20 + 4),0x8000100);
    _CFRelease(lVar2);
    FUN_100df99c0("","PasswordStorage",0,"Keychain access error: %s",
                  local_20 + *(long *)(local_20 + 0x10));
    if (*(int *)local_20 != -1) {
      if (*(int *)local_20 != 0) {
        LOCK();
        *(int *)local_20 = *(int *)local_20 + -1;
        UNLOCK();
        if (*(int *)local_20 != 0) {
          return;
        }
        local_11 = 0;
      }
      QArrayData::deallocate(local_20,1,8);
    }
  }
  return;
}



void FUN_10005a0e0(char *param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = '\0';
  lVar2 = _CFPreferencesCopyValue
                    (&cf_doNotDisturb,&cf_com_apple_notificationcenterui,
                     *(undefined8 *)PTR__kCFPreferencesCurrentUser_1021e18f8,
                     *(undefined8 *)PTR__kCFPreferencesCurrentHost_1021e18f0);
  if (lVar2 != 0) {
    lVar3 = _CFGetTypeID(lVar2);
    lVar4 = _CFBooleanGetTypeID();
    if (lVar3 == lVar4) {
      cVar1 = _CFBooleanGetValue(lVar2);
      if (cVar1 == '\x01') {
        *param_1 = '\x01';
      }
    }
    _CFRelease(lVar2);
  }
  if (*param_1 != '\0') {
    return;
  }
  FUN_10005a180();
  return;
}


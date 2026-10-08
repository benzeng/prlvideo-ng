
void FUN_100d72e80(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = (*DAT_102318938)();
  lVar2 = _CFDictionaryGetValue(uVar1,&cf_BackupPhase);
  if (lVar2 == 0) {
LAB_100d72ee9:
    DAT_1023188c0 = 0;
    pcVar3 = DAT_1023188f0;
  }
  else {
    lVar2 = _CFStringCompare(lVar2,&cf_Copying,0);
    if ((lVar2 != 0) || (((DAT_1023188c0 ^ 1) & 1) == 0)) {
      if ((DAT_1023188c0 & lVar2 != 0) != 1) goto LAB_100d72efe;
      goto LAB_100d72ee9;
    }
    DAT_1023188c0 = 1;
    pcVar3 = DAT_1023188e8;
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
LAB_100d72efe:
  _CFRelease(uVar1);
  return;
}


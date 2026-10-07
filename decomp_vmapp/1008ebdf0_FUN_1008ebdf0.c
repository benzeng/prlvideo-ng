
void FUN_1008ebdf0(void)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  uVar1 = (*DAT_1011c35a0)();
  lVar2 = _CFDictionaryGetValue(uVar1,&cf_BackupPhase);
  if (lVar2 == 0) {
LAB_1008ebe59:
    DAT_1011c3528 = 0;
    pcVar3 = DAT_1011c3558;
  }
  else {
    lVar2 = _CFStringCompare(lVar2,&cf_Copying,0);
    if ((lVar2 != 0) || (((DAT_1011c3528 ^ 1) & 1) == 0)) {
      if ((DAT_1011c3528 & lVar2 != 0) != 1) goto LAB_1008ebe6e;
      goto LAB_1008ebe59;
    }
    DAT_1011c3528 = 1;
    pcVar3 = DAT_1011c3550;
  }
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)();
  }
LAB_1008ebe6e:
  _CFRelease(uVar1);
  return;
}


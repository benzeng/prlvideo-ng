
void FUN_100ac3770(long param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_100adb590(param_1 + 0x100);
  lVar3 = *plVar2;
  if (lVar3 == 0) {
    return;
  }
  cVar1 = FUN_100ad5ab0(param_1);
  if ((cVar1 != '\0') && ((*(byte *)(lVar3 + 0x18) & 0x10) != 0)) {
    return;
  }
  if (*(char *)(param_1 + 0xb88) != '\0') {
    FUN_100ade620(*(undefined8 *)(param_1 + 0xa58),0);
    *(undefined1 *)(param_1 + 0xb88) = 0;
  }
  if (*(char *)(param_1 + 0xb89) != '\0') {
    *(undefined4 *)(param_1 + 0xb8c) = param_2;
  }
  cVar1 = FUN_100ad5ac0(param_1);
  if (cVar1 != '\0') {
    cVar1 = FUN_100ad8d70(param_1,param_2);
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_100ac386b;
  }
  if (param_3 == 1) {
    if (*(char *)(*(long *)(param_1 + 0xa30) + 0x10) != '\0') {
      return;
    }
LAB_100ac3823:
    if (*(char *)(param_1 + 0xad2) != '\0') goto LAB_100ac382c;
  }
  else {
    if (param_3 != 2) goto LAB_100ac3823;
LAB_100ac382c:
    *(undefined1 *)(param_1 + 0xad2) = 0;
    plVar2 = (long *)FUN_100adb590(param_1 + 0x100,*(undefined4 *)(param_1 + 0x910));
    if ((*plVar2 != 0) && ((*(byte *)(*plVar2 + 0x18) & 1) == 0)) {
      return;
    }
  }
  if ((*(byte *)(lVar3 + 0x18) & 1) == 0) {
    cVar1 = FUN_100ad8d70(param_1,param_2);
    if (param_3 == 1) {
      return;
    }
    if (cVar1 == '\x01') {
      return;
    }
  }
LAB_100ac386b:
  lVar3 = FUN_1000a9690(param_1 + 0x988);
  if ((lVar3 != 0) && (cVar1 = FUN_1000b7a80(lVar3,param_2,0), cVar1 != '\0')) {
    return;
  }
  FUN_100ad5960(param_1,2,param_2,0);
  return;
}


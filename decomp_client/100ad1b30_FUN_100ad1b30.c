
undefined8 FUN_100ad1b30(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1 + 0x100;
  plVar3 = (long *)FUN_100adb590(lVar5,*(undefined4 *)(param_1 + 0x910));
  lVar1 = *plVar3;
  plVar3 = (long *)FUN_100adb590(lVar5,*(undefined4 *)(param_1 + 0x914));
  if ((lVar1 != 0) && (lVar2 = *plVar3, lVar2 != 0)) {
    if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
      return 1;
    }
    lVar4 = FUN_100adc640(lVar5,*(undefined4 *)(lVar1 + 8));
    lVar5 = FUN_100adc640(lVar5,*(undefined4 *)(lVar2 + 8));
    if ((((*(uint *)(lVar2 + 0x18) ^ *(uint *)(lVar1 + 0x18)) & 8) == 0) &&
       (*(int *)(lVar4 + 8) != *(int *)(lVar5 + 8))) {
      return 0;
    }
  }
  return 1;
}



void FUN_100adcfb0(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (*(int *)(lVar2 + 0x800) != 0) {
    uVar1 = **(undefined4 **)(lVar2 + 0x808);
    plVar3 = (long *)FUN_100adb590(lVar2,uVar1);
    if ((*plVar3 != 0) && ((*(byte *)(*plVar3 + 0x19) & 0x10) != 0)) {
      FUN_100add990(*(undefined8 *)(param_1 + 8),uVar1);
      FUN_100addd20(*(undefined8 *)(param_1 + 8));
      return;
    }
  }
  return;
}


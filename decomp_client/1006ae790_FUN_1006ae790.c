
bool FUN_1006ae790(long param_1)

{
  char cVar1;
  int iVar2;
  ulong in_RAX;
  undefined8 uVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  iVar2 = FUN_10018a9d0(*(undefined8 *)(param_1 + 0x20));
  if (iVar2 == 0x30000001) {
    uVar3 = FUN_10069dca0(param_1);
    cVar1 = FUN_1006adc70(uVar3,*(undefined8 *)(param_1 + 0x20),
                          PTR_s_enabledForAdditionStates_1021f5558,(long)&uStack_18 + 7);
    if (cVar1 == '\0') {
      return false;
    }
  }
  else {
    cVar1 = FUN_10018f900(*(undefined8 *)(param_1 + 0x20));
    if (cVar1 != '\0') {
      return false;
    }
    uVar3 = FUN_10069dca0(param_1);
    cVar1 = FUN_1006adb20(uVar3,*(undefined8 *)(param_1 + 0x20),PTR_s_enabledForStates_1021f5540,
                          (long)&uStack_18 + 7);
    if (cVar1 == '\0') {
      return false;
    }
  }
  return uStack_18._7_1_ != '\0';
}


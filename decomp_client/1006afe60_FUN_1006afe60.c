
ulong FUN_1006afe60(long param_1)

{
  char cVar1;
  ulong in_RAX;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX & 0xffffffffffffff;
  uVar2 = FUN_10069dca0();
  cVar1 = FUN_1006adb20(uVar2,*(undefined8 *)(param_1 + 0x20),PTR_s_checkedForStates_1021f5548,
                        (long)&uStack_18 + 7);
  uVar3 = 0;
  if ((uStack_18._7_1_ != '\0') && (cVar1 == '\x01')) {
    uVar3 = FUN_10018f900(*(undefined8 *)(param_1 + 0x20));
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}


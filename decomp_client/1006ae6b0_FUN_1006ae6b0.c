
undefined1 FUN_1006ae6b0(long param_1)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  char local_19;
  
  local_19 = '\0';
  cVar2 = FUN_10018ecf0(*(undefined8 *)(param_1 + 0x20));
  if (cVar2 == '\0') {
    return 1;
  }
  iVar4 = FUN_10018bce0(*(undefined8 *)(param_1 + 0x20));
  if (((iVar4 == 2) || (iVar4 = FUN_10018bce0(*(undefined8 *)(param_1 + 0x20)), iVar4 == 3)) &&
     (cVar2 = FUN_10018ff40(*(undefined8 *)(param_1 + 0x20)), cVar2 == '\0')) {
    return 1;
  }
  uVar1 = FUN_10069dca0(param_1);
  cVar2 = FUN_1006adb20(uVar1,*(undefined8 *)(param_1 + 0x20),PTR_s_enabledForStates_1021f5540,
                        &local_19);
  uVar3 = 0;
  if ((local_19 != '\0') && (uVar3 = 0, cVar2 == '\x01')) {
    uVar1 = FUN_10069dca0(param_1);
    cVar2 = FUN_1006adc70(uVar1,*(undefined8 *)(param_1 + 0x20),
                          PTR_s_enabledForAdditionStates_1021f5558,&local_19);
    uVar3 = 0;
    if ((local_19 != '\0') && (cVar2 == '\x01')) {
      cVar2 = FUN_1001b8440(*(undefined8 *)(param_1 + 0x20));
      uVar3 = 1;
      if (cVar2 == '\0') {
        uVar3 = FUN_1001b7c80(*(undefined8 *)(param_1 + 0x20));
      }
    }
  }
  return uVar3;
}


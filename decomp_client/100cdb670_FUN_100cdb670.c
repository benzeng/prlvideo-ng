
undefined8 FUN_100cdb670(long *param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 local_50;
  undefined1 local_4f;
  
  if (*(char *)((long)param_1 + 0x44c) == '\0') {
    return 1;
  }
  FUN_100cd8310(param_1 + 0x93,0);
  *(undefined1 *)((long)param_1 + 0x44c) = 0;
  if (*(char *)((long)param_1 + 0x3e1) == '\0') {
    if (DAT_10230ffd0 < 2) goto LAB_100cdb750;
    pcVar5 = "[HIDMacHook] Ungrab keyboard from pure qt-mode";
  }
  else {
    local_4f = 1;
    FUN_100cd90a0(&local_50);
    if (DAT_102311940 != 0) {
      QMutex::lock();
      *(undefined8 *)(DAT_102311940 + 0x58) = 0;
      *(undefined8 *)(DAT_102311940 + 0x50) = 0;
      QMutex::unlock();
    }
    if (DAT_10230ffd0 < 2) goto LAB_100cdb750;
    pcVar5 = "[HIDMacHook] Ungrab keyboard from remote hook mode";
  }
  FUN_100df99c0("","hid",2,pcVar5);
LAB_100cdb750:
  *(uint *)(param_1 + 0x7f) = *(uint *)(param_1 + 0x7f) & 0x10000;
  if ((char)param_1[6] == '\0') {
    plVar4 = (long *)param_1[0x87];
    while (plVar4 != param_1 + 0x86) {
      (**(code **)(*param_1 + 0xf8))(param_1,plVar4[2]);
      (**(code **)(*(long *)plVar4[2] + 0x60))();
      lVar2 = *plVar4;
      plVar3 = (long *)plVar4[1];
      *(long **)(lVar2 + 8) = plVar3;
      *(long *)plVar4[1] = lVar2;
      param_1[0x88] = param_1[0x88] + -1;
      operator_delete(plVar4);
      plVar4 = plVar3;
    }
  }
  else {
    _PopSymbolicHotKeyMode(param_1[0x81]);
  }
  if (1 < DAT_10230ffd0) {
    uVar1 = *(uint *)(param_1 + 0x89);
    pcVar5 = "no";
    pcVar7 = "no";
    if ((uVar1 & 1) != 0) {
      pcVar7 = "yes";
    }
    pcVar8 = "no";
    if ((uVar1 & 2) != 0) {
      pcVar8 = "yes";
    }
    pcVar6 = "no";
    if ((uVar1 & 4) != 0) {
      pcVar6 = "yes";
    }
    if ((uVar1 & 8) != 0) {
      pcVar5 = "yes";
    }
    FUN_100df99c0("","hid",2,"[HIDMacHook] kbd types detected -> ANSI:%s  ISO:%s  JIS:%s  AUX:%s",
                  pcVar7,pcVar8,pcVar6,pcVar5);
  }
  return 1;
}


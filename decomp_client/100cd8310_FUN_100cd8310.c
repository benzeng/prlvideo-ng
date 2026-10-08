
void FUN_100cd8310(long param_1,char param_2)

{
  long *plVar1;
  long lVar2;
  
  if (2 < DAT_10230ffd0) {
    FUN_100df99c0("","hid",3,
                  "[CMDFLT] Reset CMD key filter to Passthrough state. Input Switch timer state=%d cmdPressEvent=%p, cmdReleaseEvent=%p"
                  ,*(uint *)(param_1 + 0x48) >> 0x1f ^ 1,*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
  }
  QTimer::stop();
  lVar2 = *(long *)(param_1 + 0x28);
  if (lVar2 != 0) {
    if (param_2 != '\0') {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("","hid",3,"[CMDFLT] Send stored CMD press before filter reset");
      }
      plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x390) + 0xf0);
      *plVar1 = *plVar1 + 1;
      FUN_100cdc6c0();
      lVar2 = *(long *)(param_1 + 0x28);
    }
    _CFRelease(lVar2);
    *(long *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    _CFRelease();
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}


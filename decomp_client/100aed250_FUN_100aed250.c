
void FUN_100aed250(long param_1,ulong param_2)

{
  if (0 < DAT_10230ffd0) {
    FUN_100df99c0("","pvsHostInfo",1,"--- start host info collection ---");
  }
  FUN_100aec2f0(param_1);
  if ((param_2 & 0x4000000) != 0) {
    FUN_100aff6d0(param_1);
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","pvsHostInfo",1,"--- OS info collected ---");
    }
  }
  CHostHardwareInfoBase::setVtdInitializationCode((uint)*(undefined8 *)(param_1 + 0x18));
  CHostHardwareInfoBase::setVtdSupported(SUB81(*(undefined8 *)(param_1 + 0x18),0));
  if ((param_2 & 0x8000000) != 0) {
    FUN_100b016c0(param_1);
    if (0 < DAT_10230ffd0) {
      FUN_100df99c0("","pvsHostInfo",1,"--- host info collected ---");
    }
  }
  FUN_100aed340(param_1,param_2,1);
  return;
}


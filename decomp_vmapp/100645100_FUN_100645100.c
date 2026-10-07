
void FUN_100645100(long param_1,ulong param_2)

{
  if (0 < DAT_1011b55f8) {
    FUN_1008e3970("","pvsHostInfo",1,"--- start host info collection ---");
  }
  FUN_1006441a0(param_1);
  if ((param_2 & 0x4000000) != 0) {
    FUN_100657010(param_1);
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","pvsHostInfo",1,"--- OS info collected ---");
    }
  }
  CHostHardwareInfoBase::setVtdInitializationCode((uint)*(undefined8 *)(param_1 + 0x18));
  CHostHardwareInfoBase::setVtdSupported(SUB81(*(undefined8 *)(param_1 + 0x18),0));
  if ((param_2 & 0x8000000) != 0) {
    FUN_100659000(param_1);
    if (0 < DAT_1011b55f8) {
      FUN_1008e3970("","pvsHostInfo",1,"--- host info collected ---");
    }
  }
  FUN_1006451f0(param_1,param_2,1);
  return;
}


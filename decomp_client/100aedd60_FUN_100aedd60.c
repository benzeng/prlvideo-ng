
void FUN_100aedd60(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  lVar2 = CHostHardwareInfoBase::getCpu();
  if (lVar2 != 0) {
    uVar3 = FUN_100aeebf0();
    if ((uVar3 & 3) == 1) {
      iVar1 = FUN_100aeed10(0);
      if (iVar1 == 2) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
      CHwCpu::setVtxMode(lVar2,uVar4);
      CHwCpu::setHvtNptAvail(SUB81(lVar2,0));
      CHwCpu::setHvtUnrestrictedAvail(SUB81(lVar2,0));
    }
    else {
      CHwCpu::setVtxMode(lVar2,0);
    }
    FUN_100b00fa0(param_1);
    return;
  }
  FUN_100df99c0("","pvsHostInfo",0,"CDspHostInfo::GetCpu() : CHwCpu is NULL!");
  return;
}


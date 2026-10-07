
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1007118d0(uint param_1)

{
  double dVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  
  dVar1 = (double)_CFAbsoluteTimeGetCurrent();
  dVar4 = _DAT_100b4a4b8;
  if (0x23 < param_1) {
    dVar4 = (double)param_1;
  }
  uVar3 = _CFDateCreate(SUB84(dVar4 + dVar1,0),0);
  iVar2 = _IOPMSchedulePowerEvent(uVar3,&cf_PowerWatcher,&cf_wakepoweron);
  _CFRelease(uVar3);
  return iVar2 == 0;
}


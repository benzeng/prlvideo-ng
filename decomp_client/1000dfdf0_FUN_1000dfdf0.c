
void FUN_1000dfdf0(long param_1,char param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  int *piVar4;
  uint local_1c;
  
  uVar2 = FUN_100152280();
  lVar3 = FUN_1001548f0(uVar2,param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_10018c2b0(lVar3);
    CVmConfiguration::getVmSettings();
    CVmSettings::getTravelOptions();
    bVar1 = CVmTravelOptions::isEnabled();
    local_1c = (uint)bVar1;
    if ((local_1c != *(byte *)(param_1 + 0x268)) || (param_2 != '\0')) {
      *(byte *)(param_1 + 0x268) = bVar1;
      piVar4 = (int *)(param_1 + 0x218);
      if (*(int *)(param_1 + 0x21c) == 1) {
        if (*piVar4 == 1) {
          return;
        }
      }
      else if ((*(int *)(param_1 + 0x21c) == 0) && (*piVar4 == 0)) {
        return;
      }
      FUN_1000c4970(piVar4,0x96,&local_1c,4);
    }
  }
  return;
}


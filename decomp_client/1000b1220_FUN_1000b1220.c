
undefined8 FUN_1000b1220(undefined8 *param_1)

{
  short sVar1;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_70 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_60 = 0;
  local_28 = 0;
  local_68 = 0x48;
  sVar1 = _GetNextProcess(&local_70);
  if (sVar1 == 0) {
    do {
      _GetProcessInformation(&local_70,&local_68);
      if (((int)uStack_50 == 0x646f636b) && (local_58._4_4_ == 0x4150504c)) {
        *param_1 = local_70;
        return 1;
      }
      sVar1 = _GetNextProcess(&local_70);
    } while (sVar1 == 0);
  }
  return 0;
}


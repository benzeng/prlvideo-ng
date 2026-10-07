
uint FUN_100465090(long *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined8 uVar3;
  long lVar4;
  float local_2c;
  float local_28;
  ushort local_24;
  ushort local_22;
  
  cVar1 = FUN_100464f90(param_1,&local_28);
  if (cVar1 != '\0') {
    local_2c = local_28;
    goto LAB_1004651cc;
  }
  uVar3 = _CFNumberGetTypeID();
  lVar4 = FUN_1004645d0(param_1,&cf_MaxCapacity,uVar3);
  if (lVar4 == 0) {
    uVar2 = 0xffff;
LAB_10046511d:
    uVar3 = _CFNumberGetTypeID();
    lVar4 = FUN_1004645d0(param_1,&cf_CurrentCapacity,uVar3);
    local_2c = DAT_100b3f700;
    if (lVar4 != 0) {
      local_22 = 0;
      cVar1 = _CFNumberGetValue(lVar4,2,&local_22);
      if (cVar1 != '\x01') {
        local_22 = 0xffff;
      }
      _CFRelease(lVar4);
      local_2c = (float)local_22;
    }
    local_2c = local_2c / (float)uVar2;
  }
  else {
    local_24 = 0;
    cVar1 = _CFNumberGetValue(lVar4,2,&local_24);
    if (cVar1 != '\x01') {
      local_24 = 0xffff;
    }
    _CFRelease(lVar4);
    local_2c = 0.0;
    uVar2 = local_24;
    if (local_24 != 0) goto LAB_10046511d;
  }
  local_28 = local_2c;
  if (1 < DAT_1011b55f8) {
    FUN_1008e3970((double)local_2c,"","BattWatcher",2,"Charge ratio: %f");
  }
LAB_1004651cc:
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  return (int)((float)uVar2 * local_2c) & 0xffff;
}


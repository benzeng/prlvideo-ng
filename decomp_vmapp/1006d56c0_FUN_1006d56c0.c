
bool FUN_1006d56c0(ulong param_1,char param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  bVar1 = true;
  if (1 < (uint)param_1) {
    if ((uint)param_1 == 3) {
      bVar1 = false;
    }
    else {
      local_18 = 0x73746d23;
      local_14 = 0x6f757470;
      if (param_2 != '\0') {
        local_14 = 0x696e7074;
      }
      local_10 = 0;
      iVar2 = _AudioObjectGetPropertyDataSize(param_1 >> 0x20,&local_18,0,0,&local_c);
      bVar1 = iVar2 == 0 && local_c != 0;
    }
  }
  return bVar1;
}


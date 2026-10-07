
void FUN_1000a7eb0(void)

{
  uint uVar1;
  uint local_c;
  
  uVar1 = FUN_1007da300("devices.hdd.quota");
  local_c = 100;
  if (uVar1 < 0x65) {
    local_c = uVar1;
  }
  FUN_1002592b0(FUN_1000a7ef0,&local_c);
  return;
}


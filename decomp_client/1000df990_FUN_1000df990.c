
void FUN_1000df990(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int local_1c;
  
  uVar1 = FUN_100152280();
  uVar1 = FUN_1001548f0(uVar1,param_1 + 0x10);
  uVar2 = FUN_10018d490(uVar1);
  cVar3 = FUN_1001754c0(uVar2,0x12);
  local_1c = 0;
  if (cVar3 != '\0') {
    iVar4 = FUN_1001902a0(uVar1);
    local_1c = iVar4;
    if (iVar4 < 0xb4d747) {
      if (iVar4 == 0x5aa3ff) {
        local_1c = -0xbe551d;
      }
      else if (iVar4 == 0x808080) {
        local_1c = -0x6a6a68;
      }
    }
    else if (iVar4 < 0xc08ed8) {
      if (iVar4 == 0xb4d747) {
        local_1c = -0x9d45b7;
      }
    }
    else if (iVar4 < 0xf6aa44) {
      if (iVar4 == 0xc08ed8) {
        local_1c = -0x3f832f;
      }
      else if (iVar4 == 0xefdb47) {
        local_1c = -0x1941b9;
      }
    }
    else {
      local_1c = -0xba4a8;
      if ((iVar4 != 0xfa645a) && (local_1c = iVar4, iVar4 == 0xf6aa44)) {
        local_1c = -0x1567bf;
      }
    }
  }
  FUN_1000c4970(param_2,0x95,&local_1c,4);
  return;
}


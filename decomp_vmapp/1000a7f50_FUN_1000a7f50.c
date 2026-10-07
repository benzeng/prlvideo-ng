
void FUN_1000a7f50(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = FUN_1007da300("devices.net.quota");
  uVar4 = 100;
  if (uVar1 < 0x65) {
    uVar4 = uVar1;
  }
  iVar3 = 0;
  do {
    lVar2 = FUN_1000915d0(param_1,iVar3);
    if (lVar2 != 0) {
      FUN_100279910(lVar2,uVar4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  return;
}


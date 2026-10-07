
void FUN_1002ef7b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  if (((*(byte *)(*param_1 + 0xc) & 8) != 0) && ((int)param_1[1] != 4)) {
    FUN_1008e3970("","LocalDevices",0,"adev_stop called while unstop is not completed!");
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                  "../asyncdev3_api.cpp",0x13b,"adev_stop");
    FUN_1002ef910(param_1,"adev_wait_unstop",FUN_1002efa80);
  }
  if (1 < *(uint *)(param_1 + 1)) {
    return;
  }
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0xc) & 4) == 0) {
    uVar3 = *(uint *)(lVar2 + 0xc);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0xc);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(uint *)(lVar2 + 0xc) = uVar3 | 4;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar4);
  }
  FUN_1007d8b20(param_1 + 0xc);
  return;
}


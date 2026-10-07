
void FUN_1002ef6f0(long *param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  if (1 < (int)param_1[1] - 3U) {
    FUN_1008e3970("","LocalDevices",0,"adev_terminate(%u:%u) called while device is running.",
                  *(undefined2 *)(*param_1 + 8),*(undefined2 *)(*param_1 + 10));
    FUN_1008e3970("","LocalDevices",0,"ASSERT( %s ) occured in %s:%d [%s]","0",
                  "../asyncdev3_api.cpp",0x12f,"adev_terminate");
  }
  lVar2 = *param_1;
  if ((*(byte *)(lVar2 + 0xc) & 2) == 0) {
    uVar3 = *(uint *)(lVar2 + 0xc);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0xc);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(uint *)(lVar2 + 0xc) = uVar3 | 2;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar4);
  }
  FUN_1007d8b20(param_1 + 0xc);
  return;
}


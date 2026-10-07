
bool FUN_100288ab0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  void *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  uVar1 = (uint)*(byte *)(*(long *)(param_2 + 0x88) + 5);
  uVar2 = 0x12;
  if (uVar1 < 0x13) {
    uVar2 = uVar1;
  }
  lVar3 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x109c),
                   *(undefined4 *)(*(long *)(param_2 + 0x88) + 0x2c));
  bVar4 = true;
  if ((lVar3 != 0) && (uVar2 != 0)) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    FUN_10008d2d0(&local_48,lVar3,uVar2);
    bVar4 = local_48 == (void *)0x0;
    if (bVar4) {
      FUN_1008e3970("","LocalDevices",0,"LSI: map failed 0x%08llX",lVar3);
    }
    else {
      _memcpy(local_48,(void *)(param_2 + 0xc0),(ulong)uVar2);
    }
    bVar4 = !bVar4;
    FUN_10008d3f0(&local_48);
  }
  return bVar4;
}


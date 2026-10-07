
byte FUN_1005abdf0(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  byte bVar4;
  bool bVar5;
  
  uVar3 = param_2 / *(uint *)(param_1 + 0x1c) >> 0xc;
  if ((uint)uVar3 < *(uint *)(param_1 + 0x18)) {
    lVar1 = *(long *)(param_1 + 0x10);
    lVar2 = (uVar3 & 0xffffffff) * 0x40;
    bVar5 = true;
    if (*(long *)(lVar1 + 8 + lVar2) == 0) {
      if (*(long *)(lVar1 + lVar2) == 0) {
        bVar5 = false;
      }
      else {
        bVar5 = *(int *)(param_1 + 0x34) == -1;
      }
    }
    bVar4 = *(long *)(lVar1 + 0x20 + lVar2) == 0 & bVar5;
  }
  else {
    bVar4 = 0;
    FUN_1008e3970("","vdisk",0,"Try to get element %u out of all groups %u (Off %llu) OC",
                  uVar3 & 0xffffffff,*(uint *)(param_1 + 0x18),param_2);
  }
  return bVar4;
}


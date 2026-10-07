
void FUN_1003fe1b0(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  
  lVar2 = *(long *)(param_1 + 0x830);
  if (lVar2 != 0) {
    uVar3 = *(uint *)(lVar2 + 0x10);
    do {
      LOCK();
      uVar1 = *(uint *)(lVar2 + 0x10);
      bVar4 = uVar3 == uVar1;
      if (bVar4) {
        *(uint *)(lVar2 + 0x10) = uVar3 | 4;
        uVar1 = uVar3;
      }
      uVar3 = uVar1;
      UNLOCK();
    } while (!bVar4);
    lVar2 = *(long *)(param_1 + 0x830);
    if (lVar2 != 0) {
      FUN_1008e3970("","HddUtils",0,"hdd: SF Stat: %u, %u, %u, 0x%08X pa: 0x%08llX",
                    *(undefined4 *)(lVar2 + 4),*(undefined4 *)(lVar2 + 8),
                    *(undefined4 *)(lVar2 + 0xc),*(undefined4 *)(lVar2 + 0x10),0);
    }
    FUN_10008d470(param_1 + 8);
    *(undefined8 *)(param_1 + 0x830) = 0;
  }
  return;
}



void FUN_1000a7a00(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  bool bVar4;
  
  lVar1 = *(long *)(param_1 + 0x1938);
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(lVar1 + 0xd000);
    do {
      LOCK();
      uVar3 = *(ulong *)(lVar1 + 0xd000);
      bVar4 = uVar2 == uVar3;
      if (bVar4) {
        *(ulong *)(lVar1 + 0xd000) = ~param_2 & uVar2;
        uVar3 = uVar2;
      }
      UNLOCK();
      uVar2 = uVar3;
    } while (!bVar4);
  }
  return;
}


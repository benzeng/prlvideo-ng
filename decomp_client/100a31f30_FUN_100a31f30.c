
uint FUN_100a31f30(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint local_24;
  
  uVar1 = 0;
  if (*(long *)(param_1 + 0x20) != 0) {
    uVar2 = _PasteboardSynchronize();
    uVar1 = 0;
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_100a300b0(param_1 + 0x20);
      if (lVar3 != 0) {
        local_24 = 0;
        lVar4 = _CFArrayGetCount(lVar3);
        if (0 < lVar4) {
          lVar4 = lVar4 + 1;
          do {
            uVar5 = _CFArrayGetValueAtIndex(lVar3,lVar4 + -2);
            uVar1 = FUN_100a2cec0(param_1 + 0x188,uVar5);
            local_24 = local_24 | uVar1;
            lVar4 = lVar4 + -1;
          } while (1 < lVar4);
        }
        FUN_100a2ce90(param_1 + 0x188,&local_24);
        uVar1 = local_24;
        _CFRelease(lVar3);
      }
    }
  }
  return uVar1;
}


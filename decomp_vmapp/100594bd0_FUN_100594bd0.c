
byte FUN_100594bd0(long param_1)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  
  if ((ulong)*(uint *)(param_1 + 0xac) == 0xffffffff) {
    bVar1 = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(param_1 + 0xac) + *(long *)(param_1 + 0x58);
    bVar1 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) + (uVar3 >> 9) * 8) +
                                    (uVar3 & 0x1ff) * 8) + 0x70))();
  }
  uVar3 = *(long *)(param_1 + 0x60) + 0xffffffff;
  bVar2 = (**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x40) +
                                            ((uVar3 & 0xffffffff) + *(long *)(param_1 + 0x58) >> 9)
                                            * 8) +
                                  ((ulong)(uint)((int)*(long *)(param_1 + 0x58) + (int)uVar3) &
                                  0x1ff) * 8) + 0x70))();
  return bVar2 | bVar1;
}


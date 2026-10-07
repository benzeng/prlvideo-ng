
undefined8 FUN_1008080a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x88);
  uVar1 = *(int *)(lVar4 + 0x348) + 1;
  *(uint *)(lVar4 + 0x348) = uVar1;
  if (2 < uVar1) {
    uVar2 = FUN_10080ef10(param_1,0x20,0,0);
    if ((uVar2 & 0x1000) == 0) {
      uVar3 = FUN_10080e290(param_1);
      uVar1 = FUN_10087db60(uVar3,0x2f,0,0);
      lVar4 = *(long *)(param_1 + 0x88);
      if (uVar1 < *(uint *)(lVar4 + 0x288)) {
        *(uint *)(lVar4 + 0x288) = uVar1;
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x88);
    }
  }
  uVar3 = 0;
  if (0xc < *(uint *)(lVar4 + 0x348)) {
    FUN_100887ce0(0x14,0x13c,0x138,"d1_lib.c",0x1bc);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}


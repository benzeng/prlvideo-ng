
undefined8 FUN_10010f6a0(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x1938);
  uVar1 = *(uint *)(lVar2 + 0x3d940);
  uVar4 = 0x80000009;
  if ((uVar1 & 0x10000) != 0) {
    if (((*(uint *)(param_2 + 2) ^ uVar1) & 0x20004) != 0) {
      uVar5 = *(uint *)(param_2 + 2) & 0x20004 | uVar1 & 0xfffdfffb;
      LOCK();
      uVar3 = *(uint *)(lVar2 + 0x3d940);
      if (uVar1 == uVar3) {
        *(uint *)(lVar2 + 0x3d940) = uVar5;
        uVar3 = uVar1;
      }
      UNLOCK();
      if (uVar3 != uVar5) {
        do {
          uVar5 = *(uint *)(param_2 + 2) & 0x20004 | uVar3 & 0xfffdfffb;
          LOCK();
          uVar1 = *(uint *)(lVar2 + 0x3d940);
          if (uVar3 == uVar1) {
            *(uint *)(lVar2 + 0x3d940) = uVar5;
            uVar1 = uVar3;
          }
          uVar3 = uVar1;
          UNLOCK();
        } while (uVar3 != uVar5);
      }
    }
    *(undefined8 *)(lVar2 + 0x3d938) = *param_2;
    *(undefined8 *)(lVar2 + 0x3d930) = *param_2;
    param_2[1] = *(undefined8 *)(lVar2 + 0x3d928);
    *(uint *)(param_2 + 2) = (uint)*(ushort *)(lVar2 + 0x3d940);
    FUN_1000acd00(*(undefined8 *)(param_1 + 0x10),0x2000000000,1,1);
    uVar4 = 0;
  }
  return uVar4;
}


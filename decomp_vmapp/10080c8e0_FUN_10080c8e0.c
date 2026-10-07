
undefined8 FUN_10080c8e0(long param_1,byte *param_2,int param_3)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = *(ulong *)(param_2 + 8);
  if (uVar2 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
    uVar6 = 0x237;
  }
  else if ((ulong)(long)param_3 < (ulong)(*(long *)(param_2 + 0x20) + *(long *)(param_2 + 0x18))) {
    uVar6 = 0x23c;
  }
  else {
    if (*(long *)(*(long *)(param_1 + 0x88) + 0x300) == 0) {
      iVar5 = FUN_10087ce60(*(undefined8 *)(param_1 + 0x50),uVar2 + 0xc);
      if (iVar5 != 0) {
        lVar3 = *(long *)(param_1 + 0x80);
        *(ulong *)(lVar3 + 0x398) = uVar2;
        lVar4 = *(long *)(param_1 + 0x88);
        *(ulong *)(lVar4 + 0x2f0) = uVar2;
        bVar1 = *param_2;
        *(uint *)(lVar3 + 0x3a0) = (uint)bVar1;
        *(byte *)(lVar4 + 0x2e8) = bVar1;
        *(undefined2 *)(lVar4 + 0x2f8) = *(undefined2 *)(param_2 + 0x10);
        return 0;
      }
      FUN_100887ce0(0x14,0x120,7,"d1_both.c",0x247);
      return 0x50;
    }
    if (uVar2 == *(ulong *)(*(long *)(param_1 + 0x88) + 0x2f0)) {
      return 0;
    }
    uVar6 = 0x255;
  }
  FUN_100887ce0(0x14,0x120,0x98,"d1_both.c",uVar6);
  return 0x2f;
}


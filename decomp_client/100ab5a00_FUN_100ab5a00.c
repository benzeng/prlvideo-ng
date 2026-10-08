
undefined8 FUN_100ab5a00(long param_1,ushort *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 local_30;
  
  uVar3 = FUN_100bee0e0(*(undefined8 *)(param_1 + 0x130),0);
  *param_2 = uVar3;
  if (param_4 < (int)(uint)uVar3) {
    uVar4 = 0;
  }
  else {
    local_30 = param_3;
    FUN_100bee0e0(*(undefined8 *)(param_1 + 0x130),&local_30);
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0xd) = *(undefined8 *)(lVar1 + 0xbc);
    *(undefined8 *)(param_2 + 9) = *(undefined8 *)(lVar1 + 0xb4);
    uVar4 = *(undefined8 *)(lVar1 + 0xa4);
    *(undefined8 *)(param_2 + 5) = *(undefined8 *)(lVar1 + 0xac);
    *(undefined8 *)(param_2 + 1) = uVar4;
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0x1d) = *(undefined8 *)(lVar1 + 0xdc);
    *(undefined8 *)(param_2 + 0x19) = *(undefined8 *)(lVar1 + 0xd4);
    uVar4 = *(undefined8 *)(lVar1 + 0xc4);
    *(undefined8 *)(param_2 + 0x15) = *(undefined8 *)(lVar1 + 0xcc);
    *(undefined8 *)(param_2 + 0x11) = uVar4;
    *(undefined8 *)(param_2 + 0x31) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0x58);
    *(undefined8 *)(param_2 + 0x35) = *(undefined8 *)(*(long *)(param_1 + 0x80) + 0xc);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x28);
    *(undefined8 *)(param_2 + 0x25) = *(undefined8 *)(*(long *)(param_1 + 0xe8) + 0x30);
    *(undefined8 *)(param_2 + 0x21) = uVar4;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0xd0) + 0x30);
    *(undefined8 *)(param_2 + 0x2d) = uVar2;
    *(undefined8 *)(param_2 + 0x29) = uVar4;
    uVar4 = CONCAT71((int7)((ulong)uVar2 >> 8),1);
  }
  return uVar4;
}


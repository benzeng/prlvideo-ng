
undefined8 FUN_1007ebf70(long param_1,ushort *param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ulong uVar4;
  undefined8 local_38;
  
  uVar3 = FUN_100818970(*(undefined8 *)(param_1 + 0x130),0);
  *param_2 = uVar3;
  uVar4 = (ulong)uVar3;
  if ((int)(uint)uVar3 <= param_4) {
    local_38 = param_3;
    FUN_100818970(*(undefined8 *)(param_1 + 0x130),&local_38);
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0xd) = *(undefined8 *)(lVar1 + 0xbc);
    *(undefined8 *)(param_2 + 9) = *(undefined8 *)(lVar1 + 0xb4);
    uVar2 = *(undefined8 *)(lVar1 + 0xa4);
    *(undefined8 *)(param_2 + 5) = *(undefined8 *)(lVar1 + 0xac);
    *(undefined8 *)(param_2 + 1) = uVar2;
    lVar1 = *(long *)(param_1 + 0x80);
    *(undefined8 *)(param_2 + 0x1d) = *(undefined8 *)(lVar1 + 0xdc);
    *(undefined8 *)(param_2 + 0x19) = *(undefined8 *)(lVar1 + 0xd4);
    uVar2 = *(undefined8 *)(lVar1 + 0xc4);
    uVar4 = *(ulong *)(lVar1 + 0xcc);
    *(ulong *)(param_2 + 0x15) = uVar4;
    *(undefined8 *)(param_2 + 0x11) = uVar2;
  }
  return CONCAT71((int7)(uVar4 >> 8),(int)(uint)uVar3 <= param_4);
}


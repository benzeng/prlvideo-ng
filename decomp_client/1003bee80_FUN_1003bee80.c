
ulong FUN_1003bee80(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_1003b0a60(*(undefined8 *)(*(long *)(param_1 + 0x10) + 8));
  uVar1 = FUN_1001766b0(uVar1);
  uVar2 = FUN_100615c20(uVar1,0x15,0);
  return uVar2 ^ 1;
}


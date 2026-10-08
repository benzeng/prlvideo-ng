
void FUN_100ada3f0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = QCursor::pos();
  uVar2 = FUN_100319ca0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20));
  FUN_100334540(uVar2,0,uVar1 & 0xffffffff,uVar1 >> 0x20,1,1);
  return;
}


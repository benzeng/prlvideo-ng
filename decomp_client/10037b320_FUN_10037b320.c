
void FUN_10037b320(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x38);
  if ((uVar1 & 7) == 0) {
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) & 0xfb;
  }
  else if ((uVar1 & 1) == 0) {
    QDropEvent::setDropAction(param_2,1);
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
  }
  else {
    *(uint *)(param_2 + 0x34) = uVar1;
    *(byte *)(param_2 + 0x12) = *(byte *)(param_2 + 0x12) | 4;
  }
  return;
}


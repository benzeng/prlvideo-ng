
undefined1 FUN_10008c1b0(long param_1,uint param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint local_14;
  
  if (*(long *)(param_1 + 200) == 0) {
    uVar2 = 0;
  }
  else if ((*(uint *)(*(long *)(param_1 + 200) + (ulong)(param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1)
           == 0) {
    uVar2 = 0;
  }
  else {
    local_14 = param_2;
    iVar1 = FUN_1007d74c0(*(undefined8 *)(param_1 + 0xd0),&local_14,4);
    uVar2 = 1;
    if (iVar1 != 4) {
      uVar2 = 0;
      FUN_1008e3970("","vm",0,"Ring buffer overflow; dropping %x",local_14);
    }
  }
  return uVar2;
}


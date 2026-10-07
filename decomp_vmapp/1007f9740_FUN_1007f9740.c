
undefined8 FUN_1007f9740(long param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  
  uVar2 = 1;
  if (*(long *)(param_1 + 0x30) != 0) {
    pbVar1 = *(byte **)(param_1 + 0x80);
    uVar2 = 0;
    if ((*pbVar1 & 1) == 0) {
      pbVar1[0x1dc] = 1;
      pbVar1[0x1dd] = 0;
      pbVar1[0x1de] = 0;
      pbVar1[0x1df] = 0;
      uVar2 = 1;
    }
  }
  return uVar2;
}


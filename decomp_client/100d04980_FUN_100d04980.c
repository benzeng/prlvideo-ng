
long FUN_100d04980(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = param_2 + 1;
  lVar3 = param_1 + 400;
  if (*(byte *)(param_1 + 400) != uVar2) {
    uVar1 = (uint)*(byte *)(param_1 + 0x1c8) + (uint)*(byte *)(param_1 + 400);
    if (uVar1 == uVar2) {
      lVar3 = param_1 + 0x1c8;
    }
    else {
      uVar1 = *(byte *)(param_1 + 0x200) + uVar1;
      if (uVar1 == uVar2) {
        lVar3 = param_1 + 0x200;
      }
      else {
        uVar1 = *(byte *)(param_1 + 0x238) + uVar1;
        if (uVar1 != uVar2) {
          if (*(byte *)(param_1 + 0x270) + uVar1 == uVar2) {
            lVar3 = param_1 + 0x270;
          }
          return lVar3;
        }
        lVar3 = param_1 + 0x238;
      }
    }
  }
  return lVar3;
}



bool FUN_1003a2990(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  
  if (param_1[8] == 0) {
    bVar4 = true;
    if (param_1[2] == 0) {
      uVar1 = *param_1;
      uVar3 = uVar1 >> 0x18;
      uVar2 = uVar3 | 0xfffffff0;
      if ((uVar3 & 8) == 0) {
        uVar2 = uVar3 & 0xf;
      }
      if ((uVar1 & 0x100000) == 0 && uVar2 == 0) {
        bVar4 = (uVar1 & 0xf0000) != 0xf0000;
      }
    }
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


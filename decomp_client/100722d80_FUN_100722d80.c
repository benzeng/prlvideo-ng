
uint FUN_100722d80(uint param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar2 = QKeySequence::operator[](param_1);
  uVar4 = (iVar2 << 6) >> 0x1f & 0xc;
  uVar3 = QKeySequence::operator[](param_1);
  uVar1 = uVar4 + 3;
  if ((uVar3 & 0x10000000) == 0) {
    uVar1 = uVar4;
  }
  uVar3 = QKeySequence::operator[](param_1);
  uVar4 = uVar1 | 0x30;
  if ((uVar3 & 0x8000000) == 0) {
    uVar4 = uVar1;
  }
  uVar3 = QKeySequence::operator[](param_1);
  uVar1 = uVar4 | 0xc0;
  if ((uVar3 & 0x4000000) == 0) {
    uVar1 = uVar4;
  }
  uVar4 = uVar1 | 0x40000000;
  if (uVar1 == 0) {
    uVar4 = 0;
  }
  return uVar4;
}


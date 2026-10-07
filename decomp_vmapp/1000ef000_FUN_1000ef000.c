
void FUN_1000ef000(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar3 = 0xfffffc01;
  if ((uVar4 & 0x1800000) == 0) {
    uVar3 = 0xfffffe01;
  }
  *param_1 = uVar3;
  uVar1 = param_1[2];
  uVar2 = uVar3 & 0xfffffa01;
  if ((uVar1 & 0x980201) == 0 && (uVar4 & 0x6000000) == 0) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 & 0xfffbfe01;
  if ((uVar1 & 0x14000000) == 0) {
    uVar3 = uVar2;
  }
  uVar2 = uVar3 & 0xfffdfe01;
  if ((uVar1 & 0x20000) == 0) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2 & 0xfffffe00;
  if ((uVar4 & 2) == 0) {
    uVar3 = uVar2 | 3;
  }
  uVar4 = uVar3 & 0xffffdfff;
  if ((uVar1 & 0x20) == 0) {
    uVar4 = uVar3 | 0x2000;
  }
  uVar3 = uVar4 & 0xfffeffff;
  if ((param_1[7] & 1) == 0) {
    uVar3 = uVar4 | 0x10000;
  }
  uVar4 = uVar3 & 0xffefffff;
  if ((param_1[7] & 0x80) == 0) {
    uVar4 = uVar3 | 0x100000;
  }
  *param_1 = uVar4;
  return;
}


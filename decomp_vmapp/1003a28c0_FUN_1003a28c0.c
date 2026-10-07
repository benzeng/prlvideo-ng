
void FUN_1003a28c0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1;
  uVar2 = uVar1 >> 0x18;
  uVar3 = uVar2 | 0xfffffff0;
  if ((uVar2 & 8) == 0) {
    uVar3 = uVar2 & 0xf;
  }
  if (uVar3 != 0) {
    uVar1 = -uVar3;
    if ((uVar2 & 8) == 0) {
      uVar1 = uVar2 & 0xf;
    }
    FUN_10038e8e0(param_2,"%c%d.0)",((int)uVar3 < 1) * '\x05' + '*',1 << ((byte)uVar1 & 0x1f));
    uVar1 = *param_1;
  }
  if ((uVar1 & 0x100000) != 0) {
    FUN_10038e8e0(param_2,", 0.0, 1.0)");
    uVar1 = *param_1;
  }
  if ((uVar1 >> 8 & 0x18 | uVar1 >> 0x1c & 7) == 9) {
    FUN_10038e8e0(param_2,".x");
    return;
  }
  FUN_10039ed40(param_2,uVar1,"xyzw");
  return;
}


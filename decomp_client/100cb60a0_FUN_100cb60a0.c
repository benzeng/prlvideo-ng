
uint FUN_100cb60a0(long param_1,int param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == 0) {
    uVar3 = 0x43;
    uVar4 = 0x20d;
  }
  else {
    if (param_2 == 2) {
      return *(uint *)(param_1 + 0x28) & 1;
    }
    if (param_2 == 1) {
      uVar1 = *(uint *)(param_1 + 0x28);
      uVar2 = uVar1 | 0x100;
      if (param_3 == 0) {
        uVar2 = uVar1 & 0xfffffeff;
      }
      *(uint *)(param_1 + 0x28) = uVar2;
      return uVar1 >> 8 & 1;
    }
    uVar3 = 0x6a;
    uVar4 = 0x21f;
  }
  FUN_100c62ee0(0x28,0x6f,uVar3,"ui_lib.c",uVar4);
  return 0xffffffff;
}



uint FUN_100ba6010(undefined8 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  if (0x10a < param_2) {
    iVar1 = FUN_100ba66a0(param_1,param_2,&DAT_1022d0190,0x10);
    if (iVar1 == 0) {
      iVar1 = FUN_100ba5b60(param_1,param_2);
      uVar2 = ~-(uint)(iVar1 == 0) | 0x101;
    }
  }
  return uVar2;
}


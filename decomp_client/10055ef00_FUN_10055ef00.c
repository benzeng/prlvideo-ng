
void FUN_10055ef00(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = FUN_100708300(param_1 + 0x28);
  if (param_2 == 2) {
    uVar1 = uVar1 | 2;
  }
  else {
    uVar1 = uVar1 & 0xfffffffd;
  }
  FUN_100708310(param_1 + 0x28,uVar1);
  FUN_10083d580(*(undefined8 *)(param_1 + 0x10));
  return;
}


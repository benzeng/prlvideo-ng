
void FUN_1004aedf0(long param_1,long param_2)

{
  undefined8 uVar1;
  long local_10;
  
  if (param_2 == 0) {
    return;
  }
  local_10 = param_2;
  if ((*(uint *)(param_1 + 0x88) & 0xfffffffe) == 2) {
    if (*(short *)(param_2 + 0x14) == 0x10) {
      FUN_100036f00(param_1 + 0xe8,&local_10);
      return;
    }
    uVar1 = 0xf0000003;
  }
  else {
    uVar1 = 0xf0000000;
  }
  FUN_1004c07d0(param_1 + 0x10,param_2,uVar1);
  return;
}


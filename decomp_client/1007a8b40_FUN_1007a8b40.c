
void FUN_1007a8b40(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  switch(*(undefined4 *)(param_2 + 0x28)) {
  case 0x1000012:
    FUN_1007a8bb0(param_1,0,0xffffffff);
    return;
  case 0x1000013:
    uVar1 = 0xffffffff;
    break;
  case 0x1000014:
    FUN_1007a8bb0(param_1,0,1);
    return;
  case 0x1000015:
    uVar1 = 1;
    break;
  default:
    return;
  }
  FUN_1007a8bb0(param_1,uVar1,0);
  return;
}


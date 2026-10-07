
void FUN_100291050(long *param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = FUN_1007d88c0();
  while( true ) {
    lVar2 = FUN_1002584f0(param_1 + 9);
    if (lVar2 == 0) break;
    (**(code **)(*param_1 + 0xb0))(param_1,lVar2);
    FUN_100258470(param_1 + 9,lVar2);
  }
  lVar2 = FUN_1007d88c0();
  uVar3 = lVar2 - lVar1;
  if (DAT_1011b9878 < uVar3) {
    DAT_1011b9878 = uVar3;
    FUN_1008e3970("","LocalDevices",0,"[AHCI] max_delta increase: %llu",uVar3);
    return;
  }
  return;
}


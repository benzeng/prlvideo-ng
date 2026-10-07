
void FUN_100287480(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = FUN_1007d88c0();
  while( true ) {
    lVar2 = FUN_1002584f0(param_1 + 0x48);
    if (lVar2 == 0) break;
    if ((*(int *)(lVar2 + 0x18) == 0) && (*(code **)(lVar2 + 0x20) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x20))(*(undefined8 *)(lVar2 + 0x28));
    }
    FUN_100258470(param_1 + 0x48,lVar2);
  }
  lVar2 = FUN_1007d88c0();
  uVar3 = lVar2 - lVar1;
  if (DAT_1011b8a60 < uVar3) {
    DAT_1011b8a60 = uVar3;
    FUN_1008e3970("","LocalDevices",0,"[LSI] max_delta increase: %llu",uVar3);
    return;
  }
  return;
}


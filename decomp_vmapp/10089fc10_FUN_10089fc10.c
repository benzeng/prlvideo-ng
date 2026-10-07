
undefined8 FUN_10089fc10(long *param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_1 != (long *)0x0) && (lVar3 = FUN_1008a4610(&DAT_100be10c8), lVar3 != 0)) {
    if (*(long *)(param_2 + 0x10) == 0) {
      uVar4 = 0x6f;
      uVar5 = 0x6f;
    }
    else {
      pcVar1 = *(code **)(*(long *)(param_2 + 0x10) + 0x28);
      if (pcVar1 == (code *)0x0) {
        uVar4 = 0x7c;
        uVar5 = 0x6b;
      }
      else {
        iVar2 = (*pcVar1)(lVar3,param_2);
        if (iVar2 != 0) {
          if (*param_1 != 0) {
            FUN_1008a4c40(*param_1,&DAT_100be10c8);
          }
          *param_1 = lVar3;
          return 1;
        }
        uVar4 = 0x7e;
        uVar5 = 0x67;
      }
    }
    FUN_100887ce0(0xb,0x78,uVar4,"x_pubkey.c",uVar5);
    FUN_1008a4c40(lVar3,&DAT_100be10c8);
  }
  return 0;
}


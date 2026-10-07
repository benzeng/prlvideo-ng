
undefined8 FUN_1008a1c00(long param_1,long param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_2 == 0) {
    uVar3 = 1;
    if (((param_1 != 0) && (*(long *)(param_1 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(param_1 + 0xb0) + 0x18) != 0)) {
      FUN_1008a83a0();
      *(undefined8 *)(*(long *)(param_1 + 0xb0) + 0x18) = 0;
    }
  }
  else {
    uVar3 = 0;
    if (param_1 != 0) {
      lVar1 = *(long *)(param_1 + 0xb0);
      if (lVar1 == 0) {
        lVar1 = FUN_1008a4610(&DAT_100be1a78);
        *(long *)(param_1 + 0xb0) = lVar1;
        if (lVar1 == 0) {
          return 0;
        }
      }
      lVar2 = *(long *)(lVar1 + 0x18);
      if (lVar2 == 0) {
        lVar2 = FUN_1008a8380();
        *(long *)(lVar1 + 0x18) = lVar2;
        if (lVar2 == 0) {
          return 0;
        }
      }
      uVar3 = FUN_1008afb30(lVar2,param_2,param_3);
      return uVar3;
    }
  }
  return uVar3;
}


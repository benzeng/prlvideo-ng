
undefined4 FUN_10032f4a0(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long local_20;
  
  lVar1 = *(long *)(param_1 + 0x48);
  uVar2 = 0x80000007;
  if (lVar1 != 0) {
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x10) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
    FUN_1003193b0(&local_20,uVar3);
    uVar2 = FUN_100a4a320(lVar1,local_20);
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
  }
  return uVar2;
}



undefined8 FUN_10081c640(long param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_10084bf00(*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2d0));
  if (((iVar1 < 0) &&
      (iVar1 = FUN_10084bf00(*(undefined8 *)(param_1 + 0x2e8),*(undefined8 *)(param_1 + 0x2d0)),
      iVar1 < 0)) && (*(int *)(*(long *)(param_1 + 0x2e8) + 8) != 0)) {
    iVar1 = FUN_10084b410(*(undefined8 *)(param_1 + 0x2d0));
    if (*(int *)(param_1 + 0x318) <= iVar1) {
      if (*(code **)(param_1 + 0x2b8) == (code *)0x0) {
        lVar2 = FUN_1008e0a30(*(undefined8 *)(param_1 + 0x2d8),*(undefined8 *)(param_1 + 0x2d0));
        if (lVar2 != 0) {
          return 1;
        }
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x2b8))(param_1,*(undefined8 *)(param_1 + 0x2a8));
        if (0 < iVar1) {
          return 1;
        }
      }
    }
    *param_2 = 0x47;
  }
  else {
    *param_2 = 0x2f;
  }
  return 0;
}


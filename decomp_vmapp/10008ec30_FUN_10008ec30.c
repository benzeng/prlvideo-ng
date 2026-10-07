
undefined8 FUN_10008ec30(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  int *piVar3;
  
  if (*(uint *)(param_1 + 0x38) != 0) {
    lVar2 = 0;
    piVar3 = *(int **)(param_1 + 0x30);
    do {
      if (*piVar3 == param_2) {
        return *(undefined8 *)(*(int **)(param_1 + 0x30) + lVar2 * 4 + 2);
      }
      lVar2 = lVar2 + 1;
      piVar3 = piVar3 + 4;
    } while ((uint)lVar2 < *(uint *)(param_1 + 0x38));
  }
  uVar1 = FUN_1007d5980(param_2);
  return uVar1;
}


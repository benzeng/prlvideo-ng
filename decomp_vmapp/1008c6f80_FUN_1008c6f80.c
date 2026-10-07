
void FUN_1008c6f80(long param_1,undefined8 param_2)

{
  long lVar1;
  int *piVar2;
  long lVar3;
  
  lVar1 = FUN_10089cb20(param_2);
  piVar2 = *(int **)(param_1 + 0x60);
  lVar3 = *(long *)(piVar2 + 2);
  while( true ) {
    if (lVar3 == 0) {
      FUN_1008c3be0(param_1,param_2);
      return;
    }
    if (lVar1 == *piVar2) break;
    lVar3 = *(long *)(piVar2 + 8);
    piVar2 = piVar2 + 6;
  }
  FUN_10087d050();
  return;
}


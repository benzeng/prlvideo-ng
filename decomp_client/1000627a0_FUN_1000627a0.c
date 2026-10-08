
undefined8 * FUN_1000627a0(undefined8 *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 local_30 [8];
  
  *param_1 = PTR_shared_null_1021e15d0;
  FUN_100063260(param_1,*(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8));
  lVar1 = *param_2;
  uVar2 = (ulong)*(uint *)(lVar1 + 8);
  if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    lVar3 = 0;
    do {
      FUN_100062d00(param_1,lVar1 + 0x10 + ((int)uVar2 + lVar3) * 8,local_30);
      lVar3 = lVar3 + 1;
      lVar1 = *param_2;
      uVar2 = (ulong)*(int *)(lVar1 + 8);
    } while (lVar3 < (long)((long)*(int *)(lVar1 + 0xc) - uVar2));
  }
  return param_1;
}


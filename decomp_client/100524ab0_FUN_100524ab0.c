
undefined8 * FUN_100524ab0(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  *param_1 = PTR_shared_null_1021e15e8;
  lVar1 = *(long *)(param_2 + 0x40);
  uVar2 = (ulong)*(uint *)(lVar1 + 8);
  if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    lVar3 = 0;
    do {
      FUN_1000341d0(param_1,*(undefined8 *)
                             (*(long *)(param_2 + 0x38) + 0x10 +
                             ((long)*(int *)(lVar1 + 0x10 + ((int)uVar2 + lVar3) * 8) +
                             (long)*(int *)(*(long *)(param_2 + 0x38) + 8)) * 8));
      lVar3 = lVar3 + 1;
      lVar1 = *(long *)(param_2 + 0x40);
      uVar2 = (ulong)*(int *)(lVar1 + 8);
    } while (lVar3 < (long)((long)*(int *)(lVar1 + 0xc) - uVar2));
  }
  return param_1;
}


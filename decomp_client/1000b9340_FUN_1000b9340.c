
undefined8 * FUN_1000b9340(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40 [2];
  undefined1 local_38 [8];
  
  *param_1 = PTR_shared_null_1021e15d0;
  lVar1 = *(long *)(param_2 + 0x38);
  uVar2 = (ulong)*(uint *)(lVar1 + 8);
  if ((int)*(uint *)(lVar1 + 8) < *(int *)(lVar1 + 0xc)) {
    lVar3 = 0;
    do {
      local_40[0] = *(undefined4 *)(*(long *)(lVar1 + 0x10 + ((int)uVar2 + lVar3) * 8) + 0x10);
      FUN_1000bf310(param_1,local_40,local_38);
      lVar3 = lVar3 + 1;
      lVar1 = *(long *)(param_2 + 0x38);
      uVar2 = (ulong)*(int *)(lVar1 + 8);
    } while (lVar3 < (long)((long)*(int *)(lVar1 + 0xc) - uVar2));
  }
  return param_1;
}


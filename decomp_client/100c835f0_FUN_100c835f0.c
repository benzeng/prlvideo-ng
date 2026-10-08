
undefined8 FUN_100c835f0(undefined4 *param_1,long *param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = 0;
  uVar2 = 0;
  if ((((param_3 != (long *)0x0) && (lVar1 = *param_3, lVar1 != 0)) &&
      (lVar4 = *(long *)(param_4 + 0x20), lVar4 != 0)) &&
     (((uVar3 = uVar2, (*(byte *)(lVar4 + 8) & 2) != 0 &&
       (lVar4 = (long)*(int *)(lVar4 + 0x20), lVar1 + lVar4 != 0)) &&
      (*(int *)(lVar4 + 0x10 + lVar1) == 0)))) {
    if (param_2 != (long *)0x0) {
      _memcpy((void *)*param_2,*(void **)(lVar1 + lVar4),*(size_t *)(lVar1 + 8 + lVar4));
      *param_2 = *param_2 + *(long *)(lVar1 + 8 + lVar4);
    }
    uVar3 = 1;
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *(undefined4 *)(lVar4 + 8 + lVar1);
    }
  }
  return uVar3;
}



ulong FUN_1003dfc80(long param_1,void *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = 0;
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    uVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    if (param_3 < uVar2) {
      uVar2 = param_3;
    }
    uVar3 = (ulong)uVar2;
    lVar1 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    _memcpy(param_2,(void *)((ulong)*(uint *)(param_1 + 8) + lVar1),uVar3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + uVar2;
  }
  return uVar3;
}


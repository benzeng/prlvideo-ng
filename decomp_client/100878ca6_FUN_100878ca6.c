
undefined4 FUN_100878ca6(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_c;
  
  if ((*(uint *)(param_1 + 0x234) >> 0xd & 1) != 0) {
    for (local_c = 0; local_c < *(int *)(param_1 + 0x1fc); local_c = local_c + 2) {
      if (*(long *)(*(long *)(param_1 + 0x208) + (long)local_c * 8) == param_2) {
        if (*(long *)(*(long *)(param_1 + 0x208) + (long)local_c * 8 + 8) == param_3) {
          return 0xfffffffe;
        }
        break;
      }
    }
  }
  if ((*(int *)(param_1 + 0x200) == 0) || (*(long *)(param_1 + 0x208) == 0)) {
    *(undefined4 *)(param_1 + 0x200) = 10;
    *(undefined4 *)(param_1 + 0x1fc) = 0;
    uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x200) * 8);
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    if (*(long *)(param_1 + 0x208) == 0) {
      _xmlErrMemory(param_1,0);
      *(undefined4 *)(param_1 + 0x200) = 0;
      return 0xffffffff;
    }
  }
  else if (*(int *)(param_1 + 0x200) <= *(int *)(param_1 + 0x1fc)) {
    *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x208),(long)*(int *)(param_1 + 0x200) * 8);
    *(undefined8 *)(param_1 + 0x208) = uVar2;
    if (*(long *)(param_1 + 0x208) == 0) {
      _xmlErrMemory(param_1,0);
      *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) / 2;
      return 0xffffffff;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1fc);
  *(long *)(*(long *)(param_1 + 0x208) + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x1fc) = iVar1 + 1;
  iVar1 = *(int *)(param_1 + 0x1fc);
  *(long *)(*(long *)(param_1 + 0x208) + (long)iVar1 * 8) = param_3;
  *(int *)(param_1 + 0x1fc) = iVar1 + 1;
  return *(undefined4 *)(param_1 + 0x1fc);
}


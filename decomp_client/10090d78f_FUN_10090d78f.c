
undefined4 FUN_10090d78f(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_2c;
  
  if (param_2 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0x5aa;
    FUN_10090b6dd(param_1,"atom push: atom is NULL");
    local_2c = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 *)(param_1 + 0x38) = 4;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x38) * 8);
      *(undefined8 *)(param_1 + 0x40) = uVar2;
      if (*(long *)(param_1 + 0x40) == 0) {
        FUN_10090b61c(param_1,"pushing atom");
        *(undefined4 *)(param_1 + 0x38) = 0;
        return 0xffffffff;
      }
    }
    else if (*(int *)(param_1 + 0x38) <= *(int *)(param_1 + 0x3c)) {
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) * 2;
      lVar3 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x40),(long)*(int *)(param_1 + 0x38) * 8);
      if (lVar3 == 0) {
        FUN_10090b61c(param_1,"allocating counter");
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) / 2;
        return 0xffffffff;
      }
      *(long *)(param_1 + 0x40) = lVar3;
    }
    *param_2 = *(undefined4 *)(param_1 + 0x3c);
    iVar1 = *(int *)(param_1 + 0x3c);
    *(undefined4 **)(*(long *)(param_1 + 0x40) + (long)iVar1 * 8) = param_2;
    *(int *)(param_1 + 0x3c) = iVar1 + 1;
    local_2c = 0;
  }
  return local_2c;
}



undefined4 FUN_1001da3f9(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_2c;
  
  if (param_2 == 0) {
    local_2c = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x48) == 0) {
      *(undefined4 *)(param_1 + 0x48) = 4;
      uVar2 = (*(code *)_xmlMalloc)((long)*(int *)(param_1 + 0x48) * 8);
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      if (*(long *)(param_1 + 0x50) == 0) {
        FUN_1001d7cf4(param_1,"adding state");
        *(undefined4 *)(param_1 + 0x48) = 0;
        return 0xffffffff;
      }
    }
    else if (*(int *)(param_1 + 0x48) <= *(int *)(param_1 + 0x4c)) {
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) * 2;
      lVar3 = (*(code *)_xmlRealloc)
                        (*(undefined8 *)(param_1 + 0x50),(long)*(int *)(param_1 + 0x48) * 8);
      if (lVar3 == 0) {
        FUN_1001d7cf4(param_1,"adding state");
        *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) / 2;
        return 0xffffffff;
      }
      *(long *)(param_1 + 0x50) = lVar3;
    }
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = *(int *)(param_1 + 0x4c);
    *(long *)(*(long *)(param_1 + 0x50) + (long)iVar1 * 8) = param_2;
    *(int *)(param_1 + 0x4c) = iVar1 + 1;
    local_2c = 0;
  }
  return local_2c;
}



int FUN_100146164(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x17c) <= *(int *)(param_1 + 0x178)) {
    *(int *)(param_1 + 0x17c) = *(int *)(param_1 + 0x17c) * 2;
    uVar2 = (*(code *)_xmlRealloc)
                      (*(undefined8 *)(param_1 + 0x180),(long)*(int *)(param_1 + 0x17c) * 4);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    if (*(long *)(param_1 + 0x180) == 0) {
      _xmlErrMemory(param_1,0);
      return 0;
    }
  }
  *(undefined4 *)(*(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x178) * 4) = param_2;
  *(long *)(param_1 + 0x170) = *(long *)(param_1 + 0x180) + (long)*(int *)(param_1 + 0x178) * 4;
  iVar1 = *(int *)(param_1 + 0x178);
  *(int *)(param_1 + 0x178) = iVar1 + 1;
  return iVar1;
}


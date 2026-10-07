
void FUN_1002723a0(long param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(param_1 + 0x90);
  lVar3 = FUN_100257d80();
  plVar4 = (long *)(param_1 + 0x98);
  if (plVar1 != (long *)0x0) {
    plVar4 = plVar1;
  }
  FUN_1002724a0(param_1);
  iVar2 = (**(code **)(*plVar4 + 0x30))
                    (plVar4,*(undefined4 *)(lVar3 + 0x31c84),*(undefined4 *)(lVar3 + 0x31c88),
                     *(undefined1 *)(lVar3 + 0x31cac));
  if (iVar2 == *(int *)(lVar3 + 0x31c88)) {
    *(undefined4 *)(lVar3 + 0x31ca8) = 0;
  }
  else {
    *(undefined4 *)(lVar3 + 0x31ca8) = 1;
  }
  return;
}



void FUN_10035a0f0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 2) >> 1;
  bVar1 = *(byte *)(param_1 + 0x31);
  *(char *)(param_1 + 0x31) = (char)uVar2;
  if (bVar1 != uVar2) {
    if ((param_2 & 2) != 0) {
      FUN_10035a170(param_1);
      return;
    }
    if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
       (*(long *)(param_1 + 0x28) != 0)) {
      QWidget::close();
      if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
         (*(long **)(param_1 + 0x28) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
      }
    }
    FUN_10035a6b0(param_1,0);
    *(undefined4 *)(param_1 + 0x34) = 2;
  }
  return;
}


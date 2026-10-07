
void FUN_10035d250(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_2 + 0x28) != 0) {
    FUN_10035d2c0(param_1,param_2);
  }
  if (*(long *)(param_2 + 0x20) != 0) {
    *(undefined8 *)(param_2 + 0x28) = **(undefined8 **)(param_1 + 0x38);
  }
  lVar1 = param_2 + 0x38;
  lVar2 = *(long *)(param_2 + 0x48);
  *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(param_2 + 0x40);
  *(long *)(*(long *)(param_2 + 0x40) + 0x10) = lVar2;
  *(long *)(param_2 + 0x40) = lVar1;
  *(long *)(param_2 + 0x48) = param_1 + 0x40;
  *(undefined8 *)(param_2 + 0x40) = *(undefined8 *)(param_1 + 0x48);
  *(long *)(*(long *)(param_1 + 0x48) + 0x10) = lVar1;
  *(long *)(param_1 + 0x48) = lVar1;
  return;
}


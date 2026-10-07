
void FUN_10070af10(long param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  
  pvVar1 = *(void **)(param_1 + 0x10);
  uVar3 = *(uint *)(param_1 + 8);
  if ((uVar3 & 0xfc) == 0) {
    iVar2 = (**(code **)((long)pvVar1 + 8))(param_1);
    uVar3 = *(uint *)(param_1 + 8);
    if (iVar2 < 0) {
      uVar3 = uVar3 | 0x80;
      *(uint *)(param_1 + 8) = uVar3;
    }
  }
  *(uint *)(param_1 + 8) = uVar3 & 0xfffffeff;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar1 + 0x10);
  _free(pvVar1);
  return;
}



undefined8 FUN_0040e3f0(long param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_2 <= (uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 8))) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
    uVar1 = FUN_0040e280(*(int *)(param_1 + 0x18),param_2 + *(int *)(param_1 + 8));
    local_18 = *(undefined8 *)(param_1 + 0x10);
    local_10 = *(undefined4 *)(param_1 + 0x18);
    iVar2 = FUN_0040e610(&local_18,uVar1);
    if (iVar2 != 0) {
      *(undefined8 *)(param_1 + 0x10) = local_18;
      *(undefined4 *)(param_1 + 0x18) = local_10;
      return 0;
    }
  }
  return 0xfffffffe;
}


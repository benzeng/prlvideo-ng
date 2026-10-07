
undefined8 FUN_1008e2350(long param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0x128) != -1) {
    iVar1 = FUN_10088beb0(param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = FUN_100894600(param_2);
      sVar2 = (size_t)iVar1;
      _memcpy((void *)(param_1 + 0xa8),(void *)(param_2 + 0xa8),sVar2);
      _memcpy((void *)(param_1 + 200),(void *)(param_2 + 200),sVar2);
      _memcpy((void *)(param_1 + 0xe8),(void *)(param_2 + 0xe8),sVar2);
      _memcpy((void *)(param_1 + 0x108),(void *)(param_2 + 0x108),sVar2);
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(param_2 + 0x128);
      uVar3 = 1;
    }
  }
  return uVar3;
}


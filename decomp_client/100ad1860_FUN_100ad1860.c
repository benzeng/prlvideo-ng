
undefined4 FUN_100ad1860(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(ushort *)(param_2 + 0x10) & 0x4010) == 0) {
    if (*(int *)(param_2 + 0x28) - *(int *)(param_2 + 0x20) < 0x10) {
      uVar2 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0x2c) - *(int *)(param_2 + 0x24);
      uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),0xf < iVar1);
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


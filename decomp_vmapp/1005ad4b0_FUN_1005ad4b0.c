
undefined8 FUN_1005ad4b0(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == -1) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x34);
    if ((iVar1 == -1) || (iVar1 == param_2)) {
      *(int *)(param_1 + 0x34) = param_2;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      uVar2 = CONCAT71((uint7)(uint3)((uint)iVar1 >> 8),1);
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}


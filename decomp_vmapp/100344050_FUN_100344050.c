
void FUN_100344050(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = _memcmp(param_1 + 0x20,param_2,0x10);
  if (iVar2 != 0) {
    uVar1 = *param_2;
    *(undefined8 *)(param_1 + 0x28) = param_2[1];
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    *param_1 = *param_1 | 1;
  }
  return;
}


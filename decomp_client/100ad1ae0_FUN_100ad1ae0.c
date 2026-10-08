
void FUN_100ad1ae0(undefined8 param_1,long param_2)

{
  bool bVar1;
  
  if (param_2 != 0) {
    if ((*(ushort *)(param_2 + 0x18) & 0x4010) == 0) {
      if (*(int *)(param_2 + 0x30) - *(int *)(param_2 + 0x28) < 0x10) {
        bVar1 = false;
      }
      else {
        bVar1 = 0xf < *(int *)(param_2 + 0x34) - *(int *)(param_2 + 0x2c);
      }
    }
    else {
      bVar1 = false;
    }
    FUN_100ae31d0(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10),bVar1);
    return;
  }
  return;
}


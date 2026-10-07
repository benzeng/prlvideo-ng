
void FUN_100471c60(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(byte *)(param_2 + 9) & 0x10) == 0) {
    lVar1 = param_1 + 0x70;
  }
  else {
    lVar1 = param_1 + 0xa0;
  }
  FUN_10046bef0(lVar1,*(undefined8 *)(param_1 + 0x38),param_2);
  return;
}


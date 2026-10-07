
bool FUN_100857440(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_10084b950();
  if (lVar2 != 0) {
    FUN_10084bbb0(param_1 + 0x18,0);
    uVar1 = FUN_10084b410(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


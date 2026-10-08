
bool FUN_100c32640(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_100c26b50();
  if (lVar2 != 0) {
    FUN_100c26db0(param_1 + 0x18,0);
    uVar1 = FUN_100c26610(param_2);
    *(undefined4 *)(param_1 + 0x30) = uVar1;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return lVar2 != 0;
}


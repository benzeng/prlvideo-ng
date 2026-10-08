
void FUN_10062c6e0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = QListData::append();
    FUN_10062cb70(param_1,uVar1,param_2);
  }
  else {
    uVar1 = FUN_10062ca00(param_1,0x7fffffff,1);
    FUN_10062cb70(param_1,uVar1,param_2);
  }
  return;
}


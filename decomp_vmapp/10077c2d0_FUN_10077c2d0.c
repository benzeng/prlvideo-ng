
void FUN_10077c2d0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = QListData::append();
    FUN_10077cce0(param_1,uVar1,param_2);
  }
  else {
    uVar1 = FUN_10077cb00(param_1,0x7fffffff,1);
    FUN_10077cce0(param_1,uVar1,param_2);
  }
  return;
}


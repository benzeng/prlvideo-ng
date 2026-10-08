
void FUN_100557e00(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = QListData::insert((int)param_1);
    FUN_100559e80(param_1,uVar1,param_3);
  }
  else {
    uVar1 = FUN_100559d10(param_1,param_2,1);
    FUN_100559e80(param_1,uVar1,param_3);
  }
  return;
}


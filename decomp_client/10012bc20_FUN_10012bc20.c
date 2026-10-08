
void FUN_10012bc20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)*param_1 < 2) {
    uVar1 = QListData::append();
    FUN_10012be30(param_1,uVar1,param_2);
  }
  else {
    uVar1 = FUN_10012bcc0(param_1,0x7fffffff,1);
    FUN_10012be30(param_1,uVar1,param_2);
  }
  return;
}


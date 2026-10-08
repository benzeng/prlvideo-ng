
void FUN_100d7cb00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28 [2];
  
  if (*(uint *)*param_1 < 2) {
    FUN_100d7ce80(local_28,param_2);
    puVar2 = (undefined8 *)QListData::append();
    *puVar2 = local_28[0];
  }
  else {
    uVar1 = FUN_100d7cbd0(param_1,0x7fffffff,1);
    FUN_100d7ce80(uVar1,param_2);
  }
  return;
}


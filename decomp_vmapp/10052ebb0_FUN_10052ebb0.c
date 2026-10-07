
void FUN_10052ebb0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_28 [2];
  
  if (*(uint *)*param_1 < 2) {
    FUN_10000d8d0(local_28,param_2);
    puVar2 = (undefined8 *)QListData::append();
    *puVar2 = local_28[0];
  }
  else {
    uVar1 = FUN_10052ec80(param_1,0x7fffffff,1);
    FUN_10000d8d0(uVar1,param_2);
  }
  return;
}



void FUN_100129ce0(undefined8 *param_1,CHwNetAdapter *param_2)

{
  undefined8 *puVar1;
  CHwNetAdapter *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0x120);
    CHwNetAdapter::CHwNetAdapter(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_10012c530(param_1,0x7fffffff,1);
    this = operator_new(0x120);
    CHwNetAdapter::CHwNetAdapter(this,param_2);
  }
  *puVar1 = this;
  return;
}


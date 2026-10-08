
void FUN_1001f63b0(undefined8 *param_1,CVirtualNetwork *param_2)

{
  undefined8 *puVar1;
  CVirtualNetwork *this;
  
  if (*(uint *)*param_1 < 2) {
    puVar1 = (undefined8 *)QListData::append();
    this = operator_new(0xd8);
    CVirtualNetwork::CVirtualNetwork(this,param_2);
  }
  else {
    puVar1 = (undefined8 *)FUN_1001f6620(param_1,0x7fffffff,1);
    this = operator_new(0xd8);
    CVirtualNetwork::CVirtualNetwork(this,param_2);
  }
  *puVar1 = this;
  return;
}


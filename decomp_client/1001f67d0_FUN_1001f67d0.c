
void FUN_1001f67d0(undefined8 param_1,long param_2,long param_3,long param_4)

{
  CVirtualNetwork *this;
  long lVar1;
  
  if (param_2 - param_3 != 0) {
    lVar1 = 0;
    do {
      this = operator_new(0xd8);
      CVirtualNetwork::CVirtualNetwork(this,*(CVirtualNetwork **)(param_4 + lVar1));
      *(CVirtualNetwork **)(param_2 + lVar1) = this;
      lVar1 = lVar1 + 8;
    } while ((param_2 - param_3) + lVar1 != 0);
  }
  return;
}


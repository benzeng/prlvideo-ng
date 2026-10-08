
void FUN_10027d730(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  CTaskGenericId *this;
  
  uVar1 = FUN_1001d50a0();
  this = operator_new(0x18);
  CTaskGenericId::CTaskGenericId(this,0x59);
  *(undefined ***)this = &PTR_FUN_102271fd0;
  FUN_1002ad2d0(param_1,uVar1,this,param_2);
  *param_1 = &PTR_FUN_102205f10;
  return;
}


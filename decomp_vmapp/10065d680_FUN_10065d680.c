
void FUN_10065d680(undefined8 *param_1,CHwOsDistrInfo *param_2,CHwOsInfo *param_3)

{
  CHwOsDistrInfo *this;
  undefined8 *puVar1;
  CHwOsInfo *this_00;
  
  this = (CHwOsDistrInfo *)0x0;
  if (param_2 != (CHwOsDistrInfo *)0x0) {
    this = operator_new(0xa8);
    CHwOsDistrInfo::CHwOsDistrInfo(this,param_2);
  }
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
    if (this != (CHwOsDistrInfo *)0x0) {
      (**(code **)(*(long *)this + 0x88))(this);
      puVar1 = (undefined8 *)0x0;
    }
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = this;
    *puVar1 = &PTR_FUN_10116d1a8;
  }
  *param_1 = puVar1;
  this_00 = (CHwOsInfo *)0x0;
  if (param_3 != (CHwOsInfo *)0x0) {
    this_00 = operator_new(0xa0);
    CHwOsInfo::CHwOsInfo(this_00,param_3);
  }
  puVar1 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
    if (this_00 != (CHwOsInfo *)0x0) {
      puVar1 = (undefined8 *)0x0;
      (**(code **)(*(long *)this_00 + 0x88))(this_00);
    }
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 1;
    puVar1[2] = this_00;
    *puVar1 = &PTR_FUN_10116d208;
  }
  param_1[1] = puVar1;
  return;
}


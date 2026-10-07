
int FUN_100078da0(long param_1,CVmConfiguration *param_2)

{
  int iVar1;
  CVmConfiguration *this;
  
  if (*(long **)(param_1 + 0x120) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x120) + 0x20))();
  }
  this = operator_new(0xf8);
  CVmConfiguration::CVmConfiguration(this,param_2);
  *(CVmConfiguration **)(param_1 + 0x120) = this;
  iVar1 = *(int *)(this + 0x18);
  if (iVar1 < 0) {
    (**(code **)(*(long *)this + 0x20))(this);
    *(undefined8 *)(param_1 + 0x120) = 0;
  }
  return iVar1;
}


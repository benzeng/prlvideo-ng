
undefined4 FUN_1002916a0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined1 local_980 [24];
  undefined4 local_968;
  undefined4 local_950;
  undefined8 local_948;
  long local_878;
  undefined8 local_870;
  undefined4 *local_868;
  undefined4 local_860 [2];
  undefined8 local_858;
  QWaitCondition local_40;
  QMutex local_38 [2];
  
  local_878 = DAT_1011c3688;
  local_870 = *(undefined8 *)(*(long *)(DAT_1011c3688 + 0x60) + 0x20);
  local_868 = local_860;
  local_860[0] = 0;
  local_858 = 0;
  QWaitCondition::QWaitCondition(&local_40);
  QMutex::QMutex(local_38,0);
  local_968 = 4;
  local_950 = 1;
  local_948 = param_2;
  FUN_100258290(param_1 + 0x48,local_980,*(undefined8 *)(param_1 + 0x40));
  uVar1 = local_950;
  QMutex::~QMutex(local_38);
  QWaitCondition::~QWaitCondition(&local_40);
  FUN_10008d470(&local_878);
  return uVar1;
}


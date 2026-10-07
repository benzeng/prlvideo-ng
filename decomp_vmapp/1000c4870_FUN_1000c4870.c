
bool FUN_1000c4870(long param_1,ulong param_2,ulong *param_3,undefined8 *param_4,string *param_5)

{
  ulong uVar1;
  long *plVar2;
  string local_48 [24];
  
  *param_3 = param_2;
  *param_4 = 1;
  std::string::assign((char *)param_5);
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 <= param_2) {
    plVar2 = *(long **)(*(long *)(param_1 + 0x148) + 0x1950);
    (**(code **)(*plVar2 + 0x120))(local_48,plVar2,param_2,param_3,param_4);
    std::string::operator=(param_5,local_48);
    std::string::~string(local_48);
  }
  return uVar1 <= param_2;
}



string * FUN_1009d5370(string *param_1,string *param_2,string *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  ulong uVar4;
  string local_48;
  undefined1 local_47 [15];
  undefined1 *local_38;
  
  uVar1 = _CFUUIDCreate(0);
  uVar2 = _CFUUIDCreateString(0,uVar1);
  _CFRelease(uVar1);
  FUN_1009d9840(&local_48,uVar2);
  _CFRelease(uVar2);
  std::string::string(param_1,param_2);
  if (((byte)*param_2 & 1) == 0) {
    uVar4 = (ulong)((byte)*param_2 >> 1);
  }
  else {
    uVar4 = *(ulong *)(param_2 + 8);
  }
  if ((uVar4 != 0) && (pcVar3 = (char *)std::string::at((ulong)param_2), *pcVar3 != '/')) {
    std::string::append((ulong)param_1,'\x01');
  }
  if (((byte)local_48 & 1) == 0) {
    local_38 = local_47;
  }
  std::string::append((char *)param_1,(ulong)local_38);
  std::string::append((char *)param_1);
  if (param_3 != (string *)0x0) {
    std::string::operator=(param_3,&local_48);
  }
  std::string::~string(&local_48);
  return param_1;
}


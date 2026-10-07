
char * FUN_1007d6a90(char *param_1,undefined8 param_2)

{
  string local_30;
  char local_2f [7];
  uint local_28;
  char *local_20;
  
  FUN_1007ea5b0(&local_30,param_2,0);
  if (((byte)local_30 & 1) == 0) {
    local_28 = (uint)((byte)local_30 >> 1);
    local_20 = local_2f;
  }
  if ((local_20 != (char *)0x0) && (local_28 == 0xffffffff)) {
    _strlen(local_20);
  }
  QString::fromUtf8_helper(param_1,(int)local_20);
  std::string::~string(&local_30);
  return param_1;
}


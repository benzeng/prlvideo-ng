
string * FUN_100713a90(string *param_1)

{
  string local_48;
  undefined1 local_47 [7];
  ulong local_40;
  undefined1 *local_38;
  string local_30;
  undefined1 local_2f [7];
  ulong local_28;
  undefined1 *local_20;
  
  FUN_100713870(&local_30);
  if (((byte)local_30 & 1) == 0) {
    local_28 = (ulong)((byte)local_30 >> 1);
  }
  if (local_28 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    *(undefined8 *)param_1 = 0;
  }
  else {
    if (3 < DAT_1011b55f8) {
      if (((byte)local_30 & 1) == 0) {
        local_20 = local_2f;
      }
      FUN_1008e3970("","GenHwId",4,"system serial number: %s",local_20);
    }
    FUN_1007130d0(&local_48,&local_30);
    if (2 < DAT_1011b55f8) {
      if (((byte)local_48 & 1) == 0) {
        local_38 = local_47;
      }
      FUN_1008e3970("","GenHwId",3,"hardware identifier: %s",local_38);
    }
    if (((byte)local_48 & 1) == 0) {
      local_40 = (ulong)((byte)local_48 >> 1);
    }
    if (local_40 == 0) {
      FUN_1008e3970("","GenHwId",0,"Failed to generate hardware identifier");
    }
    std::string::string(param_1,&local_48);
    std::string::~string(&local_48);
  }
  std::string::~string(&local_30);
  return param_1;
}


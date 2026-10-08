
undefined8 FUN_100a78ae0(long param_1,undefined8 param_2)

{
  char cVar1;
  string local_30;
  undefined1 local_2f [15];
  undefined1 *local_20;
  undefined8 local_18;
  
  cVar1 = FUN_100ab57c0(*(undefined8 *)(param_1 + 0x328),&local_18,param_2);
  if (cVar1 == '\0') {
    FUN_100ab5660(&local_30);
    if (((byte)local_30 & 1) == 0) {
      local_20 = local_2f;
    }
    FUN_100df99c0("","IOCommunication",0,"Error serializing SSL CTX to ASN: %s",local_20);
    std::string::~string(&local_30);
    local_18 = 0;
  }
  return local_18;
}


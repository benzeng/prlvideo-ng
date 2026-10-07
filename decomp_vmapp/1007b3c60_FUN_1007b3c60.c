
undefined8 FUN_1007b3c60(long param_1)

{
  char cVar1;
  string local_28;
  undefined1 local_27 [15];
  undefined1 *local_18;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    cVar1 = FUN_1007ebe90(*(undefined8 *)(param_1 + 0x328));
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1007ebca0(&local_28);
    if (((byte)local_28 & 1) == 0) {
      local_18 = local_27;
    }
    FUN_1008e3970("","IOCommunication",0,
                  "SSL error: can\'t create SSL_SESSION from ANSI (SSL error: %s)",local_18);
    std::string::~string(&local_28);
  }
  return 0;
}


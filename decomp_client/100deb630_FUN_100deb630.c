
undefined8 FUN_100deb630(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  string local_28;
  undefined1 local_27 [15];
  undefined1 *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSString_10226a7c8;
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)(param_1,PTR_s_UTF8String_1022699e8);
  FUN_100deb730(&local_28,uVar2);
  if (((byte)local_28 & 1) == 0) {
    local_18 = local_27;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_1021e1c68)
                    (puVar1,PTR_s_stringWithUTF8String__1022697c0,local_18);
  std::string::~string(&local_28);
  return uVar2;
}


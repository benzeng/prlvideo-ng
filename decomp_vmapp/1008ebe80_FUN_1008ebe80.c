
undefined8 FUN_1008ebe80(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  string local_28;
  undefined1 local_27 [15];
  undefined1 *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSString_100bedb00;
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)(param_1,PTR_s_UTF8String_100bed218);
  FUN_1008ebf80(&local_28,uVar2);
  if (((byte)local_28 & 1) == 0) {
    local_18 = local_27;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (puVar1,PTR_s_stringWithUTF8String__100bed208,local_18);
  std::string::~string(&local_28);
  return uVar2;
}



bool FUN_10000c400(byte *param_1,char *param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = NSWorkspace::sharedWorkspace
                    ((ID)PTR__OBJC_CLASS___NSWorkspace_100bedaf8,PTR_s_sharedWorkspace_100bed200);
  if ((*param_1 & 1) == 0) {
    param_1 = param_1 + 1;
  }
  else {
    param_1 = *(byte **)(param_1 + 0x10);
  }
  IVar2 = NSString::stringWithUTF8String_
                    ((ID)PTR__OBJC_CLASS___NSString_100bedb00,PTR_s_stringWithUTF8String__100bed208,
                     param_1);
  IVar1 = NSWorkspace::absolutePathForAppBundleWithIdentifier_
                    (IVar1,PTR_s_absolutePathForAppBundleWithIden_100bed210,IVar2);
  if (IVar1 != 0) {
    NSWorkspace::UTF8String(IVar1,PTR_s_UTF8String_100bed218);
    std::string::assign(param_2);
  }
  return IVar1 != 0;
}


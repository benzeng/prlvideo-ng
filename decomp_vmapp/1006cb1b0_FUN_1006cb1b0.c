
long FUN_1006cb1b0(void)

{
  long lVar1;
  
  lVar1 = _SCNetworkProtocolGetConfiguration();
  if (lVar1 == 0) {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_100ba23f8,
                       PTR__kCFTypeDictionaryValueCallBacks_100ba2400);
  }
  else {
    lVar1 = _CFDictionaryCreateMutableCopy(0,0,lVar1);
  }
  if (lVar1 == 0) {
    FUN_1008e3970("","prl_net",0,"copyProtoConfigurationSafe failed");
  }
  return lVar1;
}


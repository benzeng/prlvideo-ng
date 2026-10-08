
long FUN_100b50600(void)

{
  long lVar1;
  
  lVar1 = _SCNetworkProtocolGetConfiguration();
  if (lVar1 == 0) {
    lVar1 = _CFDictionaryCreateMutable
                      (0,0,PTR__kCFTypeDictionaryKeyCallBacks_1021e1960,
                       PTR__kCFTypeDictionaryValueCallBacks_1021e1968);
  }
  else {
    lVar1 = _CFDictionaryCreateMutableCopy(0,0,lVar1);
  }
  if (lVar1 == 0) {
    FUN_100df99c0("","prl_net",0,"copyProtoConfigurationSafe failed");
  }
  return lVar1;
}



string * FUN_100a64630(string *param_1,long param_2)

{
  long lVar1;
  string *psVar2;
  
  psVar2 = (string *)(param_2 + 0x30);
  lVar1 = std::string::find((char)psVar2,0x2f);
  if ((lVar1 == -1) && (lVar1 = std::string::find((char)psVar2,0x2e), lVar1 == -1)) {
    FUN_100a65520(param_1,"/tmp/",psVar2);
    return param_1;
  }
  std::string::string(param_1,psVar2);
  return param_1;
}


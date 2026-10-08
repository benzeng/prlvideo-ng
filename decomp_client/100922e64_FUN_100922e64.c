
int FUN_100922e64(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  int iVar1;
  long lVar2;
  byte *str1;
  int local_54;
  byte *local_20;
  int local_14;
  
  local_14 = 0;
  lVar2 = FUN_100920729(param_2,"maxOccurs");
  local_54 = param_5;
  if (lVar2 != 0) {
    str1 = (byte *)FUN_10092084c(param_1,lVar2);
    iVar1 = _xmlStrEqual(str1,(xmlChar *)"unbounded");
    local_20 = str1;
    if (iVar1 == 0) {
      for (; (*local_20 == 0x20 || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))));
          local_20 = local_20 + 1) {
      }
      if (*local_20 == 0) {
        FUN_10091e207(param_1,0xbdd,0,lVar2,0,param_6,str1,0,0,0);
      }
      else {
        for (; (0x2f < *local_20 && (*local_20 < 0x3a)); local_20 = local_20 + 1) {
          local_14 = local_14 * 10 + (uint)*local_20 + -0x30;
        }
        for (; ((*local_20 == 0x20 || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd))
            ; local_20 = local_20 + 1) {
        }
        if (((*local_20 == 0) && (param_3 <= local_14)) &&
           ((param_4 == -1 || (local_14 <= param_4)))) {
          local_54 = local_14;
        }
        else {
          FUN_10091e207(param_1,0xbdd,0,lVar2,0,param_6,str1,0,0,0);
        }
      }
    }
    else if (param_4 == 0x40000000) {
      local_54 = 0x40000000;
    }
    else {
      FUN_10091e207(param_1,0xbdd,0,lVar2,0,param_6,str1,0,0,0);
    }
  }
  return local_54;
}


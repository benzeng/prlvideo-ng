
int FUN_1009230c5(undefined8 param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 undefined8 param_6)

{
  long lVar1;
  byte *pbVar2;
  int local_54;
  byte *local_20;
  int local_14;
  
  local_14 = 0;
  lVar1 = FUN_100920729(param_2,"minOccurs");
  local_54 = param_5;
  if (lVar1 != 0) {
    pbVar2 = (byte *)FUN_10092084c(param_1,lVar1);
    for (local_20 = pbVar2;
        (*local_20 == 0x20 || (((8 < *local_20 && (*local_20 < 0xb)) || (*local_20 == 0xd))));
        local_20 = local_20 + 1) {
    }
    if (*local_20 == 0) {
      FUN_10091e207(param_1,0xbdd,0,lVar1,0,param_6,pbVar2,0,0,0);
    }
    else {
      for (; (0x2f < *local_20 && (*local_20 < 0x3a)); local_20 = local_20 + 1) {
        local_14 = local_14 * 10 + (uint)*local_20 + -0x30;
      }
      for (; ((*local_20 == 0x20 || ((8 < *local_20 && (*local_20 < 0xb)))) || (*local_20 == 0xd));
          local_20 = local_20 + 1) {
      }
      if (((*local_20 == 0) && (param_3 <= local_14)) && ((param_4 == -1 || (local_14 <= param_4))))
      {
        local_54 = local_14;
      }
      else {
        FUN_10091e207(param_1,0xbdd,0,lVar1,0,param_6,pbVar2,0,0,0);
      }
    }
  }
  return local_54;
}


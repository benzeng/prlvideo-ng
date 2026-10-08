
byte * FUN_100ddc160(undefined8 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  
  if ((DAT_102319260 != 0) &&
     (pbVar2 = (byte *)FUN_100ddbf40(&DAT_102319260,param_1), pbVar2 != (byte *)0x0)) {
    param_2 = pbVar2 + 1;
    if (*pbVar2 != 0x22) {
      param_2 = pbVar2;
    }
    if (param_2 < &DAT_102319768) {
      uVar3 = 1;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        if (*pbVar2 == 0x22) {
          if (bVar1 == 0x22) goto LAB_100ddc226;
        }
        else if ((char)bVar1 < '|') {
          if ((bVar1 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
LAB_100ddc226:
            *pbVar4 = 0;
            break;
          }
        }
        else if (bVar1 == 0x7c) goto LAB_100ddc226;
        pbVar4 = param_2 + uVar3;
        uVar3 = uVar3 + 1;
      } while (pbVar4 < &DAT_102319768);
    }
    FUN_100df99c0("","Std",0,"SystemFlag \'%s\' = \'%s\'",param_1,param_2);
  }
  return param_2;
}



byte * FUN_100ddc260(int *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*param_1 != 0) && (pbVar3 = (byte *)FUN_100ddbf40(param_1,param_2), pbVar3 != (byte *)0x0)) {
    param_3 = pbVar3 + 1;
    if (*pbVar3 != 0x22) {
      param_3 = pbVar3;
    }
    if (param_3 < param_1 + 0x142) {
      uVar2 = 1;
      pbVar4 = param_3;
      do {
        bVar1 = *pbVar4;
        if (*pbVar3 == 0x22) {
          if (bVar1 == 0x22) goto LAB_100ddc316;
        }
        else if ((char)bVar1 < '|') {
          if ((bVar1 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
LAB_100ddc316:
            *pbVar4 = 0;
            break;
          }
        }
        else if (bVar1 == 0x7c) goto LAB_100ddc316;
        pbVar4 = param_3 + uVar2;
        uVar2 = uVar2 + 1;
      } while (pbVar4 < param_1 + 0x142);
    }
    FUN_100df99c0("","Std",0,"SystemFlag \'%s\' = \'%s\'",param_2,param_3);
  }
  return param_3;
}



byte * FUN_1007da6e0(int *param_1,undefined8 param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  if ((*param_1 != 0) && (pbVar3 = (byte *)FUN_1007da3c0(param_1,param_2), pbVar3 != (byte *)0x0)) {
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
          if (bVar1 == 0x22) goto LAB_1007da796;
        }
        else if ((char)bVar1 < '|') {
          if ((bVar1 < 0x3c) && ((0x800100000002401U >> ((ulong)bVar1 & 0x3f) & 1) != 0)) {
LAB_1007da796:
            *pbVar4 = 0;
            break;
          }
        }
        else if (bVar1 == 0x7c) goto LAB_1007da796;
        pbVar4 = param_3 + uVar2;
        uVar2 = uVar2 + 1;
      } while (pbVar4 < param_1 + 0x142);
    }
    FUN_1008e3970("","Std",0,"SystemFlag \'%s\' = \'%s\'",param_2,param_3);
  }
  return param_3;
}



undefined8 FUN_100a602a0(byte *param_1,char *param_2,size_t param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  pbVar3 = (byte *)_strchr((char *)param_1,0x3a);
  while( true ) {
    pbVar6 = pbVar3;
    if (pbVar3 == (byte *)0x0) {
      return 0;
    }
    do {
      do {
        pbVar5 = pbVar6;
        pbVar6 = pbVar5 + 1;
        bVar1 = *pbVar6;
      } while (bVar1 == 9);
      pbVar7 = pbVar6;
    } while (bVar1 == 0x20);
    while ((pbVar4 = pbVar3, bVar1 != 0 && (bVar1 != 0x3b))) {
      pbVar4 = pbVar5 + 2;
      bVar1 = pbVar5[2];
      pbVar5 = pbVar7;
      pbVar7 = pbVar4;
    }
    while ((param_1 <= pbVar4 &&
           ((0x3b < (ulong)*pbVar4 || ((0x800000100000200U >> ((ulong)*pbVar4 & 0x3f) & 1) == 0)))))
    {
      pbVar4 = pbVar4 + -1;
    }
    pbVar4 = pbVar4 + 1;
    if (((long)pbVar3 - (long)pbVar4 == param_3) &&
       (iVar2 = _strncasecmp((char *)pbVar4,param_2,param_3), iVar2 == 0)) break;
    pbVar3 = (byte *)_strchr((char *)pbVar7,0x3a);
    param_1 = pbVar7;
  }
  *param_4 = pbVar4;
  param_4[1] = param_3;
  param_4[2] = pbVar6;
  param_4[3] = (long)pbVar7 - (long)pbVar6;
  return 1;
}


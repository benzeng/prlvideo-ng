
byte * FUN_1002d6900(long *param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  if (2 < DAT_1011c568c) {
    FUN_1008e3970("","USB",0,"[%s] GetInterfaceDescriptor, if %u, altset %u",param_1 + 0x107,param_2
                  ,param_3);
  }
  pbVar1 = *(byte **)(*param_1 + 0x18);
  if (pbVar1 != (byte *)0x0) {
    pbVar2 = pbVar1 + *(ushort *)(pbVar1 + 2);
    for (; pbVar1 < pbVar2; pbVar1 = pbVar1 + *pbVar1) {
      if (((pbVar1[1] == 4) && (pbVar1[2] == param_2)) && (pbVar1[3] == param_3)) {
        return pbVar1;
      }
    }
  }
  return (byte *)0x0;
}


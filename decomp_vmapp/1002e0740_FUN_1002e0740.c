
undefined8
FUN_1002e0740(long param_1,char param_2,uint param_3,short param_4,ushort param_5,byte *param_6,
             int *param_7)

{
  undefined8 uVar1;
  
  if (param_3 == 9) {
    uVar1 = 0x20;
    if ((((-1 < param_2) && (param_4 == 0x200)) && (*param_7 == 1)) &&
       (param_5 < *(byte *)(*(long *)(*(long *)(param_1 + 0x28) + 0x10) + 4))) {
      FUN_100091b80(DAT_1011c3698,*param_6 >> 2 & 1 | (*param_6 & 3) * '\x02');
      uVar1 = 0;
    }
    return uVar1;
  }
  uVar1 = FUN_1002df920(param_1,param_2,param_3 & 0xff,param_4,param_5);
  return uVar1;
}


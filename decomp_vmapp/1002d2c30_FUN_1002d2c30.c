
undefined8 FUN_1002d2c30(long param_1,uint param_2,char param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((((((char)param_2 == '\0') || (uVar1 = (ulong)param_2 & 0xff, 0x20 < (uint)uVar1)) ||
       (param_3 == '\0')) || (uVar2 = 1, *(char *)(param_1 + 0x1b18 + uVar1 * 0x510) == '\0')) &&
     (uVar2 = 0, -1 < DAT_1011c568c)) {
    uVar2 = 0;
    FUN_1008e3970("","USB",0,"[XHC][SLOT%d][EP%d] Invalid slot/ep state",(ulong)param_2,param_3);
  }
  return uVar2;
}


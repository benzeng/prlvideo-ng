
undefined * FUN_100821930(uint param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 local_40 [16];
  uint local_30;
  undefined4 local_18 [2];
  undefined1 *local_10;
  
  if (param_1 < 0x398) {
    lVar1 = 0;
    if ((param_1 == 0) || (lVar1 = (long)(int)param_1, *(int *)(&DAT_100bd2850 + lVar1 * 0x28) != 0)
       ) {
      return (&PTR_s_UNDEF_100bd2840)[lVar1 * 5];
    }
    uVar2 = 0x15b;
  }
  else {
    if (DAT_1011c06e8 == 0) {
      return (undefined *)0x0;
    }
    local_18[0] = 3;
    local_10 = local_40;
    local_30 = param_1;
    lVar1 = FUN_100885dc0(DAT_1011c06e8,local_18);
    if (lVar1 != 0) {
      return (undefined *)**(undefined8 **)(lVar1 + 8);
    }
    uVar2 = 0x169;
  }
  FUN_100887ce0(8,0x68,0x65,"obj_dat.c",uVar2);
  return (undefined *)0x0;
}


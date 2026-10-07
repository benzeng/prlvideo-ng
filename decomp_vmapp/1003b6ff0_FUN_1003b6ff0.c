
undefined8 FUN_1003b6ff0(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = 10;
  if (param_2 < 0x60000) {
    uVar1 = 0;
    FUN_10038e8e0(*(undefined8 *)(param_1 + 8),"%s_%d_%d\n",(&PTR_s_ps_100bbdf50)[param_2 >> 0x10],
                  param_2 >> 4 & 0xf,param_2 & 0xf);
  }
  return uVar1;
}


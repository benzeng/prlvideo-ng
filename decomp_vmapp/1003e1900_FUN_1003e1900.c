
undefined8 FUN_1003e1900(ulong param_1,uint param_2,undefined1 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (((param_1 & 2) != 0) && (0x100000 < param_2)) {
    FUN_1008e3970("","DVDImage",0,"DVD data transfer error. Size is too large (%u, 0x%X)",param_2,
                  param_3);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


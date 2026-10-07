
/* WARNING: Removing unreachable block (ram,0x000100838859) */

undefined4 *
FUN_100838880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 *in_RAX;
  undefined1 in_XMM0 [16];
  undefined1 auVar1 [16];
  
  *in_RAX = (int)param_5;
  in_RAX[1] = (int)((ulong)param_5 >> 0x20);
  in_RAX[2] = in_XMM0._0_4_;
  in_RAX[3] = in_XMM0._4_4_;
  auVar1._0_8_ = in_XMM0._8_8_;
  auVar1._8_4_ = (int)param_2;
  auVar1._12_4_ = (int)((ulong)param_2 >> 0x20);
  *(undefined1 (*) [16])(in_RAX + 4) = auVar1;
  return in_RAX + 8;
}


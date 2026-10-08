
void FUN_100143100(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0xfa645a;
  if ((((param_2 != -0x59ba6) && (uVar1 = 0xf6aa44, param_2 != -0x955bc)) &&
      (uVar1 = 0xefdb47, param_2 != -0x1024b9)) &&
     (((uVar1 = 0xb4d747, param_2 != -0x4b28b9 && (uVar1 = 0x5aa3ff, param_2 != -0xa55c01)) &&
      ((uVar1 = 0xc08ed8, param_2 != -0x3f7128 && (uVar1 = 0x808080, param_2 != -0x7f7f80)))))) {
    uVar1 = 0;
    FUN_100df99c0("","prl_client_app",0,
                  "(!)Warning: didn\'t find a predefined color with specified rgb components,returning default color"
                 );
  }
  FUN_100142fa0(param_1,uVar1);
  return;
}


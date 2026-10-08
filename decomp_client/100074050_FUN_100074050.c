
void FUN_100074050(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  
  *param_1 = PTR_shared_null_1021e1288;
  *(undefined4 *)(param_1 + 1) = 0;
  auVar1._8_4_ = (int)PTR_shared_null_1021e15d0;
  auVar1._0_8_ = PTR_shared_null_1021e15d0;
  auVar1._12_4_ = (int)((ulong)PTR_shared_null_1021e15d0 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 2) = auVar1;
  FUN_100075d50("AppResume::ResumeData",0,1);
  return;
}


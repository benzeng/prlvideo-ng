
void FUN_100b8f590(undefined8 *param_1)

{
  char cVar1;
  undefined1 (*pauVar2) [16];
  undefined1 auVar3 [16];
  
  pauVar2 = operator_new(0x10);
  auVar3._8_4_ = (int)PTR_shared_null_1021e12f0;
  auVar3._0_8_ = PTR_shared_null_1021e12f0;
  auVar3._12_4_ = (int)((ulong)PTR_shared_null_1021e12f0 >> 0x20);
  *pauVar2 = auVar3;
  *param_1 = pauVar2;
  cVar1 = FUN_100b8fe00(param_1,&DAT_101cdc24c,0xc5ed4,pauVar2);
  if (cVar1 == '\0') {
    FUN_100df99c0("","License",0,"initialization error.");
  }
  return;
}


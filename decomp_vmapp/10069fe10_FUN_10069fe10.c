
void FUN_10069fe10(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_100684d00(param_1 + 0x305f);
  FUN_100697c10(param_1,&PTR_PTR_100bccb18);
  *param_1 = &PTR_FUN_100bcc608;
  param_1[0x305f] = &PTR_FUN_100bcc958;
  ___bzero(param_1 + 0x301f,0x200);
  puVar1 = operator_new(0x40,(nothrow_t *)PTR_nothrow_100ba21c8);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[4] = 0;
    FUN_1008e3970("","dimg",0,"No memory for STRUCTURED_INFO at VMDKSparseImage construction");
  }
  else {
    puVar1[1] = 0x100000004;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[7] = param_1;
    *puVar1 = &PTR_FUN_100bccb40;
    param_1[4] = puVar1;
  }
  return;
}


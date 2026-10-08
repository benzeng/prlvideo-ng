
void FUN_100b28480(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_100b0d370(param_1 + 0x305f);
  FUN_100b20280(param_1,&PTR_PTR_10223e878);
  *param_1 = &PTR_FUN_10223e368;
  param_1[0x305f] = &PTR_FUN_10223e6b8;
  ___bzero(param_1 + 0x301f,0x200);
  puVar1 = operator_new(0x40,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[4] = 0;
    FUN_100df99c0("","dimg",0,"No memory for STRUCTURED_INFO at VMDKSparseImage construction");
  }
  else {
    puVar1[1] = 0x100000004;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[7] = param_1;
    *puVar1 = &PTR_FUN_10223e8a0;
    param_1[4] = puVar1;
  }
  return;
}


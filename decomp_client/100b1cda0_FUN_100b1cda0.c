
void FUN_100b1cda0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_100b0d370(param_1 + 0x3124);
  FUN_100b20280(param_1,&PTR_PTR_10223cfd8);
  FUN_100b1c570(param_1 + 0x301f,&PTR_PTR_10223cfe8);
  *param_1 = &PTR_FUN_10223ca58;
  param_1[0x3124] = &PTR_FUN_10223ce18;
  param_1[0x301f] = &PTR_FUN_10223cc30;
  param_1[0x3120] = 0;
  param_1[0x3122] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x3123) = 0;
  *(undefined4 *)(param_1 + 0x3121) = 0;
  puVar1 = operator_new(0x40,(nothrow_t *)PTR_nothrow_1021e1620);
  if (puVar1 == (undefined8 *)0x0) {
    param_1[4] = 0;
    FUN_100df99c0("","dimg",0,"No memory for STRUCTURED_INFO at VHDDynamic construction");
  }
  else {
    puVar1[1] = 0x100000004;
    *(undefined4 *)(puVar1 + 2) = 0;
    *(undefined4 *)(puVar1 + 6) = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[3] = 0;
    puVar1[7] = param_1;
    *puVar1 = &PTR_FUN_10223d018;
    param_1[4] = puVar1;
  }
  return;
}


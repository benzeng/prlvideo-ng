
void FUN_1002889a0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = param_1;
  iVar1 = FUN_1007d74c0(DAT_1011c3ca0 + 0x1020,&local_c,4);
  if (iVar1 != 4) {
    FUN_1008e3970("","LocalDevices",0,"LSI: beware reply fifo: 0x%08X",local_c);
  }
  return;
}


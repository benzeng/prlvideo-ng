
undefined * FUN_100752220(long param_1)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 == 1) {
    puVar2 = &DAT_10119ea80;
  }
  else if (iVar1 == 5) {
    puVar2 = &DAT_1011a02e0;
  }
  else if (iVar1 == 4) {
    puVar2 = &DAT_10119f6e0;
  }
  else {
    if (iVar1 - 1U < 5) {
      pcVar3 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar1 - 1U)];
    }
    else {
      pcVar3 = "invalid";
    }
    puVar2 = (undefined *)0x0;
    FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_stream(%s)",pcVar3);
  }
  return puVar2;
}


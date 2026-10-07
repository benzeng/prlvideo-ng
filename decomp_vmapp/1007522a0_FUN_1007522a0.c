
undefined8 FUN_1007522a0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  uVar2 = 0xc5b;
  if (iVar1 != 1) {
    if (iVar1 == 5) {
      uVar2 = 0x101a;
    }
    else if (iVar1 == 4) {
      uVar2 = 0xbf1;
    }
    else {
      if (iVar1 - 1U < 5) {
        pcVar3 = (&PTR_s_lzrw1_100bcec20)[(int)(iVar1 - 1U)];
      }
      else {
        pcVar3 = "invalid";
      }
      uVar2 = 0;
      FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_1mz_comp_siz(%s)",pcVar3);
    }
  }
  return uVar2;
}


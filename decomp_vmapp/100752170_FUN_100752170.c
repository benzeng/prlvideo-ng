
uint FUN_100752170(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 == 5) {
    iVar1 = FUN_1007458c0(param_2);
    uVar2 = param_2 + 0xfff + iVar1 & 0xfffff000;
  }
  else if (param_1 == 4) {
    uVar2 = param_2 + 0x1000 + (param_2 >> 7) & 0xfffff000;
  }
  else if (param_1 == 1) {
    uVar2 = param_2 + 0x1001 + (param_2 + 0x1f >> 5) * 4 & 0xfffff000;
  }
  else {
    if (param_1 - 1U < 5) {
      pcVar3 = (&PTR_s_lzrw1_100bcec20)[(int)(param_1 - 1U)];
    }
    else {
      pcVar3 = "invalid";
    }
    uVar2 = 0;
    FUN_1008e3970("","Compression",0,"CCompressionEngineLZRW::get_buff_size(%s,%u)",pcVar3,param_2);
  }
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x00010008de16) */

void FUN_10008dd00(ulong *param_1,ulong param_2,void *param_3,uint param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10008c320(param_1,param_2,(ulong)param_4,1,0);
  _memcpy(pvVar1,param_3,(ulong)param_4);
  if (*param_1 <= param_2) {
    FUN_1008e3970("","vm",0,"[GuestMem] OutOfBound %llx > %llx",param_2);
    return;
  }
  if (param_1[0xc] != 0) {
    FUN_10008c230(param_1,param_2,param_4,0);
  }
  return;
}


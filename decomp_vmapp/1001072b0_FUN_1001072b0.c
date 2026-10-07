
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1001072b0(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = _memcmp(&DAT_100b2e3e8,&DAT_1011b768c,0x10);
  if (iVar1 == 0) {
    DAT_1011b7698 = 0;
    if (-1 < *(int *)((long)param_1 + 0xc)) {
      DAT_1011b7698 = *(int *)((long)param_1 + 0xc);
    }
    _DAT_1011b768c = *param_1;
    DAT_1011b7694 = *(undefined4 *)(param_1 + 1);
  }
  return;
}


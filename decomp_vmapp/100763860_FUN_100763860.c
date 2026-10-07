
void FUN_100763860(FILE *param_1,ulong *param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  byte bVar3;
  ulong uVar4;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (param_4 == 0) {
    param_4 = param_3;
  }
  _fprintf(param_1,"%llu.%06llu %7lld  ",param_3 / 1000000,param_3 % 1000000,param_3 - param_4);
  uVar2 = *param_2;
  uVar4 = uVar2 >> 0x30 & 0xff;
  bVar3 = (byte)(uVar2 >> 0x38);
  if (bVar3 < 0xff) {
    if (bVar3 < 0x40) {
                    /* WARNING: Could not recover jumptable at 0x000100763904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_100765ef4 + *(int *)(&DAT_100765ef4 + (uVar2 >> 0x38) * 4)))();
      return;
    }
  }
  else if (bVar3 == 0xff) {
    if (param_2[1] == 0xff) {
      if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
        _fprintf(param_1,"%d: WARNING: eTrace buffer overflow detected!\n\n",uVar4);
        return;
      }
    }
    else if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
      _fprintf(param_1,"unknown special event: data %llx\n");
      return;
    }
    goto LAB_100765eee;
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 == lVar1) {
    _fprintf(param_1,"unknown type %llx, src %llx, data %llx\n",uVar2 >> 0x38,uVar4,param_2[1]);
    return;
  }
LAB_100765eee:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


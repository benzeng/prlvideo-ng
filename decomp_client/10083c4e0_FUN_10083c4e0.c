
void FUN_10083c4e0(long *param_1,int param_2,undefined4 param_3,long param_4)

{
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x00010083c505. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x1d0))();
      return;
    case 1:
      FUN_100529010();
      return;
    case 2:
      FUN_100529070(param_1,**(undefined4 **)(param_4 + 8));
      return;
    case 3:
      FUN_100528de0();
      return;
    }
  }
  return;
}


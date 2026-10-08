
void FUN_100811f30(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  long local_20;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
                    /* WARNING: Could not recover jumptable at 0x000100811f72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x80))(param_1);
      return;
    case 1:
      FUN_100226470(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 2:
      FUN_100226320(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1002263b0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_100226300(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      FUN_100226450(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 6:
      local_20 = *(long *)param_4[1];
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_100225ea0(param_1,&local_20);
      if (local_20 != 0) {
        _PrlHandle_Free();
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = uVar1;
      }
    }
  }
  return;
}



void FUN_100823af0(long *param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long local_20;
  
  if (param_2 != 0) {
    return;
  }
  switch(param_3) {
  case 0:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar2 = *(undefined4 *)param_4[1];
    goto LAB_100823b3f;
  case 1:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x78);
    uVar2 = 0x80000275;
LAB_100823b3f:
                    /* WARNING: Could not recover jumptable at 0x000100823b4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar2);
    return;
  case 2:
    FUN_1002c7570(param_1,*(undefined4 *)param_4[1]);
    return;
  case 3:
    FUN_1002c78f0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
    return;
  case 4:
    uVar2 = FUN_1002c6ae0(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar2;
    }
    break;
  case 5:
    uVar2 = FUN_1002c7800(param_1);
    if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
      *(undefined4 *)*param_4 = uVar2;
    }
    break;
  case 6:
    local_20 = *(long *)param_4[1];
    if (local_20 != 0) {
      _PrlHandle_AddRef();
    }
    uVar1 = FUN_1002c6fb0(param_1,&local_20);
    if (local_20 != 0) {
      _PrlHandle_Free();
    }
    if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
      *(undefined1 *)*param_4 = uVar1;
    }
  }
  return;
}


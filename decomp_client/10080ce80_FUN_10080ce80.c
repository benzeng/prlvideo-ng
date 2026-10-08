
void FUN_10080ce80(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long local_20;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1001f7580(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 1:
      FUN_1001f75a0(param_1);
      return;
    case 2:
      FUN_1001f7930(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      uVar2 = FUN_1001f7340(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 4:
      local_20 = *(long *)param_4[1];
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_1001f7760(param_1,&local_20);
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


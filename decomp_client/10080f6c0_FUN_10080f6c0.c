
void FUN_10080f6c0(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  long local_20;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10020e800(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      FUN_10020f210(param_1);
      return;
    case 2:
      FUN_10020f230(param_1);
      return;
    case 3:
      FUN_10020f970(param_1);
      return;
    case 4:
      FUN_10020f9a0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 5:
      uVar2 = FUN_10020e360(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 6:
      uVar2 = FUN_10020e430(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 7:
      uVar2 = FUN_10020e630(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 8:
      uVar2 = FUN_10020ed30(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 9:
      uVar2 = FUN_10020f3c0(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 10:
      uVar2 = FUN_10020fb50(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xb:
      uVar2 = FUN_10020ff20(param_1);
      if ((undefined4 *)*param_4 != (undefined4 *)0x0) {
        *(undefined4 *)*param_4 = uVar2;
      }
      break;
    case 0xc:
      local_20 = *(long *)param_4[1];
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_10020f9c0(param_1,&local_20);
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



void FUN_100856740(undefined8 param_1,int param_2,undefined4 param_3,long *param_4)

{
  undefined1 uVar1;
  long local_20;
  
  if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10072f470(param_1);
      return;
    case 1:
      FUN_10072f900(param_1,*(undefined4 *)param_4[1]);
      return;
    case 2:
      FUN_10072ff10(param_1,*(undefined4 *)param_4[1]);
      return;
    case 3:
      FUN_1007317e0(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1007301c0(param_1,param_4[1]);
      return;
    case 5:
      FUN_10072fa60(param_1);
      return;
    case 6:
      FUN_100731810(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 7:
      local_20 = *(long *)param_4[1];
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      uVar1 = FUN_10072f580(param_1,&local_20);
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


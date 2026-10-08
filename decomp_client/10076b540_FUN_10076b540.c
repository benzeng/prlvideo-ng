
void FUN_10076b540(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 local_20;
  
  if (param_2 == 0xc) {
    if (param_3 == 3) {
      if (*(int *)param_4[1] == 0) {
        *(undefined4 *)*param_4 = 2;
      }
      else {
        *(undefined4 *)*param_4 = 0xffffffff;
      }
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_10076aa80(param_1,param_4[1]);
      return;
    case 1:
      if (((*(long *)(param_1 + 0x20) != 0) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0)) &&
         (*(long **)(param_1 + 0x28) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00010076b5db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
        return;
      }
      break;
    case 2:
      lVar1 = *(long *)param_4[1];
      if (lVar1 != 0) {
        _PrlHandle_AddRef(lVar1);
      }
      FUN_10076ac50();
      if (lVar1 != 0) {
        _PrlHandle_Free(lVar1);
      }
      if ((undefined1 *)*param_4 != (undefined1 *)0x0) {
        *(undefined1 *)*param_4 = 1;
      }
      break;
    case 3:
      if (*(int *)param_4[1] == 0x3c6c) {
        FUN_10076a910(param_1);
        return;
      }
      break;
    case 4:
      local_20 = *(undefined8 *)param_4[1];
      FUN_1005fa4b0(param_1 + 0x18,&local_20);
      if ((((*(int *)(*(long *)(param_1 + 0x18) + 0xc) == *(int *)(*(long *)(param_1 + 0x18) + 8))
           && (*(long *)(param_1 + 0x20) != 0)) && (*(int *)(*(long *)(param_1 + 0x20) + 4) != 0))
         && (*(long **)(param_1 + 0x28) != (long *)0x0)) {
        (**(code **)(**(long **)(param_1 + 0x28) + 0x20))();
      }
    }
  }
  return;
}


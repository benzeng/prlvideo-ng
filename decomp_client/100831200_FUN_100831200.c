
void FUN_100831200(undefined8 param_1,int param_2,int param_3,long param_4)

{
  long local_20;
  
  if (param_2 == 0) {
    if (param_3 == 1) {
      FUN_100353140(param_1,**(undefined4 **)(param_4 + 8),**(undefined4 **)(param_4 + 0x10));
      return;
    }
    if (param_3 == 0) {
      local_20 = **(long **)(param_4 + 8);
      if (local_20 != 0) {
        _PrlHandle_AddRef();
      }
      FUN_100353170(param_1,&local_20,**(undefined4 **)(param_4 + 0x10));
      if (local_20 != 0) {
        _PrlHandle_Free();
      }
    }
  }
  return;
}


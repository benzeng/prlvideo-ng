
void * FUN_10081e040(void *param_1,int param_2,int param_3,undefined8 param_4,undefined4 param_5)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if (param_1 == (void *)0x0) {
    if (0 < param_3) {
      if (DAT_1011c0650 == '\0') {
        DAT_1011c0650 = '\x01';
      }
      if (DAT_1011c0658 != (code *)0x0) {
        if (DAT_1011c0651 == '\0') {
          DAT_1011c0651 = '\x01';
        }
        (*DAT_1011c0658)(0,param_3,param_4,param_5,0);
      }
      pvVar1 = (void *)(*(code *)PTR_FUN_1011ab588)((long)param_3,param_4,param_5);
      if (DAT_1011c0658 != (code *)0x0) {
        (*DAT_1011c0658)(pvVar1,param_3,param_4,param_5,1);
      }
    }
  }
  else {
    pvVar1 = (void *)0x0;
    if ((0 < param_3) && (param_2 <= param_3)) {
      if (DAT_1011c0660 != (code *)0x0) {
        (*DAT_1011c0660)(param_1,0,param_3,param_4,param_5,0);
      }
      pvVar1 = (void *)(*(code *)PTR_FUN_1011ab588)((long)param_3,param_4,param_5);
      if (pvVar1 != (void *)0x0) {
        _memcpy(pvVar1,param_1,(long)param_2);
        _OPENSSL_cleanse(param_1,(long)param_2);
        (*(code *)PTR__free_1011ab5a0)(param_1);
      }
      if (DAT_1011c0660 != (code *)0x0) {
        (*DAT_1011c0660)(param_1,pvVar1,param_3,param_4,param_5,1);
      }
    }
  }
  return pvVar1;
}


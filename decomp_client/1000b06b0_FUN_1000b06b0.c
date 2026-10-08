
void FUN_1000b06b0(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  char cVar1;
  QArrayData *local_38;
  undefined1 local_29;
  
  if (*(long *)(param_1 + 0x80) != 0) {
    local_38 = (QArrayData *)PTR_shared_null_1021e1288;
    cVar1 = FUN_10003e890(*(long *)(param_1 + 0x80),param_2,&local_38);
    if (cVar1 == '\0') {
      if (2 < DAT_10230ffd0) {
        FUN_100df99c0("SGAC","prl_client_app",3,"Cannot find handle by psn");
      }
    }
    else {
      FUN_10003dec0(*(undefined8 *)(param_1 + 0x80),&local_38,param_3,param_4,param_5);
    }
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
  return;
}


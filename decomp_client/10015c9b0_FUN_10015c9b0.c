
long FUN_10015c9b0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_60;
  int *local_58;
  long *local_50;
  long *local_48;
  undefined4 local_40;
  undefined1 local_31;
  
  if (*param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: the given VM handle is invalid.");
    lVar3 = 0;
  }
  else {
    FUN_100179800(&local_58,param_1 + 200);
    local_50 = (long *)(local_58 + (long)local_58[2] * 2 + 4);
    local_48 = (long *)(local_58 + (long)local_58[3] * 2 + 4);
    local_40 = 1;
    lVar3 = 0;
    if (local_58[2] != local_58[3]) {
      do {
        local_40 = 1;
        lVar3 = *(long *)*local_50;
        if (((lVar3 != 0) && (*(int *)(lVar3 + 4) != 0)) &&
           (lVar3 = ((long *)*local_50)[1], lVar3 != 0)) {
          FUN_10018c250(&local_60,lVar3);
          lVar2 = local_60;
          lVar1 = *param_2;
          if (local_60 != 0) {
            _PrlHandle_Free(local_60);
          }
          if (lVar2 == lVar1) break;
        }
        local_50 = local_50 + 1;
        local_40 = 1;
        lVar3 = 0;
      } while (local_50 != local_48);
    }
    if (*local_58 != -1) {
      if (*local_58 != 0) {
        LOCK();
        *local_58 = *local_58 + -1;
        UNLOCK();
        if (*local_58 != 0) {
          return lVar3;
        }
        local_31 = 0;
      }
      FUN_100179430(&local_58,local_58);
    }
  }
  return lVar3;
}


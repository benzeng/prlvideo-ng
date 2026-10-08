
void FUN_1002d9ed0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_38;
  long local_30;
  long local_28;
  undefined1 local_19;
  
  uVar1 = FUN_100152280();
  lVar2 = FUN_1001548f0(uVar1,param_1 + 0x28);
  if (lVar2 == 0) {
    return;
  }
  FUN_10018c250(&local_30,lVar2);
  local_28 = local_30;
  QUrl::toString(&local_38,param_2,0);
  FUN_100a3c310(&local_28,&local_38,0);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_19 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_19) goto LAB_1002d9f58;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_1002d9f58:
  if (local_30 != 0) {
    _PrlHandle_Free();
  }
  return;
}


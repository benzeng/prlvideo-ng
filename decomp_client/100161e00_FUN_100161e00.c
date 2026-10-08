
undefined8 FUN_100161e00(long param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  QArrayData *local_30;
  long local_28;
  undefined1 local_19;
  
  local_28 = 0;
  iVar1 = _PrlEvent_CreateAnswerEvent(*param_2,&local_28);
  if (iVar1 < 0) {
    uVar2 = 0;
    FUN_100df99c0("","prl_client_app",0,"(!)Error: PrlEvent_CreateAnswerEvent with RC = %.8X",iVar1)
    ;
  }
  else {
    uVar2 = _PrlSrv_SendAnswer(*(undefined8 *)(param_1 + 0x80),local_28);
    local_30 = (QArrayData *)PTR_shared_null_1021e1288;
    uVar2 = FUN_10015c580(param_1,uVar2,0x3fd,&local_30);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        local_19 = *(int *)local_30 != 0;
        UNLOCK();
        if ((bool)local_19) goto LAB_100161eb0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
LAB_100161eb0:
  if (local_28 != 0) {
    _PrlHandle_Free();
  }
  return uVar2;
}


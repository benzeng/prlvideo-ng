
undefined8 FUN_1005de7d0(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_23;
  
  CPrlFileDevSelectorWidget::getCurrentSystemName();
  lVar2 = FUN_1005ec9b0(*(long *)(param_2 + 0x10) + 0x48);
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is null.");
  }
  else {
    uVar3 = FUN_1005ec9b0(*(long *)(param_2 + 0x10) + 0x48);
    FUN_100109c10(&local_30,uVar3);
    uVar3 = FUN_1005ec9b0(*(long *)(param_2 + 0x10) + 0x48);
    uVar1 = FUN_10015aae0(uVar3);
    FUN_10010f410(param_1,&local_30,uVar1,1);
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) {
          return param_1;
        }
        local_23 = 0;
      }
      QArrayData::deallocate(local_30,2,8);
    }
  }
  return param_1;
}


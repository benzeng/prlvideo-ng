
void FUN_10017d3d0(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  QArrayData *local_30;
  undefined1 local_22;
  
  if (param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: server object is null");
    return;
  }
  FUN_10015aab0(&local_30,param_2);
  uVar1 = FUN_10015a6e0(param_2);
  puVar2 = (undefined4 *)FUN_10017ee00(param_1 + 0x10,&local_30);
  *puVar2 = uVar1;
  uVar3 = FUN_10017ee00(param_1 + 0x10,&local_30);
  FUN_100802460(param_1,&local_30,uVar3);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}


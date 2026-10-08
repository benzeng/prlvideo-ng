
void FUN_10017d910(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (param_2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is null");
    return;
  }
  FUN_100188480(&local_38,param_2);
  uVar2 = FUN_10018a9d0(param_2);
  lVar1 = param_1 + 0x18;
  puVar3 = (undefined4 *)FUN_10017efd0(lVar1,&local_38);
  *puVar3 = uVar2;
  uVar2 = FUN_10018bce0(param_2);
  lVar4 = FUN_10017efd0(lVar1,&local_38);
  *(undefined4 *)(lVar4 + 4) = uVar2;
  uVar5 = FUN_10017efd0(lVar1,&local_38);
  FUN_1008024b0(param_1,&local_38,uVar5);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      UNLOCK();
      if (*(int *)local_38 != 0) {
        return;
      }
      local_2a = 0;
    }
    QArrayData::deallocate(local_38,2,8);
  }
  return;
}


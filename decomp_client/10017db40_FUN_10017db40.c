
void FUN_10017db40(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  QArrayData *local_38;
  undefined1 local_2a;
  
  uVar1 = FUN_100152280();
  FUN_100188480(&local_38,param_2);
  lVar2 = FUN_1001548f0(uVar1,&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10017dbaa;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10017dbaa:
  if (lVar2 == 0) {
    FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is null");
  }
  else {
    FUN_10017d650(param_1,lVar2);
    FUN_10017d910(param_1,lVar2);
    FUN_100802560(param_1,*(undefined4 *)(*(long *)(param_1 + 0x18) + 0x14));
  }
  return;
}


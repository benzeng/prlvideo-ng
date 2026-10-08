
void FUN_10035f9e0(long param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  QArrayData *local_38;
  undefined1 local_2a;
  
  if (3 < DAT_10230ffd0) {
    FUN_100df99c0("[CURSOR_CTL]","prl_client_app",4,"Received cursor move: %d, %d",
                  *(undefined4 *)param_2,*(undefined4 *)((long)param_2 + 4));
  }
  cVar1 = FUN_10035ddf0(*(undefined8 *)(param_1 + 0x18),0);
  if (cVar1 == '\0') {
    return;
  }
  uVar3 = FUN_10035da40(*(undefined8 *)(param_1 + 0x18));
  lVar4 = FUN_100356ef0(param_2,uVar3);
  if (lVar4 == 0) {
    return;
  }
  FUN_10035da60(&local_38,*(undefined8 *)(param_1 + 0x18));
  uVar2 = FUN_100323e20(lVar4);
  lVar4 = FUN_100360680(&local_38,uVar2);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_2a = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10035fab2;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_10035fab2:
  if (((lVar4 != 0) && (*(char *)(param_1 + 0x38) == '\0')) && (*(int *)(param_1 + 0x48) == 2)) {
    FUN_10035f480(param_1,lVar4,param_2,1);
    *(undefined8 *)(param_1 + 0x28) = *param_2;
  }
  return;
}


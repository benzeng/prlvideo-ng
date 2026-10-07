
void FUN_1004838c0(long param_1,void *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  char cVar6;
  long *local_58;
  QArrayData *local_50;
  long *local_48;
  void *local_40;
  undefined1 local_31;
  
  local_40 = param_2;
  lVar4 = FUN_1002a6010(param_3);
  if (lVar4 == 0) {
    return;
  }
  iVar2 = *(int *)(lVar4 + 8);
  uVar5 = 0;
  if (iVar2 == -0x7ffffc6a) {
    uVar5 = 0x80000396;
  }
  FUN_100119090(&local_48,param_2,uVar5);
  if (local_48 == (long *)0x0) {
LAB_10048393d:
    lVar4 = 0;
    FUN_1008e3970("TCHOST","ToolsCenterHost",0,"ASSERT( %s ) occured in %s:%d [%s]","pResponseCmd",
                  "../ToolsCenterHost.cpp",0x6cf,"LoginInGuestReply");
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    lVar4 = local_48[2];
    LOCK();
    plVar1 = local_48 + 1;
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
    if (lVar4 == 0) goto LAB_10048393d;
  }
  FUN_100128660(lVar4);
  uVar5 = DAT_1011c3650;
  FUN_10011cf50(&local_58);
  cVar6 = '\0';
  if (local_58 != (long *)0x0) {
    cVar6 = (char)local_58[2];
  }
  CBaseNode::toString(SUB81(&local_50,0),(bool)(cVar6 + '\b'));
  FUN_100063e20(uVar5,&local_50,0x1389,param_2,0);
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100483a17;
    }
    QArrayData::deallocate(local_50,2,8);
  }
LAB_100483a17:
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_58 + 0x10))();
    }
  }
  if (iVar2 == -0x7ffffc6a) {
    FUN_100495fe0(param_1 + 0x50,&local_40);
    if (param_2 != (void *)0x0) {
      FUN_10047e550(param_2);
      operator_delete(param_2);
    }
  }
  else {
    *(undefined4 *)((long)param_2 + 0xc) = 1;
  }
  if (local_48 != (long *)0x0) {
    LOCK();
    plVar1 = local_48 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)(*local_48 + 0x10))();
    }
  }
  return;
}


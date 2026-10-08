
void FUN_100805900(long *param_1,int param_2,int param_3,long *param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  int *local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    if (param_3 == 1) {
      pcVar2 = *(code **)(*param_1 + 0xd0);
      uVar1 = *(undefined4 *)param_4[1];
      local_38 = *(int **)param_4[2];
      uStack_30 = ((undefined8 *)param_4[2])[1];
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + 1;
        local_19 = *local_38 != 0;
        UNLOCK();
      }
      uVar3 = (*pcVar2)(param_1,uVar1,&local_38);
      if (local_38 != (int *)0x0) {
        LOCK();
        *local_38 = *local_38 + -1;
        local_19 = *local_38 != 0;
        UNLOCK();
        if ((!(bool)local_19) && (local_38 != (int *)0x0)) {
          operator_delete(local_38);
        }
      }
      if ((undefined1 *)*param_4 == (undefined1 *)0x0) {
        return;
      }
      *(undefined1 *)*param_4 = uVar3;
      return;
    }
    if (param_3 != 0) {
      return;
    }
    FUN_10019c6f0(param_1,*(undefined4 *)param_4[1],*(undefined8 *)param_4[2]);
    return;
  }
  if (param_3 == 1) {
    if (*(int *)param_4[1] == 0) {
      iVar4 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar4 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar4;
      }
    }
    else {
      if (*(int *)param_4[1] != 1) goto LAB_1008059e5;
      iVar4 = FUN_100805b10();
    }
    *(int *)*param_4 = iVar4;
  }
  else {
LAB_1008059e5:
    *(undefined4 *)*param_4 = 0xffffffff;
  }
  return;
}



void FUN_1007f78b0(long *param_1,int param_2,int param_3,undefined8 *param_4)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  undefined1 local_38 [8];
  long *local_30;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      goto switchD_1007f793f_caseD_0;
    case 1:
      FUN_1000bc780(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 2:
      FUN_1000bc470(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],param_4[3]);
      return;
    case 3:
      FUN_1000bd1b0(param_1,param_4[1]);
      return;
    case 4:
      FUN_1000bd300(param_1);
      return;
    case 5:
      FUN_1000bbd80(param_1);
      return;
    case 6:
      FUN_1000b9560(param_1);
      return;
    case 7:
                    /* WARNING: Could not recover jumptable at 0x0001007f7a9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x60))
                (param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                 *(undefined4 *)param_4[3]);
      return;
    case 8:
      uVar2 = *(undefined4 *)param_4[1];
      FUN_100095510(local_38,param_4[2]);
      FUN_1000b9d30(param_1,uVar2,local_38,param_4[3]);
      FUN_1000f1a40(local_38);
      return;
    default:
      return;
    }
  }
  if (param_3 == 0) {
    if (*(int *)param_4[1] != 0) goto LAB_1007f7996;
    iVar4 = DAT_10226ca68;
    if (DAT_10226ca68 == 0) {
      iVar4 = FUN_10009c520("SmartCharPtr_t",0xffffffffffffffff,1);
      DAT_10226ca68 = iVar4;
    }
  }
  else {
    if (((param_3 != 1) && (param_3 != 2)) || (*(int *)param_4[1] != 1)) {
LAB_1007f7996:
      *(undefined4 *)*param_4 = 0xffffffff;
      return;
    }
    iVar4 = DAT_10226db58;
    if (DAT_10226db58 == 0) {
      iVar4 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      DAT_10226db58 = iVar4;
    }
  }
  *(int *)*param_4 = iVar4;
  return;
switchD_1007f793f_caseD_0:
  local_30 = *(long **)param_4[1];
  if (local_30 != (long *)0x0) {
    LOCK();
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
    UNLOCK();
  }
  FUN_1000bcfb0(param_1,&local_30,*(undefined4 *)param_4[2]);
  if (local_30 == (long *)0x0) {
    return;
  }
  LOCK();
  plVar1 = local_30 + 1;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 != 1) {
    return;
  }
  (**(code **)(*local_30 + 0x10))();
  return;
}



void FUN_1001bf9b0(long param_1,int param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  long local_28;
  
  if (param_2 != 0xc) {
    if (param_2 != 0) {
      return;
    }
    switch(param_3) {
    case 0:
      goto switchD_1001bfa3f_caseD_0;
    case 1:
      FUN_1001be7a0(param_1);
      return;
    case 2:
      FUN_1001be880(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      if (*(int *)param_4[2] == 0) {
        return;
      }
    case 3:
      FUN_1001be970(param_1,*(undefined4 *)param_4[1]);
      return;
    default:
      return;
    }
  }
  switch(param_3) {
  case 0:
    if (*(int *)param_4[1] == 1) {
      iVar2 = DAT_102271168;
      if (DAT_102271168 == 0) {
        iVar2 = FUN_1001bff40("QNetworkProxy",0xffffffffffffffff,1);
        DAT_102271168 = iVar2;
      }
LAB_1001bfb3f:
      *(int *)*param_4 = iVar2;
      return;
    }
    break;
  case 2:
    puVar4 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar4 = 0xffffffff;
      return;
    }
    goto LAB_1001bfabc;
  case 3:
    puVar4 = (undefined4 *)*param_4;
    if (*(int *)param_4[1] != 0) {
      *puVar4 = 0xffffffff;
      return;
    }
LAB_1001bfabc:
    *puVar4 = 2;
    return;
  case 4:
    if (*(int *)param_4[1] == 0) {
      puVar4 = (undefined4 *)*param_4;
      goto LAB_1001bfabc;
    }
    if (*(int *)param_4[1] == 1) {
      iVar2 = DAT_10226db58;
      if (DAT_10226db58 == 0) {
        iVar2 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
        DAT_10226db58 = iVar2;
      }
      goto LAB_1001bfb3f;
    }
  }
  *(undefined4 *)*param_4 = 0xffffffff;
  return;
switchD_1001bfa3f_caseD_0:
  uVar1 = param_4[2];
  local_28 = 0;
  if (*(int *)(*(long *)(param_1 + 0x18) + 0x14) != 0) {
    plVar3 = (long *)FUN_1001bfdb0((long *)(param_1 + 0x18),uVar1,0);
    if (*plVar3 == *(long *)(param_1 + 0x18)) {
      plVar3 = &local_28;
    }
    else {
      plVar3 = (long *)(*plVar3 + 0x18);
    }
    lVar5 = *plVar3;
    if (lVar5 != 0) goto LAB_1001bfb74;
  }
  lVar5 = FUN_1001be580(param_1,uVar1);
LAB_1001bfb74:
  *(undefined2 *)(lVar5 + 0x28) = 0x101;
  *(undefined1 *)(lVar5 + 0x2a) = 0;
  FUN_1001bd750();
  return;
}



undefined8 FUN_1002cc2c0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x30) != 0) && (*(int *)(*(long *)(param_1 + 0x30) + 4) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x38), lVar2 != 0)) {
    iVar1 = CAbstractTask::getCurrentSubTask();
    if ((iVar1 == 1) || (iVar1 = CAbstractTask::getCurrentSubTask(), iVar1 == 0)) {
      param_1 = param_1 + 0x28;
    }
    else {
      param_1 = param_1 + 0x20;
    }
    lVar2 = FUN_10015cb20(lVar2,param_1);
    uVar3 = 0x80000009;
    if (lVar2 != 0) {
      iVar1 = FUN_10018a9d0(lVar2);
      if ((iVar1 != 0x30000004) && (iVar1 = FUN_10018a9d0(lVar2), iVar1 != 0x30000005)) {
        return 0x80000009;
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: Server instance is invalid.");
  return 0x80000009;
}


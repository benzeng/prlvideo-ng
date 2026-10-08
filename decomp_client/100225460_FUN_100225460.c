
undefined8 FUN_100225460(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  uVar3 = 0x80000001;
  switch(uVar1) {
  case 0:
    FUN_100225580(param_1);
    uVar3 = 0;
    break;
  case 1:
    FUN_100225650(param_1);
    uVar3 = 0;
    break;
  case 2:
    uVar3 = FUN_100225a10(param_1);
    return uVar3;
  case 3:
    FUN_100225be0(param_1);
    uVar3 = 0;
    break;
  case 4:
    FUN_100225b30(param_1);
    uVar3 = 0;
    break;
  case 5:
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      FUN_10031ae90(param_1[4],0);
      return 0;
    }
    goto LAB_10022552d;
  case 6:
    if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
      lVar2 = FUN_10031b110();
      if (lVar2 == 0) {
        return 0;
      }
      (**(code **)(*param_1 + 0x98))(param_1,0);
      return 0;
    }
LAB_10022552d:
    FUN_100df99c0("","prl_client_app",0,"(!)Error: can\'t access vm desktop instance");
    uVar3 = 0x80000009;
  }
  return uVar3;
}


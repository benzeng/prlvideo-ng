
undefined8 FUN_10028c970(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = CAbstractTask::getCurrentSubTask();
  switch(uVar1) {
  case 0:
    FUN_10028ca40(param_1);
    uVar2 = 0;
    break;
  default:
    FUN_100df99c0("[LICENSE]","prl_client_app",0,"(!)Error: Unknown sub task.");
    uVar2 = 0x80000009;
    break;
  case 2:
    uVar2 = 2;
    goto LAB_10028c9e5;
  case 5:
    uVar2 = FUN_10028cbf0(param_1);
    return uVar2;
  case 7:
    uVar2 = 7;
LAB_10028c9e5:
    uVar2 = FUN_10028cd80(param_1,uVar2);
    return uVar2;
  case 8:
    uVar2 = FUN_10028d060(param_1);
    return uVar2;
  case 9:
    uVar2 = FUN_10028d1d0(param_1);
    return uVar2;
  }
  return uVar2;
}


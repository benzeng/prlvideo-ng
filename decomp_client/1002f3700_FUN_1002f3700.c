
void FUN_1002f3700(QObject *param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  long *plVar5;
  
  if (param_2 == 0xc) {
    if (param_3 == 0) {
      puVar3 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar3 = 0xffffffff;
        return;
      }
    }
    else if (param_3 == 3) {
      puVar3 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar3 = 0xffffffff;
        return;
      }
    }
    else {
      if (param_3 != 5) {
        *(undefined4 *)*param_4 = 0xffffffff;
        return;
      }
      puVar3 = (undefined4 *)*param_4;
      if (*(int *)param_4[1] != 0) {
        *puVar3 = 0xffffffff;
        return;
      }
    }
    *puVar3 = 2;
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      FUN_1002ef420(param_1,*(undefined4 *)param_4[1]);
      return;
    case 1:
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)param_4[1];
      FUN_100828da0(*(undefined8 *)(param_1 + 0x10));
      return;
    case 2:
      FUN_1002efef0(param_1,param_4[1],*(undefined4 *)param_4[2],*(undefined4 *)param_4[3]);
      return;
    case 3:
      FUN_1002f0490(param_1,*(undefined4 *)param_4[1]);
      return;
    case 4:
      FUN_1002f0bd0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
      return;
    case 5:
      FUN_1002f13a0(param_1,*(undefined4 *)param_4[1],*(undefined4 *)param_4[2],
                    *(undefined4 *)param_4[3]);
      return;
    case 6:
      FUN_100df99c0("","prl_client_app",0,"The disk image unmounted with %d, %d",
                    *(undefined4 *)param_4[1],*(undefined4 *)param_4[2]);
    case 9:
      plVar5 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0xb0);
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      break;
    case 7:
      iVar1 = *(int *)param_4[1];
      iVar2 = *(int *)param_4[2];
      FUN_100df99c0("","prl_client_app",0,"User credentails reseted with %d, %d",iVar1,iVar2);
      plVar5 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0xb0);
      uVar4 = 0x80000009;
      if ((iVar1 == 0) && (uVar4 = 0x80000009, iVar2 == 0)) {
        uVar4 = 0;
      }
      break;
    case 8:
      FUN_100df99c0("","prl_client_app",0,"Deploy Id is set with %d, %d",*(undefined4 *)param_4[1],
                    *(undefined4 *)param_4[2]);
      plVar5 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar5 + 0xb0);
      uVar4 = 0;
      break;
    case 10:
      FUN_1002f0660(param_1);
      return;
    case 0xb:
      FUN_1002f11f0(param_1);
      return;
    case 0xc:
      QTimer::singleShot(500,param_1,"1retrievePaxBundlePath()");
      return;
    case 0xd:
      FUN_1002f1ee0(param_1);
      return;
    case 0xe:
      FUN_1002f1930(param_1);
      return;
    default:
      goto switchD_1002f3748_default;
    }
                    /* WARNING: Could not recover jumptable at 0x0001002f392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(plVar5,uVar4);
    return;
  }
switchD_1002f3748_default:
  return;
}


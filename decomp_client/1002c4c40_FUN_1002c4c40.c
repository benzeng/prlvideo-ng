
void FUN_1002c4c40(long *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined8 in_RAX;
  undefined4 uVar4;
  undefined8 uVar2;
  long lVar3;
  
  uVar4 = (undefined4)((ulong)in_RAX >> 0x20);
  if (1 < DAT_10230ffd0) {
    uVar2 = FUN_100dddcf0(param_2);
    FUN_100df99c0("","prl_client_app",2,"Installation finished %s %d %d",uVar2,param_3,
                  CONCAT44(uVar4,param_4));
  }
  if ((param_2 < 0) || (param_4 != 0 || param_3 != 0)) {
    *(undefined4 *)(param_1 + 0xe) = 0x80000009;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 0;
    cVar1 = FUN_10076d460();
    if (cVar1 != '\0') {
      uVar2 = FUN_100152280();
      lVar3 = FUN_1001554a0(uVar2);
      if (lVar3 != 0) {
        FUN_100173e70(lVar3,DAT_100e1531c);
      }
      goto LAB_1002c4d20;
    }
    *(undefined4 *)(param_1 + 0xe) = 0x80000009;
    if (1 < DAT_10230ffd0) {
      FUN_100df99c0("","prl_client_app",2,"Installation failed - can\'t find installed application")
      ;
    }
  }
  CAbstractTask::removeSubTask((int)param_1);
LAB_1002c4d20:
                    /* WARNING: Could not recover jumptable at 0x0001002c4d3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,0);
  return;
}


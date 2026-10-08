
void FUN_1002386f0(long *param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  long lVar3;
  code *UNRECOVERED_JUMPTABLE;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  
  if (((param_1[3] != 0) && (*(int *)(param_1[3] + 4) != 0)) && (param_1[4] != 0)) {
    lVar3 = FUN_100319390();
    if (lVar3 != 0) {
      if (param_3 == 3) {
        *(undefined4 *)((long)param_1 + 0x5c) = 4;
      }
      else {
        if (param_3 != 1) {
          UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
          uVar5 = 0x80000275;
          goto LAB_100238764;
        }
        lVar4 = FUN_10018d490(lVar3);
        iVar6 = 1;
        if (*(char *)(lVar4 + 0x13a) != '\0') {
          uVar5 = FUN_10018d490(lVar3);
          cVar1 = FUN_1001754c0(uVar5,0x10);
          if (cVar1 != '\0') {
            uVar5 = FUN_10018d490(lVar3);
            uVar5 = FUN_10016f500(uVar5);
            bVar2 = FUN_10061c2b0(uVar5,0x10080);
            iVar6 = (uint)bVar2 * 4 + 1;
          }
        }
        *(int *)((long)param_1 + 0x5c) = iVar6;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
      uVar5 = 0;
      goto LAB_100238764;
    }
  }
  FUN_100df99c0("","prl_client_app",0,"(!)Error: vm object is not valid");
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0xb0);
  uVar5 = 0x80000009;
LAB_100238764:
                    /* WARNING: Could not recover jumptable at 0x000100238771. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar5);
  return;
}


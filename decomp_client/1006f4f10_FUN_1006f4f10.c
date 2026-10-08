
void FUN_1006f4f10(long param_1,int param_2,int param_3,undefined8 *param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long *plVar2;
  
  if (param_2 == 0xc) {
    if (((param_3 == 2) || (param_3 == 3)) && (*(int *)param_4[1] == 1)) {
      if (DAT_10226db58 == 0) {
        DAT_10226db58 = FUN_100087320("Messaging::ButtonID",0xffffffffffffffff,1);
      }
      *(int *)*param_4 = DAT_10226db58;
    }
    else {
      *(undefined4 *)*param_4 = 0xffffffff;
    }
  }
  else if (param_2 == 0) {
    switch(param_3) {
    case 0:
      plVar2 = *(long **)(param_1 + 0x10);
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x1b0);
      uVar1 = 2;
LAB_1006f4fe2:
                    /* WARNING: Could not recover jumptable at 0x0001006f4fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(plVar2,uVar1);
      return;
    case 1:
      FUN_1006f44d0();
      return;
    case 2:
      if (*(int *)param_4[2] == 1) {
        plVar2 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x1b0);
        uVar1 = 1;
        goto LAB_1006f4fe2;
      }
      break;
    case 3:
      if (*(int *)param_4[2] == 1) {
        plVar2 = *(long **)(param_1 + 0x10);
        UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x1b0);
        uVar1 = 0;
        goto LAB_1006f4fe2;
      }
    }
  }
  return;
}


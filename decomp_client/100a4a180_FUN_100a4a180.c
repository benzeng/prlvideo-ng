
void FUN_100a4a180(long *param_1,int param_2,undefined4 *param_3)

{
  long *plVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar3;
  long *local_30;
  
  if (param_2 == 2) {
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    uVar3 = 2;
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 0) {
        param_3[3] = 1;
        lVar2 = *(long *)(param_3 + 1);
        local_30 = operator_new(0x20);
        *(undefined4 *)(local_30 + 1) = 1;
        local_30[2] = lVar2;
        *local_30 = (long)&PTR_FUN_102281300;
        local_30[3] = (long)PTR__PrlTool_FreeBuffer_1021e1230;
        (**(code **)(*param_1 + 0x18))(param_1,&local_30,*param_3);
        if (local_30 != (long *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar2 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar2 == 1) {
            (**(code **)(*local_30 + 0x10))();
          }
        }
      }
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
    uVar3 = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a4a1c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3);
  return;
}


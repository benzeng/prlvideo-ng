
void FUN_1002385d0(QObject *param_1,int param_2)

{
  if (param_2 == 6) {
    if (((*(long *)(param_1 + 0x70) != 0) && (*(int *)(*(long *)(param_1 + 0x70) + 4) != 0)) &&
       (*(QObject **)(param_1 + 0x78) != (QObject *)0x0)) {
      QObject::disconnect(*(QObject **)(param_1 + 0x78),"2subTaskStarted( int )",param_1,
                          "1onChangeVmStateTaskSubTaskStarted( int )");
    }
                    /* WARNING: Could not recover jumptable at 0x000100238621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0xb0))(param_1,0);
    return;
  }
  return;
}


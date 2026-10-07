
void FUN_100295a10(long *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = (long *)param_1[0x26ee];
  lVar2 = *plVar1;
  plVar3 = (long *)plVar1[1];
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  *plVar1 = (long)plVar1;
  plVar1[1] = (long)plVar1;
  FUN_100297410(param_1,param_2,plVar1 + -0x123);
  FUN_100296b80(param_1,plVar1 + -0x123);
  FUN_100402d70(param_1 + 0x26f7);
                    /* WARNING: Could not recover jumptable at 0x000100295a66. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}


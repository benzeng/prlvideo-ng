
void FUN_100280860(long *param_1,int *param_2,undefined8 *param_3,int param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  
  puVar1 = operator_new(0x20);
  *puVar1 = *(undefined8 *)(param_2 + 2);
  *(int *)(puVar1 + 1) = param_2[4];
  *(int *)((long)puVar1 + 0xc) = param_4 - *param_2;
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)param_3;
  puVar1[3] = param_5;
  *param_3 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002808c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,puVar1);
  return;
}


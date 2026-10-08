
undefined8 FUN_10041ae70(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  
  if (DAT_102273f54 == 0) {
    DAT_102273f54 = FUN_10041b070("Mappings::ValuePair",0xffffffffffffffff,1);
  }
  iVar1 = DAT_102273f54;
  *param_3 = param_2;
  param_3[1] = 0;
  *(int *)(param_3 + 2) = iVar1;
  *(undefined4 *)((long)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 7;
  param_3[4] = FUN_10041af30;
  param_3[5] = FUN_10041af40;
  param_3[6] = FUN_10041af60;
  param_3[7] = FUN_10041af90;
  param_3[8] = FUN_10041afc0;
  param_3[9] = FUN_10041afe0;
  param_3[10] = FUN_10041b000;
  param_3[0xb] = FUN_10041b020;
  param_3[0xc] = FUN_10041b040;
  return 0x10041b001;
}


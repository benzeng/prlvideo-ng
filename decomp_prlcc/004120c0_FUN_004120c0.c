
void FUN_004120c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  byte in_AL;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  local_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_5;
  local_90 = param_6;
                    /* WARNING: Could not recover jumptable at 0x00412100. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00412122 + (ulong)in_AL * -4))
            (param_1,auStack_d8,&LAB_00412122 + (ulong)in_AL * -4);
  return;
}


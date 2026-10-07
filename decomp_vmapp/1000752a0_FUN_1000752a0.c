
void FUN_1000752a0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (param_4 == 3) {
    FUN_1008e3970("","vm",0,
                  "Error: `write to socket` operation try to access buffer, which is outside accessible address space! Will abort Vm application!"
                 );
    local_28 = 0;
    uStack_20 = 0;
    local_18 = 0;
    FUN_100408ff0(*(long *)(param_1 + 0x20) + 0x10b0,0x80000452,&local_28);
    FUN_10002d9d0(&local_28);
    FUN_1000a7d10(*(undefined8 *)(param_1 + 0x20),3);
  }
  return;
}



void FUN_10035e300(long param_1,long param_2,uint param_3,undefined8 param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined8 param_8)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  local_48 = *(undefined4 *)(param_2 + 8);
  local_44 = *(undefined4 *)(param_2 + 0xc);
  local_40 = *(undefined4 *)(param_2 + 0x10);
  local_3c = *(undefined4 *)(*(long *)(param_2 + 0x28) + 4 + (ulong)param_3 * 0xc);
  local_38 = (ulong)*(uint *)(*(long *)(param_2 + 0x28) + (ulong)param_3 * 0xc) +
             *(long *)(*(long *)(param_1 + 0x38) + 0x920);
  uVar1 = FUN_10032dee0(param_2,param_3);
  FUN_10035f8d0(param_1,param_2,uVar1,0,&local_48,param_4,param_4,param_5,param_6,param_7,param_8);
  return;
}


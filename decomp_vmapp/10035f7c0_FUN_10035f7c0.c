
void FUN_10035f7c0(long param_1,long param_2,int *param_3,undefined4 param_4,undefined4 param_5,
                  int *param_6)

{
  uint uVar1;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  if ((param_3[2] - *param_3 == param_6[2] - *param_6) &&
     (param_3[3] - param_3[1] == param_6[3] - param_6[1])) {
    uVar1 = FUN_10032df40(param_2,param_4,param_5);
    local_48 = *(undefined4 *)(param_2 + 8);
    local_44 = *(undefined4 *)(param_2 + 0xc);
    local_40 = *(undefined4 *)(param_2 + 0x10);
    local_3c = *(undefined4 *)(*(long *)(param_2 + 0x28) + 4 + (ulong)uVar1 * 0xc);
    local_38 = (ulong)*(uint *)(*(long *)(param_2 + 0x28) + (ulong)uVar1 * 0xc) +
               *(long *)(*(long *)(param_1 + 0x38) + 0x920);
    local_58 = *(undefined8 *)param_3;
    uStack_50 = *(undefined8 *)(param_3 + 2);
    local_68 = *param_6;
    iStack_64 = param_6[1];
    iStack_60 = param_6[2];
    iStack_5c = param_6[3];
    FUN_1003c6660(&local_48,&local_58,&local_48,&local_68,1);
    local_80 = *(undefined8 *)param_6;
    local_78 = *(undefined8 *)(param_6 + 2);
    local_70 = 0x100000000;
    FUN_10035e0e0(param_1,param_2,&local_80,param_4,param_5);
  }
  return;
}


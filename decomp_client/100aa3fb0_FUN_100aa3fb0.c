
int FUN_100aa3fb0(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_38;
  
  do {
    uVar1 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x140),10,0,0);
    local_38 = 0;
    uVar1 = FUN_100c5f250(*(undefined8 *)(param_1 + 0x140),&local_38,uVar1);
    iVar2 = FUN_100aa2360(param_1,param_2,param_3,local_38,uVar1,param_4,param_5);
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = FUN_100c58d60(*(undefined8 *)(param_1 + 0x140),10,0,0);
  } while (0 < iVar2);
  return 0;
}


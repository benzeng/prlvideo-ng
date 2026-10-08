
void FUN_100c06230(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined4 *param_5,
                  uint *param_6,int param_7)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1021e1840;
  uVar3 = *param_6;
  if (param_7 == 0) {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        local_40 = *param_5;
        local_3c = param_5[1];
        FUN_100c07a60(&local_40,param_4,1);
        *(char *)param_5 = (char)local_40;
        *(char *)((long)param_5 + 1) = (char)((uint)local_40 >> 8);
        *(char *)((long)param_5 + 2) = (char)((uint)local_40 >> 0x10);
        *(char *)((long)param_5 + 3) = (char)((uint)local_40 >> 0x18);
        *(char *)(param_5 + 1) = (char)local_3c;
        *(char *)((long)param_5 + 5) = (char)((uint)local_3c >> 8);
        *(char *)((long)param_5 + 6) = (char)((uint)local_3c >> 0x10);
        *(char *)((long)param_5 + 7) = (char)((uint)local_3c >> 0x18);
      }
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      bVar1 = *(byte *)((long)param_5 + (long)(int)uVar3);
      *(byte *)((long)param_5 + (long)(int)uVar3) = bVar2;
      *param_2 = bVar1 ^ bVar2;
      param_2 = param_2 + 1;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  else {
    while (param_3 != 0) {
      param_3 = param_3 + -1;
      if (uVar3 == 0) {
        local_40 = *param_5;
        local_3c = param_5[1];
        FUN_100c07a60(&local_40,param_4,1);
        *(char *)param_5 = (char)local_40;
        *(char *)((long)param_5 + 1) = (char)((uint)local_40 >> 8);
        *(char *)((long)param_5 + 2) = (char)((uint)local_40 >> 0x10);
        *(char *)((long)param_5 + 3) = (char)((uint)local_40 >> 0x18);
        *(char *)(param_5 + 1) = (char)local_3c;
        *(char *)((long)param_5 + 5) = (char)((uint)local_3c >> 8);
        *(char *)((long)param_5 + 6) = (char)((uint)local_3c >> 0x10);
        *(char *)((long)param_5 + 7) = (char)((uint)local_3c >> 0x18);
      }
      bVar2 = *(byte *)((long)param_5 + (long)(int)uVar3) ^ *param_1;
      param_1 = param_1 + 1;
      *param_2 = bVar2;
      param_2 = param_2 + 1;
      *(byte *)((long)param_5 + (long)(int)uVar3) = bVar2;
      uVar3 = uVar3 + 1 & 7;
    }
  }
  *param_6 = uVar3;
  if (*(long *)PTR____stack_chk_guard_1021e1840 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


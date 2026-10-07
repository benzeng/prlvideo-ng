
void FUN_10082c530(byte *param_1,byte *param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,uint *param_7,uint *param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint local_48;
  uint local_44;
  byte local_40 [4];
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  long local_38;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_38 = lVar5;
  uVar6 = *param_8;
  local_48 = *param_7;
  uVar2 = param_7[1];
  local_40[0] = (byte)*param_7;
  local_40[1] = *(undefined1 *)((long)param_7 + 1);
  local_40[2] = *(undefined1 *)((long)param_7 + 2);
  local_40[3] = *(undefined1 *)((long)param_7 + 3);
  uVar3 = (ulong)local_48;
  local_3c = (char)param_7[1];
  local_3b = *(undefined1 *)((long)param_7 + 5);
  local_3a = *(undefined1 *)((long)param_7 + 6);
  local_39 = *(undefined1 *)((long)param_7 + 7);
  local_44 = uVar2;
  if (param_3 != 0) {
    iVar4 = 0;
    do {
      param_3 = param_3 + -1;
      if (uVar6 == 0) {
        FUN_10082ec50(&local_48,param_4,param_5,param_6);
        uVar3 = (ulong)local_48;
        local_40[0] = (byte)local_48;
        local_40[1] = (char)(local_48 >> 8);
        local_40[2] = (char)(local_48 >> 0x10);
        local_40[3] = (char)(local_48 >> 0x18);
        local_3c = (char)local_44;
        local_3b = (char)(local_44 >> 8);
        local_3a = (char)(local_44 >> 0x10);
        local_39 = (char)(local_44 >> 0x18);
        iVar4 = iVar4 + 1;
        uVar2 = local_44;
      }
      bVar1 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = local_40[(int)uVar6] ^ bVar1;
      param_2 = param_2 + 1;
      uVar6 = uVar6 + 1 & 7;
    } while (param_3 != 0);
    if (iVar4 != 0) {
      *(char *)param_7 = (char)uVar3;
      *(char *)((long)param_7 + 1) = (char)(uVar3 >> 8);
      *(char *)((long)param_7 + 2) = (char)(uVar3 >> 0x10);
      *(char *)((long)param_7 + 3) = (char)(uVar3 >> 0x18);
      *(char *)(param_7 + 1) = (char)uVar2;
      *(char *)((long)param_7 + 5) = (char)(uVar2 >> 8);
      *(char *)((long)param_7 + 6) = (char)(uVar2 >> 0x10);
      *(char *)((long)param_7 + 7) = (char)(uVar2 >> 0x18);
    }
    lVar5 = *(long *)PTR____stack_chk_guard_100ba2320;
  }
  *param_8 = uVar6;
  if (lVar5 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


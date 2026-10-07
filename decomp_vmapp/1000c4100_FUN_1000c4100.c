
void FUN_1000c4100(undefined8 *param_1,long param_2,string *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ushort uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  ulong uVar5;
  char local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  *param_1 = &PTR_FUN_100ba8cc0;
  std::string::string((string *)(param_1 + 3),param_3);
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 0xe);
  uVar1 = *(ushort *)(param_2 + 4);
  *(ushort *)((long)param_1 + 10) = uVar1;
  param_1[2] = param_6;
  *(undefined4 *)(param_1 + 6) = 0;
  ___bzero(param_1 + 7,0x108);
  *param_1 = &PTR_FUN_100ba8d08;
  uVar2 = *(undefined8 *)(param_2 + 6);
  param_1[0x28] = uVar2;
  param_1[0x29] = param_4;
  param_1[0x2a] = param_5;
  bVar3 = *(byte *)(param_1 + 3) & 1;
  if (bVar3 == 0) {
    uVar5 = (ulong)(*(byte *)(param_1 + 3) >> 1);
  }
  else {
    uVar5 = param_1[4];
  }
  if (uVar5 != 0) {
    if (bVar3 == 0) {
      pcVar4 = (char *)((long)param_1 + 0x19);
    }
    else {
      pcVar4 = (char *)param_1[5];
    }
    if (*pcVar4 != '\0') goto LAB_1000c4207;
  }
  _sprintf(local_b8,"[0x%012llx]0x%04x:0x%016llx, len=0x%04llx",uVar2,(ulong)uVar1,param_4,param_5);
  std::string::assign((char *)(param_1 + 3));
LAB_1000c4207:
  if (*(long *)PTR____stack_chk_guard_100ba2320 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



undefined4 FUN_1002eb980(long param_1,undefined2 *param_2,long param_3)

{
  int iVar1;
  undefined8 in_stack_fffffffffffff608;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined2 *local_990;
  undefined4 local_984;
  undefined1 local_980;
  undefined2 local_97f;
  undefined1 local_97d;
  undefined1 local_978 [2368];
  long local_38;
  
  uVar3 = (undefined4)((ulong)in_stack_fffffffffffff608 >> 0x20);
  local_38 = *(long *)PTR____stack_chk_guard_100ba2320;
  if (0 < DAT_1011c568c) {
    uVar2 = *(undefined8 *)(param_3 + 0x28);
    FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] CMD4(%04x:%02x) %s -> STS:%d (%p:%d)",*param_2,
                  *(undefined1 *)(param_2 + 1),*(undefined8 *)(param_3 + 0x10),
                  *(undefined4 *)(param_3 + 8),uVar2,*(undefined4 *)(param_3 + 0x30));
    uVar3 = (undefined4)((ulong)uVar2 >> 0x20);
    if ((*(char *)(param_2 + 1) != '\0') && (0 < DAT_1011c568c)) {
      FUN_1002da020(local_978,0x940,(long)param_2 + 3);
      FUN_1008e3970(&DAT_100b392f0,"USB",0,"[BTH] IN4:%s",local_978);
    }
  }
  local_990 = param_2 + 1;
  iVar1 = _memcmp((void *)((long)param_2 + 3),(void *)(param_1 + 0x60),6);
  local_984 = 0;
  local_980 = 1;
  local_97f = *param_2;
  local_97d = 0;
  if (iVar1 != 0) {
    local_97d = 0x12;
  }
  FUN_1002eb5e0(param_1,*(undefined1 *)(param_3 + 4),&local_980,4,(void *)((long)param_2 + 3),6);
  if ((iVar1 != 0) && (local_984 = 0x20, -1 < DAT_1011c568c)) {
    FUN_1008e3970(&DAT_100b392f0,"USB",0,
                  "[BTH] CMD4(%04x:%02x) %s -> Address mismatch (%02x-%02x-%02x-%02x-%02x-%02x - %02x-%02x-%02x-%02x-%02x-%02x)"
                  ,*param_2,*(undefined1 *)local_990,*(undefined8 *)(param_3 + 0x10),
                  *(undefined1 *)(param_2 + 4),CONCAT44(uVar3,(uint)*(byte *)((long)param_2 + 7)),
                  *(undefined1 *)(param_2 + 3),*(undefined1 *)((long)param_2 + 5),
                  *(undefined1 *)(param_2 + 2),*(undefined1 *)((long)param_2 + 3),
                  *(undefined1 *)(param_1 + 0x65),*(undefined1 *)(param_1 + 100),
                  *(undefined1 *)(param_1 + 99),*(undefined1 *)(param_1 + 0x62),
                  *(undefined1 *)(param_1 + 0x61),*(undefined1 *)(param_1 + 0x60));
  }
  if (*(long *)PTR____stack_chk_guard_100ba2320 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return local_984;
}


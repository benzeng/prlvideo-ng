
bool FUN_100429ce0(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  long local_518;
  undefined4 local_510;
  undefined4 local_508 [2];
  undefined1 local_500 [48];
  undefined4 local_4d0;
  undefined2 local_4c8;
  undefined2 local_4c2;
  undefined2 local_4c0;
  undefined4 local_4bc;
  undefined8 local_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined4 local_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  int local_30;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_518 = param_1 + 8;
  local_510 = *(undefined4 *)(param_1 + 0x10);
  local_28 = lVar1;
  ___bzero(local_508,0x4d8);
  local_30 = 1;
  cVar2 = FUN_100422630(&local_518,0x4d0);
  if (cVar2 != '\0') {
    *param_3 = CONCAT44(local_510,local_508[0]);
    local_4d0 = 0x100000;
    local_488 = *param_2;
    local_470 = param_2[1];
    local_480 = param_2[2];
    uStack_478 = param_2[3];
    local_450 = param_2[4];
    local_458 = param_2[5];
    local_460 = param_2[6];
    local_468 = param_2[7];
    local_448 = param_2[8];
    uStack_440 = param_2[9];
    local_438 = param_2[10];
    uStack_430 = param_2[0xb];
    local_428 = param_2[0xc];
    uStack_420 = param_2[0xd];
    local_418 = param_2[0xe];
    local_410 = *(undefined4 *)(param_2 + 0xf);
    uStack_40c = *(undefined4 *)((long)param_2 + 0x7c);
    uStack_408 = *(undefined4 *)(param_2 + 0x10);
    uStack_404 = *(undefined4 *)((long)param_2 + 0x84);
    local_4bc = *(undefined4 *)(param_2 + 0x11);
    local_4c8 = *(undefined2 *)(param_2 + 0x12);
    local_4c2 = *(undefined2 *)(param_2 + 0x13);
    local_4c0 = *(undefined2 *)(param_2 + 0x14);
  }
  if (local_30 != 2) {
    FUN_100422730(local_518,local_510,local_500,0x4d0);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2 != '\0';
}



bool FUN_100429b40(long param_1,undefined4 *param_2,undefined8 *param_3)

{
  long lVar1;
  char cVar2;
  long local_310;
  undefined4 local_308;
  undefined4 local_300 [2];
  undefined4 local_2f8 [35];
  undefined4 local_26c;
  undefined4 local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  int local_2c;
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_310 = param_1 + 8;
  local_308 = *(undefined4 *)(param_1 + 0x10);
  local_28 = lVar1;
  ___bzero(local_300,0x2d8);
  local_2c = 1;
  cVar2 = FUN_100422630(&local_310,0x2cc);
  if (cVar2 != '\0') {
    *param_3 = CONCAT44(local_308,local_300[0]);
    local_2f8[0] = 0x10000;
    local_248 = *param_2;
    local_254 = param_2[1];
    local_24c = param_2[2];
    local_250 = param_2[3];
    local_258 = param_2[5];
    local_25c = param_2[4];
    local_244 = param_2[6];
    local_234 = param_2[7];
    local_23c = param_2[0xb];
    local_260 = param_2[0xc];
    local_230 = param_2[8];
    local_264 = param_2[0xd];
    local_268 = param_2[0xe];
    local_26c = param_2[0xf];
    local_238 = param_2[9];
    local_240 = param_2[10];
  }
  if (local_2c != 2) {
    FUN_100422730(local_310,local_308,local_2f8,0x2cc);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2 != '\0';
}


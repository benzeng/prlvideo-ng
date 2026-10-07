
bool FUN_10036d0b0(time_t *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  double dVar4;
  string local_210 [24];
  string local_1f8;
  undefined1 local_1f7 [15];
  undefined1 *local_1e8;
  undefined1 local_1e0 [8];
  long local_1d8;
  long local_1c8;
  undefined1 local_1b8 [48];
  time_t local_188;
  undefined1 local_128 [256];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_10038e870(local_1e0,local_128,0x100);
  FUN_10038d9f0(local_210);
  FUN_100523010(&local_1f8,local_210,"/shaders/");
  if (((byte)local_1f8 & 1) == 0) {
    local_1e8 = local_1f7;
  }
  FUN_10038e8e0(local_1e0,local_1e8);
  std::string::~string(&local_1f8);
  std::string::~string(local_210);
  FUN_10038e8e0(local_1e0,param_2);
  if (local_1d8 == 0) {
    local_1d8 = local_1c8;
  }
  iVar2 = _stat_INODE64(local_1d8,local_1b8);
  bVar3 = true;
  if (iVar2 == 0) {
    dVar4 = _difftime(*param_1,local_188);
    bVar3 = dVar4 < 0.0;
  }
  FUN_10038e8c0(local_1e0);
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar3;
}


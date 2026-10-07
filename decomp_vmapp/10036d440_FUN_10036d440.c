
undefined1 FUN_10036d440(undefined8 param_1,uint *param_2)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  undefined1 uVar4;
  string local_1b0 [24];
  string local_198;
  char local_197 [15];
  char *local_188;
  string local_180 [24];
  string local_168;
  undefined1 local_167 [15];
  undefined1 *local_158;
  undefined1 local_150 [8];
  char *local_148;
  char *local_138;
  undefined1 local_128 [256];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_28 = lVar1;
  FUN_10038e870(local_150,local_128,0x100);
  FUN_10038d9f0(local_180);
  FUN_100523010(&local_168,local_180,"/shaders/");
  if (((byte)local_168 & 1) == 0) {
    local_158 = local_167;
  }
  FUN_10038e8e0(local_150,local_158);
  std::string::~string(&local_168);
  std::string::~string(local_180);
  FUN_10038e8e0(local_150,param_1);
  FUN_10038d9f0(local_1b0);
  FUN_100523010(&local_198,local_1b0,"/shaders/");
  if (((byte)local_198 & 1) == 0) {
    local_188 = local_197;
  }
  _mkdir(local_188,0x1ed);
  std::string::~string(&local_198);
  std::string::~string(local_1b0);
  if (local_148 == (char *)0x0) {
    local_148 = local_138;
  }
  iVar2 = _creat(local_148,0x180);
  if (iVar2 < 0) {
    uVar4 = 0;
  }
  else {
    if ((ulong)*param_2 != 0) {
      pvVar3 = *(void **)(param_2 + 2);
      if (pvVar3 == (void *)0x0) {
        pvVar3 = *(void **)(param_2 + 6);
      }
      _write(iVar2,pvVar3,(ulong)*param_2);
    }
    uVar4 = 1;
    _close(iVar2);
  }
  FUN_10038e8c0(local_150);
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}



undefined1 FUN_10036d210(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 uVar5;
  void *pvVar6;
  string local_230 [24];
  string local_218;
  undefined1 local_217 [15];
  undefined1 *local_208;
  undefined1 local_200 [8];
  char *local_1f8;
  char *local_1e8;
  void *local_1d8;
  void *pvStack_1d0;
  undefined8 local_1c8;
  size_t local_158;
  undefined1 local_128 [256];
  long local_28;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ba2320;
  local_1d8 = (void *)0x0;
  pvStack_1d0 = (void *)0x0;
  local_1c8 = 0;
  local_28 = lVar1;
  FUN_10038e870(local_200,local_128,0x100);
  FUN_10038d9f0(local_230);
  FUN_100523010(&local_218,local_230,"/shaders/");
  if (((byte)local_218 & 1) == 0) {
    local_208 = local_217;
  }
  FUN_10038e8e0(local_200,local_208);
  std::string::~string(&local_218);
  std::string::~string(local_230);
  FUN_10038e8e0(local_200);
  if (local_1f8 == (char *)0x0) {
    local_1f8 = local_1e8;
  }
  iVar2 = _open(local_1f8,0);
  if (iVar2 < 0) {
    uVar5 = 0;
  }
  else {
    _fstat_INODE64(iVar2);
    pvVar6 = (void *)0x0;
    if (local_158 + 1 != 0) {
      FUN_10005a320(&local_1d8,local_158 + 1);
      pvVar6 = local_1d8;
    }
    uVar3 = _read(iVar2,pvVar6,local_158);
    *(undefined1 *)((long)local_1d8 + (uVar3 & 0xffffffff)) = 0;
    _close(iVar2);
    puVar4 = *(undefined1 **)(param_2 + 2);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = *(undefined1 **)(param_2 + 6);
    }
    *puVar4 = 0;
    *param_2 = 0;
    uVar5 = 1;
    FUN_10038e8e0(param_2,"%s",local_1d8);
  }
  FUN_10038e8c0(local_200);
  if (local_1d8 != (void *)0x0) {
    if (pvStack_1d0 != local_1d8) {
      pvStack_1d0 = local_1d8;
    }
    operator_delete(local_1d8);
  }
  if (lVar1 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}


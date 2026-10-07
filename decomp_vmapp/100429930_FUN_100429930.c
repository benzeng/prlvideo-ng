
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100429930(long param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *local_78;
  void *pvStack_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_48;
  uint local_40;
  ulong local_38;
  
  local_48 = param_1 + 8;
  local_40 = *(uint *)(param_1 + 0x10);
  local_38 = 0;
  lVar3 = FUN_100429810();
  if (lVar3 == 0) {
    cVar1 = FUN_100422630(&local_48,0x10);
    if (cVar1 == '\0') {
      return 0;
    }
    local_58 = _DAT_100b420e0;
    uStack_54 = _UNK_100b420e4;
    uStack_50 = _UNK_100b420e8;
    uStack_4c = _UNK_100b420ec;
    cVar1 = FUN_100422790(&local_48,local_40,&local_58,0x10);
    param_2 = 0xdeadbeef;
  }
  else {
    cVar1 = FUN_100422630(&local_48,lVar3);
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(long *)(param_1 + 0x48) == 0) {
      cVar1 = FUN_100422790(&local_48,local_40,param_2,lVar3);
    }
    else {
      local_78 = (void *)0x0;
      pvStack_70 = (void *)0x0;
      local_68 = 0;
      iVar2 = FUN_100424960(*(undefined4 *)(param_1 + 0x30),param_2,lVar3,&local_78);
      cVar1 = '\0';
      if (iVar2 == 0) {
        cVar1 = FUN_100422790(&local_48,local_40,local_78,lVar3);
      }
      if (local_78 != (void *)0x0) {
        if (pvStack_70 != local_78) {
          pvStack_70 = local_78;
        }
        operator_delete(local_78);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  *param_3 = param_2;
  param_3[1] = local_38 & 0xffffffff | (ulong)local_40 << 0x20;
  return CONCAT71((int7)(((ulong)local_40 << 0x20) >> 8),cVar1 != '\0');
}



int FUN_1008fefaf(long param_1)

{
  int iVar1;
  ssize_t sVar2;
  int local_24;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0xb4) < 0)) {
    local_24 = -1;
  }
  else if ((*(int *)(param_1 + 0x4c8) < 0) || (0x400 < *(int *)(param_1 + 0x4c8))) {
    local_24 = -1;
  }
  else if ((*(int *)(param_1 + 0x4cc) < 0) || (0x400 < *(int *)(param_1 + 0x4cc))) {
    local_24 = -1;
  }
  else if (*(int *)(param_1 + 0x4cc) < *(int *)(param_1 + 0x4c8)) {
    local_24 = -1;
  }
  else {
    if (0 < *(int *)(param_1 + 0x4c8)) {
      _memmove((void *)(param_1 + 0xc4),(void *)(param_1 + 0xc4 + (long)*(int *)(param_1 + 0x4c8)),
               (long)(*(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8)));
      *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) - *(int *)(param_1 + 0x4c8);
      *(undefined4 *)(param_1 + 0x4c8) = 0;
    }
    iVar1 = 0x400 - *(int *)(param_1 + 0x4cc);
    if (iVar1 == 0) {
      local_24 = 0;
    }
    else {
      sVar2 = _recv(*(int *)(param_1 + 0xb4),
                    (void *)(param_1 + 0xc4 + (long)*(int *)(param_1 + 0x4c8)),(long)iVar1,0);
      local_24 = (int)sVar2;
      if (local_24 < 0) {
        ___xmlIOErr(9,0,"recv failed");
        _close(*(int *)(param_1 + 0xb4));
        *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
        *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
        local_24 = -1;
      }
      else {
        *(int *)(param_1 + 0x4cc) = *(int *)(param_1 + 0x4cc) + local_24;
        *(undefined1 *)((long)*(int *)(param_1 + 0x4cc) + 0xc4 + param_1) = 0;
      }
    }
  }
  return local_24;
}


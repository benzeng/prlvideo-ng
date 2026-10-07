
void FUN_1001946c6(long *param_1)

{
  bool bVar1;
  int iVar2;
  int local_40c;
  undefined1 local_408 [1016];
  int local_10;
  int local_c;
  
  local_10 = 0;
  if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
    _xmlParserInputShrink(param_1[7]);
  }
  local_c = FUN_100190973(param_1,&local_40c);
  while (((local_c != 0x3c || (*(int *)((long)param_1 + 0x114) == 0x3c)) &&
         ((local_c != 0x26 || (*(int *)((long)param_1 + 0x114) == 0x26))))) {
    if (local_c < 0x100) {
      if ((((local_c < 9) || (10 < local_c)) && (local_c != 0xd)) && (local_c < 0x20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else if (((local_c < 0x100) || (0xd7ff < local_c)) &&
            (((local_c < 0xe000 || (0xfffd < local_c)) &&
             ((local_c < 0x10000 || (0x10ffff < local_c)))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    if (local_40c == 1) {
      local_408[local_10] = (char)local_c;
      local_10 = local_10 + 1;
    }
    else {
      iVar2 = _xmlCopyChar(local_40c,local_408 + local_10,local_c);
      local_10 = local_10 + iVar2;
    }
    if (999 < local_10) {
      if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) {
        iVar2 = FUN_10019247c(param_1,local_408,local_10);
        if (iVar2 == 0) {
          FUN_100191999(param_1);
          if (*(long *)(*param_1 + 0x88) != 0) {
            (**(code **)(*param_1 + 0x88))(param_1[1],local_408,local_10);
          }
        }
        else if (*(long *)(*param_1 + 0x90) != 0) {
          (**(code **)(*param_1 + 0x90))(param_1[1],local_408,local_10);
        }
      }
      local_10 = 0;
    }
    if (**(char **)(param_1[7] + 0x20) == '\n') {
      *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
      *(undefined4 *)(param_1[7] + 0x38) = 1;
    }
    else {
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    }
    *(undefined4 *)((long)param_1 + 0x114) = 0;
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_40c;
    param_1[0x27] = param_1[0x27] + 1;
    local_c = FUN_100190973(param_1,&local_40c);
    if (local_c == 0) {
      if ((500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
        _xmlParserInputShrink(param_1[7]);
      }
      if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
        _xmlParserInputGrow((xmlParserInputPtr)param_1[7],0xfa);
      }
      local_c = FUN_100190973(param_1,&local_40c);
    }
  }
  if (local_10 == 0) {
    if (local_c == 0) {
      *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
    }
  }
  else {
    local_408[local_10] = 0;
    if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) {
      iVar2 = FUN_10019247c(param_1,local_408,local_10);
      if (iVar2 == 0) {
        FUN_100191999(param_1);
        if (*(long *)(*param_1 + 0x88) != 0) {
          (**(code **)(*param_1 + 0x88))(param_1[1],local_408,local_10);
        }
      }
      else if (*(long *)(*param_1 + 0x90) != 0) {
        (**(code **)(*param_1 + 0x90))(param_1[1],local_408,local_10);
      }
    }
  }
  return;
}


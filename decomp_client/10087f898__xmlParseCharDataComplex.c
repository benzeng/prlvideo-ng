
void _xmlParseCharDataComplex(long *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int local_14c;
  undefined1 local_148 [308];
  int local_14;
  int local_10;
  int local_c;
  
  local_14 = 0;
  local_c = 0;
  if (((*(int *)((long)param_1 + 0x1c4) == 0) &&
      (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18))) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500)) {
    FUN_100879c6f(param_1);
  }
  if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
     (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
    FUN_100879cbc(param_1);
  }
  local_10 = _xmlCurrentChar(param_1,&local_14c);
  while ((local_10 != 0x3c && (local_10 != 0x26))) {
    if (local_10 < 0x100) {
      if ((((local_10 < 9) || (10 < local_10)) && (local_10 != 0xd)) && (local_10 < 0x20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
    }
    else if ((((local_10 < 0x100) || (0xd7ff < local_10)) &&
             ((local_10 < 0xe000 || (0xfffd < local_10)))) &&
            ((local_10 < 0x10000 || (0x10ffff < local_10)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    if (((local_10 == 0x5d) && (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == ']')) &&
       (*(char *)(*(long *)(param_1[7] + 0x20) + 2) == '>')) {
      if (param_2 != 0) break;
      FUN_100877520(param_1,0x3e,0);
    }
    if (local_14c == 1) {
      local_148[local_14] = (char)local_10;
      local_14 = local_14 + 1;
    }
    else {
      iVar2 = _xmlCopyCharMultiByte(local_148 + local_14,local_10);
      local_14 = local_14 + iVar2;
    }
    if (299 < local_14) {
      local_148[local_14] = 0;
      if ((*param_1 != 0) && (*(int *)((long)param_1 + 0x14c) == 0)) {
        iVar2 = FUN_10087b997(param_1,local_148,local_14,0);
        if (iVar2 == 0) {
          if (*(long *)(*param_1 + 0x88) != 0) {
            (**(code **)(*param_1 + 0x88))(param_1[1],local_148,local_14);
          }
        }
        else if (*(long *)(*param_1 + 0x90) != 0) {
          (**(code **)(*param_1 + 0x90))(param_1[1],local_148,local_14);
        }
      }
      local_14 = 0;
    }
    local_c = local_c + 1;
    if (0x32 < local_c) {
      if ((*(int *)((long)param_1 + 0x1c4) == 0) &&
         (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 0xfa)) {
        FUN_100879cbc(param_1);
      }
      local_c = 0;
    }
    if (**(char **)(param_1[7] + 0x20) == '\n') {
      *(int *)(param_1[7] + 0x34) = *(int *)(param_1[7] + 0x34) + 1;
      *(undefined4 *)(param_1[7] + 0x38) = 1;
    }
    else {
      *(int *)(param_1[7] + 0x38) = *(int *)(param_1[7] + 0x38) + 1;
    }
    *(long *)(param_1[7] + 0x20) = *(long *)(param_1[7] + 0x20) + (long)local_14c;
    if (**(char **)(param_1[7] + 0x20) == '%') {
      _xmlParserHandlePEReference(param_1);
    }
    local_10 = _xmlCurrentChar(param_1,&local_14c);
  }
  if (((local_14 != 0) && (local_148[local_14] = 0, *param_1 != 0)) &&
     (*(int *)((long)param_1 + 0x14c) == 0)) {
    iVar2 = FUN_10087b997(param_1,local_148,local_14,0);
    if (iVar2 == 0) {
      if (*(long *)(*param_1 + 0x88) != 0) {
        (**(code **)(*param_1 + 0x88))(param_1[1],local_148,local_14);
      }
    }
    else if (*(long *)(*param_1 + 0x90) != 0) {
      (**(code **)(*param_1 + 0x90))(param_1[1],local_148,local_14);
    }
  }
  return;
}


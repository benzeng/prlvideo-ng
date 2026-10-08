
void FUN_1008c7a42(long *param_1)

{
  int iVar1;
  int local_40c;
  undefined1 local_408 [1016];
  int local_10;
  int local_c;
  
  local_10 = 0;
  if (500 < *(long *)(param_1[7] + 0x20) - *(long *)(param_1[7] + 0x18)) {
    if (*(long *)(param_1[7] + 0x28) - *(long *)(param_1[7] + 0x20) < 500) {
      _xmlParserInputShrink(param_1[7]);
    }
  }
  local_c = FUN_1008c429b(param_1,&local_40c);
  do {
    while( true ) {
      if ((((local_c < 9) || (10 < local_c)) && (local_c != 0xd)) && (local_c < 0x20))
      goto LAB_1008c7f01;
      if (((local_c != 0x3c) || (*(char *)(*(long *)(param_1[7] + 0x20) + 1) != '!')) ||
         ((*(char *)(*(long *)(param_1[7] + 0x20) + 2) != '-' ||
          (*(char *)(*(long *)(param_1[7] + 0x20) + 3) != '-')))) break;
      if (((local_10 != 0) && (*param_1 != 0)) && (*(int *)((long)param_1 + 0x14c) == 0)) {
        if (*(long *)(*param_1 + 200) == 0) {
          if (*(long *)(*param_1 + 0x88) != 0) {
            (**(code **)(*param_1 + 0x88))(param_1[1],local_408,local_10);
          }
        }
        else {
          (**(code **)(*param_1 + 200))(param_1[1],local_408,local_10);
        }
      }
      local_10 = 0;
      FUN_1008c9056(param_1);
      local_c = FUN_1008c429b(param_1,&local_40c);
    }
    if ((local_c == 0x3c) && (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '/')) {
      if ((int)param_1[0x38] == 0) {
        if (((0x40 < *(byte *)(*(long *)(param_1[7] + 0x20) + 2)) &&
            (*(byte *)(*(long *)(param_1[7] + 0x20) + 2) < 0x5b)) ||
           ((0x60 < *(byte *)(*(long *)(param_1[7] + 0x20) + 2) &&
            (*(byte *)(*(long *)(param_1[7] + 0x20) + 2) < 0x7b)))) goto LAB_1008c7f01;
      }
      else {
        iVar1 = _xmlStrlen((xmlChar *)param_1[0x24]);
        iVar1 = _xmlStrncasecmp((xmlChar *)param_1[0x24],
                                (xmlChar *)(*(long *)(param_1[7] + 0x20) + 2),iVar1);
        if (iVar1 == 0) {
LAB_1008c7f01:
          if (((local_c < 9) || (10 < local_c)) && ((local_c != 0xd && (local_c < 0x20)))) {
            FUN_1008c3fbf(param_1,9,"Invalid char in CDATA 0x%X\n",local_c);
            _xmlNextChar(param_1);
          }
          if (((local_10 != 0) && (*param_1 != 0)) && (*(int *)((long)param_1 + 0x14c) == 0)) {
            if (*(long *)(*param_1 + 200) == 0) {
              if (*(long *)(*param_1 + 0x88) != 0) {
                (**(code **)(*param_1 + 0x88))(param_1[1],local_408,local_10);
              }
            }
            else {
              (**(code **)(*param_1 + 200))(param_1[1],local_408,local_10);
            }
          }
          return;
        }
        FUN_1008c3ec0(param_1,0x4c,"Element %s embbeds close tag\n",param_1[0x24],0);
      }
    }
    if (local_40c == 1) {
      local_408[local_10] = (char)local_c;
      local_10 = local_10 + 1;
    }
    else {
      iVar1 = _xmlCopyChar(local_40c,local_408 + local_10,local_c);
      local_10 = local_10 + iVar1;
    }
    if (999 < local_10) {
      if (*(long *)(*param_1 + 200) == 0) {
        if (*(long *)(*param_1 + 0x88) != 0) {
          (**(code **)(*param_1 + 0x88))(param_1[1],local_408,local_10);
        }
      }
      else {
        (**(code **)(*param_1 + 200))(param_1[1],local_408,local_10);
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
    local_c = FUN_1008c429b(param_1,&local_40c);
  } while( true );
}


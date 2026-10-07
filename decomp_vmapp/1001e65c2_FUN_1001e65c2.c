
void FUN_1001e65c2(xmlBufferPtr param_1,undefined1 *param_2,int param_3)

{
  char local_38 [39];
  undefined1 local_11;
  char *local_10;
  
  if (param_2 != (undefined1 *)0x0) {
    if (param_3 != 0) {
      _xmlBufferWriteChar(param_1,"(");
    }
    switch(*param_2) {
    case 0:
      _xmlBufferWriteChar(param_1,"empty");
      break;
    case 1:
      _xmlBufferWriteChar(param_1,"forbidden");
      break;
    case 2:
      _xmlBufferWriteCHAR(param_1,*(xmlChar **)(param_2 + 0x20));
      break;
    case 3:
      local_10 = *(char **)(param_2 + 0x10);
      if ((*local_10 == '\x03') || (*local_10 == '\x04')) {
        FUN_1001e65c2(param_1,local_10,1);
      }
      else {
        FUN_1001e65c2(param_1,local_10,0);
      }
      _xmlBufferWriteChar(param_1," , ");
      local_10 = *(char **)(param_2 + 0x20);
      if ((*local_10 == '\x03') || (*local_10 == '\x04')) {
        FUN_1001e65c2(param_1,local_10,1);
      }
      else {
        FUN_1001e65c2(param_1,local_10,0);
      }
      break;
    case 4:
      local_10 = *(char **)(param_2 + 0x10);
      if ((*local_10 == '\x03') || (*local_10 == '\x04')) {
        FUN_1001e65c2(param_1,local_10,1);
      }
      else {
        FUN_1001e65c2(param_1,local_10,0);
      }
      _xmlBufferWriteChar(param_1," | ");
      local_10 = *(char **)(param_2 + 0x20);
      if ((*local_10 == '\x03') || (*local_10 == '\x04')) {
        FUN_1001e65c2(param_1,local_10,1);
      }
      else {
        FUN_1001e65c2(param_1,local_10,0);
      }
      break;
    case 5:
      local_10 = *(char **)(param_2 + 0x10);
      if ((*local_10 == '\x03') || (*local_10 == '\x04')) {
        FUN_1001e65c2(param_1,local_10,1);
      }
      else {
        FUN_1001e65c2(param_1,local_10,0);
      }
      if ((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x24) == 1)) {
        local_38[0] = '?';
        local_38[1] = 0;
      }
      else if ((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x24) == -1)) {
        local_38[0] = '*';
        local_38[1] = 0;
      }
      else if ((*(int *)(param_2 + 0x20) == 1) && (*(int *)(param_2 + 0x24) == -1)) {
        local_38[0] = '+';
        local_38[1] = 0;
      }
      else if (*(int *)(param_2 + 0x24) == *(int *)(param_2 + 0x20)) {
        _snprintf(local_38,0x27,"{%d}",(ulong)*(uint *)(param_2 + 0x20));
      }
      else if (*(int *)(param_2 + 0x24) < 0) {
        _snprintf(local_38,0x27,"{%d,inf}",(ulong)*(uint *)(param_2 + 0x20));
      }
      else {
        _snprintf(local_38,0x27,"{%d,%d}",(ulong)*(uint *)(param_2 + 0x20),
                  (ulong)*(uint *)(param_2 + 0x24));
      }
      local_11 = 0;
      _xmlBufferWriteChar(param_1,local_38);
      break;
    default:
      _fwrite("Error in tree\n",1,0xe,*(FILE **)PTR____stderrp_100ba2328);
    }
    if (param_3 != 0) {
      _xmlBufferWriteChar(param_1,")");
    }
  }
  return;
}


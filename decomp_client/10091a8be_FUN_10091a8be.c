
char * FUN_10091a8be(undefined4 *param_1)

{
  char *local_18;
  
  switch(*param_1) {
  default:
    local_18 = (char *)0x0;
    break;
  case 1:
    local_18 = "http://www.w3.org/2001/XMLSchema";
    break;
  case 4:
  case 5:
    local_18 = *(char **)(param_1 + 0x34);
    break;
  case 0xe:
    local_18 = *(char **)(param_1 + 0x18);
    break;
  case 0xf:
    local_18 = *(char **)(param_1 + 0x1c);
    break;
  case 0x10:
    local_18 = *(char **)(param_1 + 0x1a);
    break;
  case 0x11:
    local_18 = *(char **)(param_1 + 10);
    break;
  case 0x16:
  case 0x17:
  case 0x18:
    local_18 = *(char **)(param_1 + 10);
  }
  return local_18;
}



char * FUN_10022ffe4(undefined4 *param_1)

{
  char *local_18;
  
  if (param_1 == (undefined4 *)0x0) {
    local_18 = "none";
  }
  else {
    switch(*param_1) {
    case 0:
      local_18 = "empty";
      break;
    case 1:
      local_18 = "notAllowed";
      break;
    case 2:
      local_18 = "except";
      break;
    case 3:
      local_18 = "text";
      break;
    case 4:
      local_18 = "element";
      break;
    case 5:
      local_18 = "datatype";
      break;
    case 6:
      local_18 = "param";
      break;
    case 7:
      local_18 = "value";
      break;
    case 8:
      local_18 = "list";
      break;
    case 9:
      local_18 = "attribute";
      break;
    case 10:
      local_18 = "def";
      break;
    case 0xb:
      local_18 = "ref";
      break;
    case 0xc:
      local_18 = "externalRef";
      break;
    case 0xd:
      local_18 = "parentRef";
      break;
    case 0xe:
      local_18 = "optional";
      break;
    case 0xf:
      local_18 = "zeroOrMore";
      break;
    case 0x10:
      local_18 = "oneOrMore";
      break;
    case 0x11:
      local_18 = "choice";
      break;
    case 0x12:
      local_18 = "group";
      break;
    case 0x13:
      local_18 = "interleave";
      break;
    case 0x14:
      local_18 = "start";
      break;
    case 0xffffffff:
      local_18 = "noop";
      break;
    default:
      local_18 = "unknown";
    }
  }
  return local_18;
}


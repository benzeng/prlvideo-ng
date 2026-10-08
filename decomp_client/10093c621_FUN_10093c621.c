
char * FUN_10093c621(undefined4 param_1)

{
  char *local_18;
  
  switch(param_1) {
  case 1000:
    local_18 = "minInclusive";
    break;
  case 0x3e9:
    local_18 = "minExclusive";
    break;
  case 0x3ea:
    local_18 = "maxInclusive";
    break;
  case 0x3eb:
    local_18 = "maxExclusive";
    break;
  case 0x3ec:
    local_18 = "totalDigits";
    break;
  case 0x3ed:
    local_18 = "fractionDigits";
    break;
  case 0x3ee:
    local_18 = "pattern";
    break;
  case 0x3ef:
    local_18 = "enumeration";
    break;
  case 0x3f0:
    local_18 = "whiteSpace";
    break;
  case 0x3f1:
    local_18 = "length";
    break;
  case 0x3f2:
    local_18 = "maxLength";
    break;
  case 0x3f3:
    local_18 = "minLength";
    break;
  default:
    local_18 = "Internal Error";
  }
  return local_18;
}


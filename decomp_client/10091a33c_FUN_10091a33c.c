
char * FUN_10091a33c(uint param_1)

{
  char *local_18;
  
  if (param_1 == 0xf) {
    local_18 = "attribute declaration";
    return local_18;
  }
  if (param_1 < 0x10) {
    if (param_1 == 6) {
      local_18 = "model group (sequence)";
      return local_18;
    }
    if (param_1 < 7) {
      if (param_1 == 4) {
        local_18 = "simple type definition";
        return local_18;
      }
      if (4 < param_1) {
        local_18 = "complex type definition";
        return local_18;
      }
      if (param_1 == 2) {
        local_18 = "wildcard (any)";
        return local_18;
      }
    }
    else {
      if (param_1 == 8) {
        local_18 = "model group (all)";
        return local_18;
      }
      if (param_1 < 8) {
        local_18 = "model group (choice)";
        return local_18;
      }
      if (param_1 == 0xe) {
        local_18 = "element declaration";
        return local_18;
      }
    }
  }
  else {
    if (param_1 == 0x16) {
      local_18 = "unique identity-constraint";
      return local_18;
    }
    if (param_1 < 0x17) {
      if (param_1 == 0x11) {
        local_18 = "model group definition";
        return local_18;
      }
      if (param_1 < 0x11) {
        local_18 = "attribute group definition";
        return local_18;
      }
      if (param_1 == 0x12) {
        local_18 = "notation declaration";
        return local_18;
      }
    }
    else {
      if (param_1 == 0x18) {
        local_18 = "keyref identity-constraint";
        return local_18;
      }
      if (param_1 < 0x18) {
        local_18 = "key identity-constraint";
        return local_18;
      }
      if (param_1 == 0x19) {
        local_18 = "particle";
        return local_18;
      }
      if (param_1 == 2000) {
        local_18 = "[helper component] QName reference";
        return local_18;
      }
    }
  }
  local_18 = "Not a schema component";
  return local_18;
}


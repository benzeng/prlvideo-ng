
undefined4 _xmlParseElementContentDecl(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 local_34;
  undefined8 local_18;
  undefined4 local_c;
  
  uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x38) + 100);
  *param_3 = 0;
  if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '(') {
    _xmlNextChar(param_1);
    if (*(int *)(param_1 + 0x1c4) == 0) {
      if (*(long *)(*(long *)(param_1 + 0x38) + 0x28) - *(long *)(*(long *)(param_1 + 0x38) + 0x20)
          < 0xfa) {
        FUN_100879cbc(param_1);
      }
    }
    _xmlSkipBlankChars(param_1);
    if ((((**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '#') &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1) == 'P')) &&
        (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 2) == 'C')) &&
       (((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 3) == 'D' &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 4) == 'A')) &&
        ((*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 5) == 'T' &&
         (*(char *)(*(long *)(*(long *)(param_1 + 0x38) + 0x20) + 6) == 'A')))))) {
      local_18 = _xmlParseElementMixedContentDecl(param_1,uVar1);
      local_c = 3;
    }
    else {
      local_18 = _xmlParseElementChildrenContentDecl(param_1,uVar1);
      local_c = 4;
    }
    _xmlSkipBlankChars(param_1);
    *param_3 = local_18;
    local_34 = local_c;
  }
  else {
    FUN_1008780de(param_1,0x36,"xmlParseElementContentDecl : %s \'(\' expected\n",param_2);
    local_34 = 0xffffffff;
  }
  return local_34;
}


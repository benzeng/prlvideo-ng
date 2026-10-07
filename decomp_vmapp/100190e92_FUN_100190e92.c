
int FUN_100190e92(long param_1)

{
  int iVar1;
  undefined4 local_c;
  
  local_c = 0;
  do {
    if ((**(char **)(*(long *)(param_1 + 0x38) + 0x20) != ' ') &&
       (((**(byte **)(*(long *)(param_1 + 0x38) + 0x20) < 9 ||
         (10 < **(byte **)(*(long *)(param_1 + 0x38) + 0x20))) &&
        (**(char **)(*(long *)(param_1 + 0x38) + 0x20) != '\r')))) {
      return local_c;
    }
    if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
      iVar1 = _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      if (0 < iVar1) goto LAB_100190ee1;
      _xmlPopInput(param_1);
    }
    else {
LAB_100190ee1:
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\n') {
        *(int *)(*(long *)(param_1 + 0x38) + 0x34) = *(int *)(*(long *)(param_1 + 0x38) + 0x34) + 1;
        *(undefined4 *)(*(long *)(param_1 + 0x38) + 0x38) = 1;
      }
      else {
        *(int *)(*(long *)(param_1 + 0x38) + 0x38) = *(int *)(*(long *)(param_1 + 0x38) + 0x38) + 1;
      }
      *(long *)(*(long *)(param_1 + 0x38) + 0x20) = *(long *)(*(long *)(param_1 + 0x38) + 0x20) + 1;
      *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 1;
      if (**(char **)(*(long *)(param_1 + 0x38) + 0x20) == '\0') {
        _xmlParserInputGrow(*(xmlParserInputPtr *)(param_1 + 0x38),0xfa);
      }
    }
    local_c = local_c + 1;
  } while( true );
}



void _xmlParsePEReference(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long local_18;
  
  local_18 = 0;
  if (**(char **)(param_1[7] + 0x20) == '%') {
    _xmlNextChar(param_1);
    lVar1 = _xmlParseName(param_1);
    if (lVar1 == 0) {
      FUN_100877b3f(param_1,0x44,"xmlParsePEReference: no name\n");
    }
    else if (**(char **)(param_1[7] + 0x20) == ';') {
      _xmlNextChar(param_1);
      if ((*param_1 != 0) && (*(long *)(*param_1 + 0xc0) != 0)) {
        local_18 = (**(code **)(*param_1 + 0xc0))(param_1[1],lVar1);
      }
      if (local_18 == 0) {
        if (((int)param_1[6] == 1) ||
           ((*(int *)((long)param_1 + 0x8c) == 0 && ((int)param_1[0x12] == 0)))) {
          FUN_1008780de(param_1,0x1a,"PEReference: %%%s; not found\n",lVar1);
        }
        else {
          FUN_100877c2c(param_1,0x1b,"PEReference: %%%s; not found\n",lVar1,0);
          *(undefined4 *)(param_1 + 0x13) = 0;
        }
      }
      else if ((*(int *)(local_18 + 0x5c) == 4) || (*(int *)(local_18 + 0x5c) == 5)) {
        if (*(code **)(param_1[7] + 0x48) == FUN_10087aa73) {
          uVar2 = _xmlNewEntityInputStream(param_1,local_18);
          _xmlPushInput(param_1,uVar2);
          if ((((((*(int *)(local_18 + 0x5c) == 5) && (**(char **)(param_1[7] + 0x20) == '<')) &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 1) == '?')) &&
               ((*(char *)(*(long *)(param_1[7] + 0x20) + 2) == 'x' &&
                (*(char *)(*(long *)(param_1[7] + 0x20) + 3) == 'm')))) &&
              (*(char *)(*(long *)(param_1[7] + 0x20) + 4) == 'l')) &&
             ((((*(char *)(*(long *)(param_1[7] + 0x20) + 5) == ' ' ||
                ((8 < *(byte *)(*(long *)(param_1[7] + 0x20) + 5) &&
                 (*(byte *)(*(long *)(param_1[7] + 0x20) + 5) < 0xb)))) ||
               (*(char *)(*(long *)(param_1[7] + 0x20) + 5) == '\r')) &&
              (_xmlParseTextDecl(param_1), (int)param_1[0x11] == 0x20)))) {
            *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
            return;
          }
        }
        else {
          uVar2 = FUN_10087aa91(param_1,local_18);
          _xmlPushInput(param_1,uVar2);
        }
      }
      else {
        FUN_100877c2c(param_1,0x1b,"Internal: %%%s; is not a parameter entity\n",lVar1,0);
      }
      *(undefined4 *)(param_1 + 0x12) = 1;
    }
    else {
      FUN_100877520(param_1,0x17,0);
    }
  }
  return;
}


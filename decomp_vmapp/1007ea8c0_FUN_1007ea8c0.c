
void FUN_1007ea8c0(char *param_1,undefined1 *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  char local_43;
  char local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined4 local_36;
  undefined2 local_32;
  
  cVar1 = FUN_1007ea280();
  if (cVar1 != '\0') {
    uVar2 = _strtoul(param_1,(char **)0x0,0x10);
    local_40 = (undefined4)uVar2;
    uVar3 = _strtoul(param_1 + 9,(char **)0x0,0x10);
    local_3c = (undefined2)uVar3;
    uVar4 = _strtoul(param_1 + 0xe,(char **)0x0,0x10);
    local_3a = (undefined2)uVar4;
    uVar5 = _strtoul(param_1 + 0x13,(char **)0x0,0x10);
    local_38 = (undefined2)uVar5;
    local_41 = 0;
    local_43 = param_1[0x18];
    local_42 = param_1[0x19];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_36 = CONCAT31(local_36._1_3_,(char)uVar6);
    local_43 = param_1[0x1a];
    local_42 = param_1[0x1b];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_36._0_2_ = CONCAT11((char)uVar6,(undefined1)local_36);
    local_43 = param_1[0x1c];
    local_42 = param_1[0x1d];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_36._0_3_ = CONCAT12((char)uVar6,(undefined2)local_36);
    local_43 = param_1[0x1e];
    local_42 = param_1[0x1f];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_36 = CONCAT13((char)uVar6,(undefined3)local_36);
    local_43 = param_1[0x20];
    local_42 = param_1[0x21];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_32 = CONCAT11(local_32._1_1_,(char)uVar6);
    local_43 = param_1[0x22];
    local_42 = param_1[0x23];
    uVar6 = _strtoul(&local_43,(char **)0x0,0x10);
    local_32 = CONCAT11((char)uVar6,(undefined1)local_32);
    param_2[3] = (char)uVar2;
    param_2[2] = (char)(uVar2 >> 8);
    param_2[1] = (char)(uVar2 >> 0x10);
    *param_2 = (char)(uVar2 >> 0x18);
    param_2[5] = (char)uVar3;
    param_2[4] = (char)(uVar3 >> 8);
    param_2[7] = (char)uVar4;
    param_2[6] = (char)(uVar4 >> 8);
    param_2[9] = (char)uVar5;
    param_2[8] = (char)(uVar5 >> 8);
    *(undefined2 *)(param_2 + 0xe) = local_32;
    *(undefined4 *)(param_2 + 10) = local_36;
  }
  return;
}


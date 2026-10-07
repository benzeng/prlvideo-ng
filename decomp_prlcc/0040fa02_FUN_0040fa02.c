
undefined8 FUN_0040fa02(long *param_1,int param_2,char *param_3,__gnuc_va_list param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  char local_1098 [4094];
  undefined1 local_9a;
  undefined1 auStack_98 [8];
  long local_90;
  int local_88;
  uint local_84;
  char *local_80;
  undefined *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  int *local_50;
  int *local_48;
  int local_3c;
  int *local_38;
  int *local_30;
  int local_24;
  int *local_20;
  
  local_90 = FUN_0040f16c();
  local_88 = param_2;
  if (param_2 < 0) {
    local_88 = param_2 + 0xf;
  }
  local_88 = local_88 >> 4;
  local_84 = param_2 % 0x10;
  if (*param_1 != 0) {
    local_70 = (char *)*param_1;
    for (local_68 = (char *)*param_1; *local_68 != '\0'; local_68 = local_68 + 1) {
      if ((*local_68 == '\\') || (*local_68 == '/')) {
        local_70 = local_68 + 1;
      }
    }
    *param_1 = (long)local_70;
  }
  if (param_1[2] != 0) {
    local_60 = (char *)param_1[2];
    for (local_58 = (char *)param_1[2]; *local_58 != '\0'; local_58 = local_58 + 1) {
      if (*local_58 == ':') {
        local_60 = local_58 + 1;
      }
    }
    param_1[2] = (long)local_60;
  }
  local_80 = local_1098;
  iVar2 = FUN_0040f266(local_80);
  pcVar7 = local_80 + iVar2;
  if (local_88 == 1) {
    builtin_strncpy(local_80 + iVar2,"QT: ",5);
    pcVar7 = local_80 + iVar2 + 4;
  }
  local_80 = pcVar7;
  switch(local_84) {
  case 0:
    local_80[0] = 'F';
    local_80[1] = ' ';
    local_80[2] = '\0';
    local_80 = local_80 + 2;
    break;
  case 1:
    local_80[0] = 'W';
    local_80[1] = ' ';
    local_80[2] = '\0';
    local_80 = local_80 + 2;
    break;
  case 2:
    local_80[0] = 'I';
    local_80[1] = ' ';
    local_80[2] = '\0';
    local_80 = local_80 + 2;
    break;
  case 3:
    local_80[0] = 'D';
    local_80[1] = ' ';
    local_80[2] = '\0';
    local_80 = local_80 + 2;
    break;
  case 4:
    local_80[0] = 'T';
    local_80[1] = ' ';
    local_80[2] = '\0';
    local_80 = local_80 + 2;
    break;
  default:
    iVar2 = sprintf(local_80,"O(%u) ",(ulong)local_84);
    local_80 = local_80 + iVar2;
  }
  if (*(char *)param_1[3] != '\0') {
    iVar2 = sprintf(local_80,"%s ",param_1[3]);
    local_80 = local_80 + iVar2;
  }
  uVar3 = FUN_0040f9ec();
  uVar4 = getpid();
  iVar2 = sprintf(local_80,"/%s:%u:%u/ ",param_1[4],(ulong)uVar4,(ulong)uVar3);
  local_80 = local_80 + iVar2;
  if (((local_88 != 1) && (*param_1 != 0)) && (param_1[2] != 0)) {
    iVar2 = sprintf(local_80,"{%s @ %s:%i} ",param_1[2],*param_1,(ulong)*(uint *)(param_1 + 1));
    local_80 = local_80 + iVar2;
  }
  vsnprintf(local_80,(size_t)(auStack_98 + -(long)local_80),param_3,param_4);
  local_9a = 0;
  uVar5 = 0xffffffffffffffff;
  pcVar7 = local_80;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  (local_80 + (~uVar5 - 1))[0] = '\n';
  (local_80 + (~uVar5 - 1))[1] = '\0';
  do {
    local_50 = *(int **)(local_90 + 0x10);
    LOCK();
    local_3c = *local_50;
    *local_50 = *local_50 + 1;
    UNLOCK();
    local_78 = PTR_FUN_0061d008;
    lVar6 = -1;
    pcVar7 = local_1098;
    do {
      if (lVar6 == 0) break;
      lVar6 = lVar6 + -1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_48 = local_50;
    local_38 = local_50;
    (*(code *)PTR_FUN_0061d008)(local_1098,~(uint)lVar6 - 1);
    local_20 = local_50;
    local_30 = local_50;
    LOCK();
    local_24 = *local_50;
    *local_50 = *local_50 + -1;
    UNLOCK();
    if (local_78 == PTR_FUN_0061d008) {
      return 0;
    }
  } while( true );
}


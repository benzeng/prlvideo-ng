
undefined8 FUN_100cb5d20(long *param_1,char *param_2,char *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  long lVar5;
  undefined2 local_42;
  undefined4 local_40;
  undefined2 local_3c;
  undefined4 local_38;
  undefined2 local_34;
  undefined1 local_32;
  
  if (*(code **)(*param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100cb5d57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2,param_3);
    return uVar1;
  }
  local_32 = 0;
  local_34 = 0x2072;
  local_38 = 0x65746e45;
  local_3c = 0x20;
  local_40 = 0x726f6620;
  local_42 = 0x3a;
  uVar1 = 0;
  if (param_2 != (char *)0x0) {
    sVar2 = _strlen(param_2);
    iVar4 = (int)sVar2 + 6;
    if (param_3 != (char *)0x0) {
      sVar3 = _strlen(param_3);
      iVar4 = (int)sVar2 + 0xb + (int)sVar3;
    }
    uVar1 = FUN_100bf3540(iVar4 + 2,"ui_lib.c",0x19f);
    lVar5 = (long)(iVar4 + 2);
    FUN_100c583f0(uVar1,&local_38,lVar5);
    FUN_100c58450(uVar1,param_2,lVar5);
    if (param_3 != (char *)0x0) {
      FUN_100c58450(uVar1,&local_40,lVar5);
      FUN_100c58450(uVar1,param_3,lVar5);
    }
    FUN_100c58450(uVar1,&local_42,lVar5);
  }
  return uVar1;
}


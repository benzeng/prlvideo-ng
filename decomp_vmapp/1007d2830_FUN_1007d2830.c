
int FUN_1007d2830(char *param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_28;
  
  if ((*param_1 == '\0') || (*param_2 == '\0')) {
    iVar2 = 0;
  }
  else {
    local_28 = 0;
    FUN_10078f010(&local_28);
    uVar1 = FUN_10078f030(param_1 + 8,&local_28);
    iVar3 = *(uint *)(param_2 + 4) - uVar1;
    iVar2 = -1;
    if (uVar1 <= *(uint *)(param_2 + 4) && iVar3 != 0) {
      iVar2 = iVar3;
    }
  }
  return iVar2;
}


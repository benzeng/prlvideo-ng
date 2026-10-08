
void FUN_100339920(long *param_1,long *param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  QArrayData *local_38;
  undefined1 local_29;
  
  lVar3 = 0;
  if ((param_1[2] != 0) && (lVar3 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar3 = param_1[3];
  }
  iVar1 = FUN_100319d30(lVar3);
  if (iVar1 != 1) {
    return;
  }
  if ((char)param_1[4] != '\0') {
    FUN_100df99c0("GUI_DDLL","prl_client_app",0,
                  " VM Desktop Dynamic Layout Logic is BLOCKED, skipping processing change of host screens number"
                 );
    return;
  }
  iVar1 = *(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8);
  iVar2 = *(int *)(*param_3 + 0xc) - *(int *)(*param_3 + 8);
  if (iVar1 == iVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001003399bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x60))(param_1,0);
    return;
  }
  if (iVar1 < iVar2) {
    lVar3 = 0;
    if ((param_1[2] != 0) && (lVar3 = 0, *(int *)(param_1[2] + 4) != 0)) {
      lVar3 = param_1[3];
    }
    FUN_1003193e0(&local_38,lVar3);
    FUN_100357140(&local_38);
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        local_29 = *(int *)local_38 != 0;
        UNLOCK();
        if ((bool)local_29) goto LAB_100339a1a;
      }
      QArrayData::deallocate(local_38,2,8);
    }
  }
LAB_100339a1a:
  local_50 = 3;
  local_48 = 0;
  local_44 = 0xffff;
  local_40 = 0;
  local_4c = 0x10000;
  local_3c = *(int *)(*param_3 + 0xc) - *(int *)(*param_3 + 8) <
             *(int *)(*param_2 + 0xc) - *(int *)(*param_2 + 8);
  lVar3 = 0;
  if ((param_1[2] != 0) && (lVar3 = 0, *(int *)(param_1[2] + 4) != 0)) {
    lVar3 = param_1[3];
  }
  FUN_10031bef0(lVar3,2,&local_50);
  return;
}


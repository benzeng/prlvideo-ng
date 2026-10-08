
void FUN_10023f5e0(long *param_1,QString *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  long lVar3;
  QString local_38;
  undefined1 local_2b;
  undefined1 local_2a;
  
  if (((param_1[3] == 0) || (*(int *)(param_1[3] + 4) == 0)) || (param_1[4] == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010023f6c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,0);
    return;
  }
  FUN_100323d90(&local_38);
  cVar1 = operator==(param_2,&local_38);
  if (cVar1 == '\0') {
    if (*(int *)local_38.field0_0x0 == -1) {
      return;
    }
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_38.field0_0x0 != 0) {
        return;
      }
      local_2b = 0;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
    return;
  }
  lVar3 = 0;
  if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
    lVar3 = param_1[4];
  }
  iVar2 = FUN_100323e20(lVar3);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10023f68a;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10023f68a:
  if (iVar2 == param_3) {
    FUN_10023ae00(param_1,1);
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}


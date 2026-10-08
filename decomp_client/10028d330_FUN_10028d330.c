
void FUN_10028d330(long *param_1,int param_2,QString *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  QString local_40;
  undefined1 local_32;
  
  iVar2 = (**(code **)(*param_1 + 0x90))();
  if (iVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010028d403. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,iVar2,extraout_RDX,*(code **)(*param_1 + 0xb0));
    return;
  }
  uVar3 = FUN_10061b510(param_1[3]);
  FUN_10015a2b0(&local_40,uVar3);
  cVar1 = operator==(&local_40,param_3);
  if (*(int *)local_40.field0_0x0 != -1) {
    if (*(int *)local_40.field0_0x0 != 0) {
      LOCK();
      *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
      local_32 = *(int *)local_40.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_32) goto LAB_10028d3b4;
    }
    QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
  }
LAB_10028d3b4:
  if (cVar1 != '\0') {
    if ((param_2 == 5) && (param_4 == 1)) {
      *(undefined1 *)(param_1 + 7) = 1;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}


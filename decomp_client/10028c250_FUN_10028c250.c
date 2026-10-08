
void FUN_10028c250(long *param_1,undefined8 param_2,QString *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_RDX;
  QString local_38;
  undefined1 local_2a;
  
  iVar2 = (**(code **)(*param_1 + 0x90))();
  if (iVar2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x00010028c321. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,iVar2,extraout_RDX,*(code **)(*param_1 + 0xb0));
    return;
  }
  uVar3 = FUN_10061b510(param_1[3]);
  FUN_10015a2b0(&local_38,uVar3);
  cVar1 = operator==(&local_38,param_3);
  if (*(int *)local_38.field0_0x0 != -1) {
    if (*(int *)local_38.field0_0x0 != 0) {
      LOCK();
      *(int *)local_38.field0_0x0 = *(int *)local_38.field0_0x0 + -1;
      local_2a = *(int *)local_38.field0_0x0 != 0;
      UNLOCK();
      if ((bool)local_2a) goto LAB_10028c2cf;
    }
    QArrayData::deallocate((QArrayData *)local_38.field0_0x0,2,8);
  }
LAB_10028c2cf:
  if (cVar1 != '\0') {
    if ((param_4 == 1) && (cVar1 = FUN_100624d80(param_1[3]), cVar1 != '\0')) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    (**(code **)(*param_1 + 0xb0))(param_1,0);
  }
  return;
}


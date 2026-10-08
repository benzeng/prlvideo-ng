
void FUN_10067e730(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_38 [2];
  QArrayData *local_30;
  undefined1 local_22;
  
  cVar1 = FUN_100d80630(1);
  if (((cVar1 != '\0') || (iVar2 = CAbstractWizardModel::currentPageId(), iVar2 != 1)) ||
     (*(char *)(param_1 + 0x160) != '\0')) goto LAB_10067e7c8;
  local_30 = (QArrayData *)QString::fromAscii_helper(";",1);
  iVar2 = QString::indexOf(param_2,&local_30,0,1);
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      local_22 = *(int *)local_30 != 0;
      UNLOCK();
      if ((bool)local_22) goto LAB_10067e7c2;
    }
    QArrayData::deallocate(local_30,2,8);
  }
LAB_10067e7c2:
  if (iVar2 == -1) {
    CContentModel::setBusy(SUB81(param_1,0));
    FUN_10084a8e0(param_1);
    uVar3 = 0;
    if ((*(long *)(param_1 + 0x58) != 0) &&
       (uVar3 = 0, *(int *)(*(long *)(param_1 + 0x58) + 4) != 0)) {
      uVar3 = *(undefined8 *)(param_1 + 0x60);
    }
    FUN_10068c950(*(undefined8 *)(param_1 + 0x20),uVar3,param_2);
    return;
  }
LAB_10067e7c8:
  local_38[0] = 0;
  FUN_10067e380(param_1,param_2,local_38);
  return;
}



void FUN_100245ac0(long *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 extraout_RDX;
  char cVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x90))();
  if (-1 < iVar2) {
    if (-1 < param_2) {
      QObject::sender();
      lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_1022066e0);
      if (lVar3 == 0) {
        QObject::sender();
        lVar3 = QMetaObject::cast((QObject *)&PTR_staticMetaObject_102206800);
        if (lVar3 == 0) {
          cVar4 = '\0';
        }
        else {
          cVar4 = *(char *)(lVar3 + 0x38);
        }
      }
      else {
        cVar4 = *(char *)(lVar3 + 0x30);
      }
      lVar3 = 0;
      if ((param_1[3] != 0) && (lVar3 = 0, *(int *)(param_1[3] + 4) != 0)) {
        lVar3 = param_1[4];
      }
      cVar1 = FUN_10061c4a0(lVar3);
      if ((cVar4 != '\0') || (cVar1 == '\x01')) {
        CAbstractTask::prependSubTask((int)param_1);
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000100245b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xb0))(param_1,param_2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100245b21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb0))(param_1,iVar2,extraout_RDX,*(code **)(*param_1 + 0xb0));
  return;
}


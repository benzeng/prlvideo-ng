
QByteArray * FUN_100aaac10(QByteArray *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *local_30;
  
  uVar3 = FUN_100c59860();
  lVar4 = FUN_100c58530(uVar3);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_102282118;
  plVar5[3] = (long)FUN_100c586e0;
  if (lVar4 != 0) {
    iVar2 = FUN_100c8ff40(lVar4,param_2,0,0,0,0,0);
    if (iVar2 != 0) {
      iVar2 = FUN_100c58d60(plVar5[2],3,0,&local_30);
      QByteArray::QByteArray(param_1,local_30,iVar2);
      goto LAB_100aaacde;
    }
  }
  *(undefined **)param_1 = PTR_shared_null_1021e1288;
LAB_100aaacde:
  LOCK();
  plVar1 = plVar5 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return param_1;
}


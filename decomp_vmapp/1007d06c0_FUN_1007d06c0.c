
QByteArray * FUN_1007d06c0(QByteArray *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  char *local_30;
  
  uVar3 = FUN_10087e660();
  lVar4 = FUN_10087d330(uVar3);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_1011a64a8;
  plVar5[3] = (long)FUN_10087d4e0;
  if (lVar4 != 0) {
    iVar2 = FUN_1008b55c0(lVar4,param_2);
    if (iVar2 != 0) {
      iVar2 = FUN_10087db60(plVar5[2],3,0,&local_30);
      QByteArray::QByteArray(param_1,local_30,iVar2);
      goto LAB_1007d077c;
    }
  }
  *(undefined **)param_1 = PTR_shared_null_100ba20d0;
LAB_1007d077c:
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


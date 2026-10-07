
void FUN_1003df810(undefined8 *param_1)

{
  long *plVar1;
  QArrayData *pQVar2;
  QArrayData *local_30;
  
  *param_1 = &PTR_FUN_100bbe3b0;
  if (0 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"Real video data source destruct <%s>",
                  local_30 + *(long *)(local_30 + 0x10));
    if (*(int *)local_30 != -1) {
      if (*(int *)local_30 != 0) {
        LOCK();
        *(int *)local_30 = *(int *)local_30 + -1;
        UNLOCK();
        if (*(int *)local_30 != 0) goto LAB_1003df89c;
      }
      QArrayData::deallocate(local_30,1,8);
    }
  }
LAB_1003df89c:
  plVar1 = (long *)param_1[4];
  if (plVar1 != (long *)0x0) {
    if (param_1[3] != 0) {
      (**(code **)(*plVar1 + 0x38))();
      plVar1 = (long *)param_1[4];
    }
    (**(code **)(*plVar1 + 0x28))();
    plVar1 = (long *)FUN_100097980(DAT_1011c3698);
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1[4]);
  }
  pQVar2 = (QArrayData *)param_1[5];
  if (*(int *)pQVar2 != -1) {
    if (*(int *)pQVar2 != 0) {
      LOCK();
      *(int *)pQVar2 = *(int *)pQVar2 + -1;
      UNLOCK();
      if (*(int *)pQVar2 != 0) goto LAB_1003df913;
      pQVar2 = (QArrayData *)param_1[5];
    }
    QArrayData::deallocate(pQVar2,2,8);
  }
LAB_1003df913:
  FUN_1002e5890(param_1);
  return;
}


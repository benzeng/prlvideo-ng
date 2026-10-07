
void FUN_1003df5e0(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  QArrayData *local_40;
  QArrayData *local_38;
  
  FUN_1002e5870();
  *param_1 = &PTR_FUN_100bbe3b0;
  piVar1 = (int *)*param_2;
  param_1[5] = piVar1;
  if (1 < *piVar1 + 1U) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  if (0 < DAT_1011c568c) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"Real video data source construct <%s>",
                  local_38 + *(long *)(local_38 + 0x10));
    if (*(int *)local_38 != -1) {
      if (*(int *)local_38 != 0) {
        LOCK();
        *(int *)local_38 = *(int *)local_38 + -1;
        UNLOCK();
        if (*(int *)local_38 != 0) goto LAB_1003df691;
      }
      QArrayData::deallocate(local_38,1,8);
    }
  }
LAB_1003df691:
  param_1[3] = 0;
  plVar2 = (long *)FUN_100097980(DAT_1011c3698);
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,param_1 + 5);
  param_1[4] = lVar3;
  if ((lVar3 == 0) && (-1 < DAT_1011c568c)) {
    QString::toUtf8();
    FUN_1008e3970("","USB",0,"[UVC] Can\'t acquire sorce for %s",
                  local_40 + *(long *)(local_40 + 0x10));
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return;
}


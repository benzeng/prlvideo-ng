
long * FUN_100a24020(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  QArrayData *local_58;
  string local_50 [31];
  undefined1 local_31;
  
  *param_1 = (long)param_1;
  param_1[1] = (long)param_1;
  param_1[2] = 0;
  lVar2 = *param_2;
  if (*(int *)(lVar2 + 8) != *(int *)(lVar2 + 0xc)) {
    plVar3 = (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 8) * 8);
    do {
      if (*(int *)(*plVar3 + 0x10) == 0) {
        QString::toUtf8();
        lVar2 = *(long *)(local_58 + 0x10);
        _strlen((char *)(local_58 + lVar2));
        std::string::__init((char *)local_50,(ulong)(local_58 + lVar2));
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100a240e1;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_100a240e1:
        plVar1 = operator_new(0x28);
        std::string::string((string *)(plVar1 + 2),local_50);
        plVar1[1] = (long)param_1;
        lVar2 = *param_1;
        *plVar1 = lVar2;
        *(long **)(lVar2 + 8) = plVar1;
        *param_1 = (long)plVar1;
        param_1[2] = param_1[2] + 1;
        std::string::~string(local_50);
        lVar2 = *param_2;
      }
      plVar3 = plVar3 + 1;
    } while (plVar3 != (long *)(lVar2 + 0x10 + (long)*(int *)(lVar2 + 0xc) * 8));
  }
  return param_1;
}


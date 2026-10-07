
void FUN_1004ee550(long param_1,long *param_2)

{
  long ***ppplVar1;
  long ****pppplVar2;
  long lVar3;
  long *plVar4;
  QArrayData *pQVar5;
  bool bVar6;
  long ****pppplVar7;
  long ***local_50;
  long ***local_48;
  long local_40;
  undefined1 uStack_31;
  
  QMutex::lock();
  if (*(char *)(param_1 + 0x38) == '\0') {
    bVar6 = true;
    if (((*(char *)(param_1 + 0x39) == '\0') && (*(long *)(param_1 + 0x50) == 0)) &&
       (*(long *)(param_1 + 0x68) != 0)) {
      local_40 = 0;
      local_50 = (long ***)&local_50;
      local_48 = (long ***)&local_50;
      lVar3 = FUN_1004ee820(param_1,param_2,&local_50);
      if (lVar3 == 0) {
        FUN_1004ef7f0(param_1 + 0x58);
        *(undefined4 *)(param_1 + 0x3c) = 0;
        QMutex::unlock();
        lVar3 = FUN_1002a6120(param_2[1],0,1);
        *(undefined4 *)(lVar3 + 0x10) = 0;
        FUN_1004c07d0(*param_2,param_2[1],0);
        param_2[1] = 0;
      }
      else {
        QMutex::unlock();
        FUN_1004ee8e0(param_2,&local_50);
      }
      bVar6 = false;
      if (local_40 != 0) {
        ppplVar1 = (long ***)*local_48;
        ppplVar1[1] = local_50[1];
        *local_50[1] = (long *)ppplVar1;
        local_40 = 0;
        pppplVar7 = (long ****)local_48;
        while (pppplVar7 != &local_50) {
          pppplVar2 = (long ****)pppplVar7[1];
          pQVar5 = (QArrayData *)pppplVar7[3];
          if (*(int *)pQVar5 != -1) {
            if (*(int *)pQVar5 != 0) {
              LOCK();
              *(int *)pQVar5 = *(int *)pQVar5 + -1;
              uStack_31 = *(int *)pQVar5 != 0;
              UNLOCK();
              if ((bool)uStack_31) goto LAB_1004ee700;
              pQVar5 = (QArrayData *)pppplVar7[3];
            }
            QArrayData::deallocate(pQVar5,2,8);
          }
LAB_1004ee700:
          operator_delete(pppplVar7);
          pppplVar7 = pppplVar2;
        }
      }
    }
    else {
      plVar4 = operator_new(0x20);
      lVar3 = *param_2;
      plVar4[3] = param_2[1];
      plVar4[2] = lVar3;
      plVar4[1] = param_1 + 0x40;
      lVar3 = *(long *)(param_1 + 0x40);
      *plVar4 = lVar3;
      *(long **)(lVar3 + 8) = plVar4;
      *(long **)(param_1 + 0x40) = plVar4;
      *(long *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x38) = 0;
    bVar6 = false;
    QMutex::unlock();
    lVar3 = FUN_1002a6120(param_2[1],0,1);
    *(undefined4 *)(lVar3 + 0x10) = 0;
    FUN_1004c07d0(*param_2,param_2[1],0);
    param_2[1] = 0;
  }
  if (bVar6) {
    QMutex::unlock();
  }
  return;
}


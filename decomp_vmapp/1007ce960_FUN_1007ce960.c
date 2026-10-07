
bool FUN_1007ce960(long param_1,QByteArray *param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  bool bVar8;
  QArrayData *local_40;
  undefined1 local_32;
  
  lVar4 = FUN_1007d0410(param_1 + 8);
  plVar5 = operator_new(0x20);
  *(undefined4 *)(plVar5 + 1) = 1;
  plVar5[2] = lVar4;
  *plVar5 = (long)&PTR_FUN_1011a5c10;
  plVar5[3] = (long)FUN_1008a17f0;
  if (lVar4 == 0) {
    bVar8 = false;
    goto LAB_1007ceae5;
  }
  lVar4 = FUN_100891f40();
  plVar6 = operator_new(0x20);
  *(undefined4 *)(plVar6 + 1) = 1;
  plVar6[2] = lVar4;
  *plVar6 = (long)&PTR_FUN_1011a5fc8;
  plVar6[3] = (long)FUN_1008924e0;
  if (lVar4 == 0) {
    bVar8 = false;
  }
  else {
    lVar4 = FUN_1007d0570(param_1 + 0x10);
    if (lVar4 == 0) {
      bVar8 = false;
    }
    else {
      iVar3 = FUN_100892130(plVar6[2],6,lVar4);
      if (iVar3 == 0) {
        FUN_10086c430(lVar4);
        bVar8 = false;
      }
      else {
        lVar4 = plVar5[2];
        lVar2 = plVar6[2];
        uVar7 = FUN_100891760();
        lVar4 = FUN_1008b7a00(lVar4,lVar2,uVar7);
        if (lVar4 == 0) {
          bVar8 = false;
        }
        else {
          FUN_1007d0590(&local_40,lVar4);
          QByteArray::operator=(param_2,(QByteArray *)&local_40);
          if (*(int *)local_40 == 0) {
LAB_1007cea8e:
            QArrayData::deallocate(local_40,1,8);
          }
          else if (*(int *)local_40 != -1) {
            LOCK();
            *(int *)local_40 = *(int *)local_40 + -1;
            local_32 = *(int *)local_40 != 0;
            UNLOCK();
            if (!(bool)local_32) goto LAB_1007cea8e;
          }
          bVar8 = *(int *)(*(long *)param_2 + 4) != 0;
        }
      }
    }
  }
  LOCK();
  plVar1 = plVar6 + 1;
  lVar4 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
  }
LAB_1007ceae5:
  LOCK();
  plVar6 = plVar5 + 1;
  lVar4 = *plVar6;
  *(int *)plVar6 = (int)*plVar6 + -1;
  UNLOCK();
  if ((int)lVar4 == 1) {
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  return bVar8;
}

